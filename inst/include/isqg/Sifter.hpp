// -*- mode: c++ -*-
///////////////////////////////////////////////////////////////////////////
/*
 This file is part of isqg, a R package for in silico quantitative genetics

              Copyright (C) 2018 Fernando H. Toledo CIMMYT
              
 * Filename: Sifter.hpp
 
 * Description: C++ headers to be used by isqg R package
 
 * Author: Fernando H. Toledo
 
 * Maintainer: Fernando H. Toledo
 
 * Created: Fr Aug 31 2018
 
 * Updated: -
 
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
///////////////////////////////////////////////////////////////////////////

# ifndef _SIFTER_HPP_
# define _SIFTER_HPP_

# include <isqg/FwdDefs.hpp>
# include <isqg/FwdFuncs.hpp>

class Node {

public:

  // pure abstractions
  virtual Gamete lazy_gamete(Maps, Guides, Genome) = 0 ;
  // virtual vstr lazy_retrieve(Genome) = 0 ;
  
} ;

class Proxy {

public:

  Proxy(Node *, Genome) ;

  // polymorphic interface
  Gamete lazy_gamete(Genome) ;
  // vstr lazy_retrieve(Genome) ;
  
private:

  Guides   parser(Genome) ;

  Maps     chiasmatas ;
  Guides   guides ;
  Node   * parent ;

} ;

class Known : public Node {

public:

  // constructor
  Known(Tape cis_, Tape trans_) : cis(cis_), trans(trans_) { }

  // polymorphic
  Gamete lazy_gamete(Maps, Guides, Genome) ;
  // vstr lazy_retrieve(Genome) ;

private:

  Tape cis, trans ;
  
} ;

class Unknown : public Node {

public:

  // constructor
  Unknown(Node * father_, Node * mother_, Genome spp) : 
    father(new Proxy(father_, spp)), 
    mother(new Proxy(mother_, spp))
    { }

  // polymorphic
  Gamete lazy_gamete(Maps, Guides, Genome) ;
  // vstr lazy_retrieve(Genome) ;

private:

  Proxy * father ;
  Proxy * mother ;

} ;

# endif // _SIFTER_HPP_

// \EOF
///////////////////////////////////////////////////////////////////////////
