% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/R6Classes.R
\docType{class}
\name{Trait}
\alias{Trait}
\alias{.R_Trait_ctor}
\title{Class providing object with methods to mimic in silico Traits}
\value{
Objects of R6 class with methods to mimic in silico Traits.
}
\description{
Mean to mimic a in silico Trait. It is the working instances of
    the simulator.
}
\details{
Object of R6 class that points to C++ objetcs.
}
\section{Public fields}{
\if{html}{\out{<div class="r6-fields">}}
\describe{
\item{\code{.ptr}}{External pointer to the instance of the C++ class Specie.}
}
\if{html}{\out{</div>}}
}
\section{Methods}{
\subsection{Public methods}{
\itemize{
\item \href{#method-new}{\code{.R_Trait_ctor$new()}}
\item \href{#method-print}{\code{.R_Trait_ctor$print()}}
\item \href{#method-alpha}{\code{.R_Trait_ctor$alpha()}}
\item \href{#method-clone}{\code{.R_Trait_ctor$clone()}}
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-new"></a>}}
\if{latex}{\out{\hypertarget{method-new}{}}}
\subsection{Method \code{new()}}{
Create an instance of a Trait.
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{.R_Trait_ctor$new(ptr)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{ptr}}{an Smart pointer to an instance of a Trait C++ class.}
}
\if{html}{\out{</div>}}
}
\subsection{Returns}{
A new `Trait` object.
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-print"></a>}}
\if{latex}{\out{\hypertarget{method-print}{}}}
\subsection{Method \code{print()}}{
Print/Show an instance of the Trait class.
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{.R_Trait_ctor$print(...)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{...}}{further arguments to be passed to print.}
}
\if{html}{\out{</div>}}
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-alpha"></a>}}
\if{latex}{\out{\hypertarget{method-alpha}{}}}
\subsection{Method \code{alpha()}}{
Evaluates the breeding value.
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{.R_Trait_ctor$alpha(gid)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{gid}}{an instance of the class Specimen.}
}
\if{html}{\out{</div>}}
}
\subsection{Returns}{
the breeding value of the given specimen for the trait.
}
}
\if{html}{\out{<hr>}}
\if{html}{\out{<a id="method-clone"></a>}}
\if{latex}{\out{\hypertarget{method-clone}{}}}
\subsection{Method \code{clone()}}{
The objects of this class are cloneable with this method.
\subsection{Usage}{
\if{html}{\out{<div class="r">}}\preformatted{.R_Trait_ctor$clone(deep = FALSE)}\if{html}{\out{</div>}}
}

\subsection{Arguments}{
\if{html}{\out{<div class="arguments">}}
\describe{
\item{\code{deep}}{Whether to make a deep clone.}
}
\if{html}{\out{</div>}}
}
}
}
