//
//        Gauss_Laguerre_Nodes_and_Weights_26.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 26.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_26_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_26_hpp__

void Gauss_Laguerre_Nodes_and_Weights_26(long double*& nodes, long double*& weights) {
	nodes	= new long double[26];
	weights	= new long double[26];

	nodes[0] 	= 0.054564482717908535954120498793488061912761716111629193712199607362378366128483783261068069855535992471675535617160289317909508066;
	weights[0] 	= 0.132616884147601980205023512392359473632388651441585919354418237581384626996345907394328296011448396839241863470356518397524605;

	nodes[1] 	= 0.2877079791061236071172884279596258529530151784827813611764751153064482620626038817283206173209732188019081478389037472321755242;
	weights[1] 	= 0.2448673680162924353572925162785582087231489665709622849081635336199186044302362136596259054580832226122170615528198197665174;

	nodes[2] 	= 0.70801601947864492234285357526719482655740929631295095249828335955052208590220794073414321100952706041316863289950506243823830929;
	weights[2] 	= 0.253392022127125575677393295653279089847449062598075327308861724433907021591859066788880810899559809962007336316457959911449;

	nodes[3] 	= 1.3170813660438441397113615697987696741982345743593035460901143493924287563589328895697947694759885835039965161945359137358039036;
	weights[3] 	= 0.18864598364175989419812234640096998129192910476234261616321822275577346708198588029336309367499705246387570061620141577479;

	nodes[4] 	= 2.1171209446284692589143144757324753854794729187999805821657668622622940951148199648223517779775353944429521635951582791809515738;
	weights[4] 	= 0.1079123416425880728171498465375125224067484132602104540492376282441211579036300004302681498814249102198684224768288883356;

	nodes[5] 	= 3.1110938788779341219346314635070620890706022965074272049000770653568890137233831466388924087938262187244659663927380284668112973;
	weights[5] 	= 0.0486565654489217971794979718621336782133602238552572256262133861821559902862490466442410222800751990097572647806126110786;

	nodes[6] 	= 4.3027708760403702810513427158046007516925697871209633154380363502261560410972912361102268149477960468313252286112911355257453529;
	weights[6] 	= 0.017482137978489427639268347747769622815163309106570935535074923290343391055334447219683779934835878359932769143704517481;

	nodes[7] 	= 5.6968188261694659309943005597793573850628975449834130297897844777743699622007699318107094720819278644267117276895398225107320777;
	weights[7] 	= 0.005024983836831312291933332215852103091289623086751543978418214375488652672845710838498484227876204963761075915160163508;

	nodes[8] 	= 7.2989099630701832033018448679473798824208724729499644607816179409262437234802660464780737624274217558622281286283939042993169836;
	weights[8] 	= 0.001155269160749609771291246520501369677835367459564674881290656614107001400015199598078974582640658261191107610048825693;

	nodes[9] 	= 9.115862897294214750167331070546874151038672540446858628320502728013287001406791398313803726095313444573145668528685217747310901;
	weights[9] 	= 0.000211791158300360477360062166649400750570033307975705602124509312868570973761232935199348858242799131958680936436062981;

	nodes[10] 	= 11.155824954937510504614556247022648346982992977099264801812229148492307907966288711177228151884357047196992792989987373694777693;
	weights[10] 	= 0.000030792526041715131296032379318941921420773991650045258124028048530857865906204372681475684492399450830978753980734083;

	nodes[11] 	= 13.428509032459204123066148801906984769720571319194285957125225158632960263471055630092588051549081308573492729659402952016980305;
	weights[11] 	= 3.523440091024370039176005154275740566703732082714119450245917948720957412068973321916734562409360226803315653753108e-6;

	nodes[12] 	= 15.945503948143318926253506174575016479130925865258569759397681116100321953284179483866571485728771481725588897162775406426604454;
	weights[12] 	= 3.141556325359245895251594625175081406997600617416793074988057971005926077645313136008546018939357401122860046271768e-7;

	nodes[13] 	= 18.720686145460284721107517827814163071223355541277112472296107946599641739297015217121704241971288524473379786597426959036210381;
	weights[13] 	= 2.155456814403710423081226870538234563371772686949042228384900402026099177274768502031685819433155684215667361349893e-8;

	nodes[14] 	= 21.770774608541435713125425593294494183248346403451697767808165733697542048757862997156249861150740948304365365888431668656879183;
	weights[14] 	= 1.120478117670478406418476139052815791424093038756459946868788339164714063178174952252510656137841477341995013487706e-9;

	nodes[15] 	= 25.116093662316737710081848919138515141689622861609088873660244007874764134149896926114187646035681108789030322099700477883944583;
	weights[15] 	= 4.32900240513688527265091523576838856406372391078450070509719581361394601717392111123151099400490416431797650551769e-11;

	nodes[16] 	= 28.781646873450168931613468212841418298961860382408988178120366436418820823825810768114592979680741915533872269880067567897586435;
	weights[16] 	= 1.21368915983720524798694772367058337396633591926631423391453569335942035600032203496981191394919904779498475903468e-12;

	nodes[17] 	= 32.798673218409976318328428237178970608094944612424940337345372902808339099599554991040430505339494414871175834674115886337643513;
	weights[17] 	= 2.39607422326129944203638094880723590578645140647885312241872592993447123431585856047523324661452614554906429203507e-14;

	nodes[18] 	= 37.206982629612827149539672526584861026809604995456257094695712651854853473818421465828419262287294052354693786978359322475195895;
	weights[18] 	= 3.20521855983162643531121257667411463406501967303497962297281035508788659485264955404498264419042654299021608893779e-16;

	nodes[19] 	= 42.058615924434533810180194460688711921085925890166610063371369583532561946625728859506808172886531886946229805321035977419704674;
	weights[19] 	= 2.76249415060793681862282710058909859667002646967975602832749513019141705011263857767352683993697981569517556161693e-18;

	nodes[20] 	= 47.423899356281529262726367359133337716970894010266229170278396614453011949074211929215679529458355783292968989401697903112915548;
	weights[20] 	= 1.43306436407272878525122513347622073155235679980703857492757633656203838711509877926989339810884305339472500788713e-20;

	nodes[21] 	= 53.402185197253291637722141009299672094663514859091514116373576782194924646567989611257743783161374249207943227930667588138652126;
	weights[21] 	= 4.0648446941130335833971392047924138121097287546614270025473598233101825979288636361487945145589095776481059252145e-23;

	nodes[22] 	= 60.142775690076896773566736117113763580955780284074842141120200145803361545729134258721062397658682032680379960418440479428173211;
	weights[22] 	= 5.45951332279888851708088393920519827387081835069989880310626860701465566861777707138235809157889988933152923136804e-26;

	nodes[23] 	= 67.891479705451292611900280245351805515479068650426239558402209333059093255712448076450251596356579221129890596485383553478288423;
	weights[23] 	= 2.743220987135326424447949998408531857631734626137833269827822076774923136690293122937718074703683652750254851920741e-29;

	nodes[24] 	= 77.117999069332859716738569756305135217636408774995783281181064718620368828498880141188552508851358490319525711876124862396721562;
	weights[24] 	= 3.3002304781520748806662848602133287852553067044656213830182098035622908123208466740007119159089806373074825359676226e-33;

	nodes[25] 	= 89.028402750410973337945749286613673966959674246723304152139219863686109076145970713680545196013821954548892206640470621144726581;
	weights[25] 	= 3.08375226958557708014721412071303614824044898282951464160669023371904705691350036664720057186318661644363052182848095e-38;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_26_hpp__)*/