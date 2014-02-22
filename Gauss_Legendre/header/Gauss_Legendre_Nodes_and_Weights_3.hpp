//
//        Gauss_Legendre_Nodes_and_Weights_3.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 3.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_3_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_3_hpp__

void Gauss_Legendre_Nodes_and_Weights_3(long double*& nodes, long double*& weights) {
	nodes	= new long double[3];
	weights	= new long double[3];

	nodes[0] 	= 0;
	weights[0] 	= 0.88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888889;

	nodes[1] 	= -0.77459666924148337703585307995647992216658434105831816531751475322269661838739580670385747537173470358326044137218992940263790809;
	weights[1] 	= 0.5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555556;

	nodes[2] 	= 0.77459666924148337703585307995647992216658434105831816531751475322269661838739580670385747537173470358326044137218992940263790809;
	weights[2] 	= 0.5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555556;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_3_hpp__)*/