//
//        Gauss_Hermite_Nodes_and_Weights_9.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 9.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_9_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_9_hpp__

void Gauss_Hermite_Nodes_and_Weights_9(long double*& nodes, long double*& weights) {
	nodes	= new long double[9];
	weights	= new long double[9];

	nodes[0] 	= 0;
	weights[0] 	= 0.72023521560605095712433472338941772507328993772592238860751554635292902992905434671744026686518640372468899499653386998501024624;

	nodes[1] 	= -0.72355101875283757332263986457941209470651921229487533560724933631475078643364053718384910243830773393739916449700327819040196373;
	weights[1] 	= 0.4326515590025557501998121129560211174757166790874507353757711770953246596347759853619606906666106133346194212965630587333338419;

	nodes[2] 	= 0.72355101875283757332263986457941209470651921229487533560724933631475078643364053718384910243830773393739916449700327819040196373;
	weights[2] 	= 0.4326515590025557501998121129560211174757166790874507353757711770953246596347759853619606906666106133346194212965630587333338419;

	nodes[3] 	= -1.4685532892166679316670157392486279827277910356393010970878346758326547292969322256143713759206513022312362177792656033500447945;
	weights[3] 	= 0.088474527394376573287975114747566314074906129271419724055013774962487977749298708048564475451662839749116449058997866610422279;

	nodes[4] 	= 1.4685532892166679316670157392486279827277910356393010970878346758326547292969322256143713759206513022312362177792656033500447945;
	weights[4] 	= 0.088474527394376573287975114747566314074906129271419724055013774962487977749298708048564475451662839749116449058997866610422279;

	nodes[5] 	= -2.2665805845318431118020969328376203485513298814254028020960493451249852270754511773600169428480760613004731916043725742696178746;
	weights[5] 	= 0.0049436242755369472172245659776337479027696544211813016955412361043115959837316716663058702145024059889815904019186185683099745;

	nodes[6] 	= 2.2665805845318431118020969328376203485513298814254028020960493451249852270754511773600169428480760613004731916043725742696178746;
	weights[6] 	= 0.0049436242755369472172245659776337479027696544211813016955412361043115959837316716663058702145024059889815904019186185683099745;

	nodes[7] 	= -3.1909932017815276072300477953809091249689621222382294426115641501624906382579153045304525753574406440911283079581964731643869142;
	weights[7] 	= 0.000039606977263264381904586294642549408737296418180608676819933587866893963182552251924158603903271773051453556394806428546857865;

	nodes[8] 	= 3.1909932017815276072300477953809091249689621222382294426115641501624906382579153045304525753574406440911283079581964731643869142;
	weights[8] 	= 0.000039606977263264381904586294642549408737296418180608676819933587866893963182552251924158603903271773051453556394806428546857865;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_9_hpp__)*/