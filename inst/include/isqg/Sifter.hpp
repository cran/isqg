// -*- mode: c++ -*-
///////////////////////////////////////////////////////////////////////////
/*
 This file is part of isqg, a R package for in silico quantitative genetics

              Copyright (C) 2018 Fernando H. Toledo CIMMYT
              
 * Filename: Sifter.hpp
 
 * Description: C++ headers to be used by isqg R package
 
 * Author: Fernando H. Toledo
 
 * Maintainer: Fernando H. Toledo
 
 * Created: Th Jan 23 2020
 
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

  // constructors:
  Node(void) : x(0) { } // needs empty default
  Node(int) ;

  // concepts:
  void initialize(Codes) ;
  
private:

  const int x ;
  mutable Codes prototype ;

} ;

class Policy : public boost::default_bfs_visitor {

public:

  // constructor:
  Policy(Specie) ;

  // concepts:

  // invoked on every vertex of the graph before the start of the search
  void initialize_vertex(const Gds &, const DAG &) const ;

  // invoked when a vertex is encountered (1st time)
  void discover_vertex(const Gds &, const DAG &) const ;

  // invoked on a vertex when popped in the queue (before examine out-edges)
  void examine_vertex(const Gds &, const DAG &) const ;

  // invoked on a vertex after all out-edges adjacent vertices were discovered
  void finish_vertex(const Gds &, const DAG &) const ;

  // invoked on every out-edge of each vertex after it is discovered
  void examine_edge(const Kds &, const DAG &) const ;

  // invoked on each edge as it becomes a member of the search tree
  void tree_edge(const Kds &, const DAG &) const ;

  // invoked on the subset of non-tree edges whose target vertex is colored gray
  // gray vertex is currently in the queue
  void gray_target(const Kds &, const DAG &) const ;

  // invoked on the subset of non-tree edges whose target vertex is colored black
  // black vertex has been removed from the queue
  void black_target(const Kds &, const DAG &) const ;

private:

  GPtr slot ;
  
} ;

int look(std::vector<int>, int) ;

# endif // _SIFTER_HPP_

// \EOF
///////////////////////////////////////////////////////////////////////////
