// -*- mode: c++ -*-
///////////////////////////////////////////////////////////////////////////
/*
  This file is part of isqg, a R package for in silico quantitative genetics

  Copyright (C) 2018 Fernando H. Toledo CIMMYT
              
  * Filename: Sifter.cpp
 
  * Description: C++ implementations to be used by isqg R package
 
  * Author: Fernando H. Toledo
 
  * Maintainer: Fernando H. Toledo
 
  * Created: Fr Aug 31 2018
 
  This program is free software; you can redistribute it and/or modify 
  it under the terms of the GNU General Public License as published by 
  the Free Software Foundation; either version 2 of the License, or 
  (at your option) any later version.

  This program is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of 
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software Foundation, 
  Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
                                                         
  `` Far better an approximate answer to the right question, which is 
  often vague, than the exact answer to the wrong question, which can
  always be made precise ''
  --John Tukey, Ann. Math. Stat. 33(1):13 1962
*/
//////////////////////////////////////////////////////////////////////////

# include <isqg.h>

Proxy::Proxy(Node * ancestor, Genome spp) : parent(ancestor) {

  chiasmatas =  spp.pseudo_gamete() ;
 
  guides = parser(spp) ;
  
}

Gamete Proxy::lazy_gamete(Genome spp) {

  return parent->lazy_gamete(chiasmatas, guides, spp) ;
  
}

Guides Proxy::parser(Genome spp) {

  Guides guides(spp.ensemble.size()) ;
  
  for (auto it = 0; it < spp.ensemble.size(); it++)
    guides.at(it) = static_cast<bool>(R::rbinom(1., .5)) ;

  return guides ;

}

/*
vstr Proxy::retrieve(Genome spp) {

  return parent->retrieve(spp) ;
  
}
*/

Gamete Known::lazy_gamete(Maps chiasmatas, Guides guides, Genome spp) {

  Gamete arrow(spp.lazy_gamete(chiasmatas, guides)) ;
  
  Gamete gamete(arrow.size()) ;
  
  for (auto it = 0; it < arrow.size(); it++)
    gamete.at(it) = (arrow.at(it) & cis.at(it)) | (~arrow.at(it) & trans.at(it)) ;

  return gamete ;
  
}

/*
vstr Known::retrieve(Genome spp) {

  vstr me(2) ;

  boost::to_string(cis, me.at(0)) ;
  boost::to_string(trans, me.at(1)) ;

  return me ;
  
}
*/

Gamete Unknown::lazy_gamete(Maps chiasmatas, Guides guides, Genome spp) {

  Gamete arrow(spp.lazy_gamete(chiasmatas, guides)) ;
  Gamete cis(father->lazy_gamete(spp)) ;
  Gamete trans(mother->lazy_gamete(spp)) ;
  
  Gamete gamete(arrow.size()) ;
  
  for (auto it = 0; it < arrow.size(); it++)
    gamete.at(it) = (arrow.at(it) & cis.at(it)) | (~arrow.at(it) & trans.at(it)) ;

  return gamete ;
  
}

/*
vstr Unknown::retrieve(Genome spp) {

  vstr me(2) ;

  boost::to_string(father->gamete(spp), me.at(0)) ;
  boost::to_string(mother->gamete(spp), me.at(1)) ;

  return me ;
  
}
*/

/*
Node * parser_known(Rcpp::List gid) {

  return new Known(Rcpp::as<strs>(gid["cis"]), Rcpp::as<strs>(gid["trans"])) ;
  
}
*/

/*
Node * parser_unknown(Node * father, Node * mother) { 

  return new Unknown(father, mother) ; 
  
}
*/

// \EOF
///////////////////////////////////////////////////////////////////////////
