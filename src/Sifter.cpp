// -*- mode: c++ -*-
///////////////////////////////////////////////////////////////////////////
/*
  This file is part of isqg, a R package for in silico quantitative genetics

  Copyright (C) 2018 Fernando H. Toledo CIMMYT
              
  * Filename: Sifter.cpp
 
  * Description: C++ implementations to be used by isqg R package
 
  * Author: Fernando H. Toledo
 
  * Maintainer: Fernando H. Toledo
 
  * Created: Th Jan 23 2020
 
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

// constructor
Node::Node(int value) : x(value) { }

// concept
void Node::initialize(Codes c) { prototype = c ; }

// constructor
Policy::Policy(Specie spp) : slot(spp.slot) { }

// concepts

// invoked on every vertex of the graph before the start of the search
void Policy::initialize_vertex(const Gds & gid, const DAG & ped) const {

  Gamete test(this->slot->gamete()) ;

  // ped[gid].initialize(slot->gamete()) ;

  Rcpp::Rcout << "gamete installed... " << gid << std::endl ;

}

// invoked when a vertex is encountered (1st time)
void Policy::discover_vertex(const Gds & gid, const DAG & ped) const { }

// invoked on a vertex when popped in the queue (before examine out-edges)
void Policy::examine_vertex(const Gds & gid, const DAG & ped) const { }

// invoked on a vertex after all out-edges adjacent vertices were discovered
void Policy::finish_vertex(const Gds & gid, const DAG & ped) const { }

// invoked on every out-edge of each vertex after it is discovered
void Policy::examine_edge(const Kds & kin, const DAG & ped ) const { }

// invoked on each edge as it becomes a member of the search tree
void Policy::tree_edge(const Kds & kin, const DAG & ped) const { }

// invoked on the subset of non-tree edges whose target vertex is colored gray
// gray vertex is currently in the queue
void Policy::gray_target(const Kds & kin, const DAG & ped) const { }

// invoked on the subset of non-tree edges whose target vertex is colored black
// black vertex has been removed from the queue
void Policy::black_target(const Kds & kin, const DAG & ped) const { }

int look(std::vector<int> ref, int target) {

  return std::distance(ref.begin(), std::find(ref.begin(), ref.end(), target)) ;
  
}

// [[Rcpp::export(name = .bar)]]
int bar(std::vector<int> p, std::vector<int> i, std::vector<int> j, SEXP s) {

  Specie spp(Rcpp::as<Specie>(s)) ;

  DAG pedigree ;

  for (auto it = 0; it < p.size(); it++)
    boost::add_vertex(Node(p.at(it)), pedigree) ;

  for (auto it = 0; it < i.size(); it++)
    boost::add_edge(look(p, i.at(it)), look(p, j.at(it)), pedigree) ;

  Policy actions(spp) ;

  boost::breadth_first_search(pedigree, 0, boost::visitor(actions)) ;

  return 1 ;

}

// [[Rcpp::export(name = .foo)]]
int foo(int i) { return i + 1 ; }


// \EOF
///////////////////////////////////////////////////////////////////////////
