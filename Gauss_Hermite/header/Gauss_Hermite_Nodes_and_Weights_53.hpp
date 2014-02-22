//
//        Gauss_Hermite_Nodes_and_Weights_53.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 53.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_53_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_53_hpp__

void Gauss_Hermite_Nodes_and_Weights_53(long double*& nodes, long double*& weights) {
	nodes	= new long double[53];
	weights	= new long double[53];

	nodes[0] 	= 0;
	weights[0] 	= 0.30370259492878002634417364809118703890852551179104877703865153162792122411271908504605083481931081454883172410956166318487532994;

	nodes[1] 	= -0.30374624334991530215734997256838449196012336721284347818849077912242144381893158370888964916428221538144519446026055823052558056;
	weights[1] 	= 0.277055644035373695619743166039622236223253478993603169214823267312131928767749239899079140136237977638464296436721068388397933;

	nodes[2] 	= 0.30374624334991530215734997256838449196012336721284347818849077912242144381893158370888964916428221538144519446026055823052558056;
	weights[2] 	= 0.277055644035373695619743166039622236223253478993603169214823267312131928767749239899079140136237977638464296436721068388397933;

	nodes[3] 	= -0.60775496588729694722310198283171995185086482257856251530080374836900226579061247319020556932212747551756716630638861720449005393;
	weights[3] 	= 0.21027400626010301578840086095250157397761464989130171662750130452035418802157714429796102367338810448747126989911771148792546;

	nodes[4] 	= 0.60775496588729694722310198283171995185086482257856251530080374836900226579061247319020556932212747551756716630638861720449005393;
	weights[4] 	= 0.21027400626010301578840086095250157397761464989130171662750130452035418802157714429796102367338810448747126989911771148792546;

	nodes[5] 	= -0.91229161088998862961769380079944467797862583392770709974106156797152842994398177652088247472059745035338919716345569481703559233;
	weights[5] 	= 0.1326450149924720088964914319981096553573889300957574004655273333732046469961125476456850304719458714548471303924721827743659;

	nodes[6] 	= 0.91229161088998862961769380079944467797862583392770709974106156797152842994398177652088247472059745035338919716345569481703559233;
	weights[6] 	= 0.1326450149924720088964914319981096553573889300957574004655273333732046469961125476456850304719458714548471303924721827743659;

	nodes[7] 	= -1.2176276482547365915427953539355612233041577747774087422164718372301038455806402029848863404550624522549798629067161301777796318;
	weights[7] 	= 0.069436105549292517375519285480029268093335732250875663085871307640527902284074284529632107855874131161506816260693387933172;

	nodes[8] 	= 1.2176276482547365915427953539355612233041577747774087422164718372301038455806402029848863404550624522549798629067161301777796318;
	weights[8] 	= 0.069436105549292517375519285480029268093335732250875663085871307640527902284074284529632107855874131161506816260693387933172;

	nodes[9] 	= -1.5240438405087579033372401148578187098396836808674786486688476407831937327646483142881680012015340627912534114398627891372987484;
	weights[9] 	= 0.03009353503879054081123850037779057811789868772760299971026893814449540063170037017031513091856895257684035721025772267232;

	nodes[10] 	= 1.5240438405087579033372401148578187098396836808674786486688476407831937327646483142881680012015340627912534114398627891372987484;
	weights[10] 	= 0.03009353503879054081123850037779057811789868772760299971026893814449540063170037017031513091856895257684035721025772267232;

	nodes[11] 	= -1.8318338313140425143080136362797095645544029983115169619258243388974567803892610268519176023205481176673873308587702410678210094;
	weights[11] 	= 0.01076566602931137224124001348311236242366266109825117194009781960327624725796907183785945663683108196547415653201552008253;

	nodes[12] 	= 1.8318338313140425143080136362797095645544029983115169619258243388974567803892610268519176023205481176673873308587702410678210094;
	weights[12] 	= 0.01076566602931137224124001348311236242366266109825117194009781960327624725796907183785945663683108196547415653201552008253;

	nodes[13] 	= -2.141308198430237210111121788687375899471517960102202347075438150299386584818913779346034909398074917915002376875888770839036113;
	weights[13] 	= 0.0031668653729621100890343109666316368553165772533257756867097780103557304255018336721070386308071865090632294811772406536;

	nodes[14] 	= 2.141308198430237210111121788687375899471517960102202347075438150299386584818913779346034909398074917915002376875888770839036113;
	weights[14] 	= 0.0031668653729621100890343109666316368553165772533257756867097780103557304255018336721070386308071865090632294811772406536;

	nodes[15] 	= -2.4527991478588034830573456208737911805685567563795413271912973645565737230143458968619498641541807859323997002277436317987168835;
	weights[15] 	= 0.0007624284675315190343099285843885629293750794571226055345866266440761589747963381159812378838116378078372798737515796658;

	nodes[16] 	= 2.4527991478588034830573456208737911805685567563795413271912973645565737230143458968619498641541807859323997002277436317987168835;
	weights[16] 	= 0.0007624284675315190343099285843885629293750794571226055345866266440761589747963381159812378838116378078372798737515796658;

	nodes[17] 	= -2.7666660769675387289009433272320087537221599926886383800597068928314726541104145125927430045717586824021857303882668846718087576;
	weights[17] 	= 0.0001493760470837696052828910376813293613079068125407601187706985456705630876732263277207084713948781839014411586054236221;

	nodes[18] 	= 2.7666660769675387289009433272320087537221599926886383800597068928314726541104145125927430045717586824021857303882668846718087576;
	weights[18] 	= 0.0001493760470837696052828910376813293613079068125407601187706985456705630876732263277207084713948781839014411586054236221;

	nodes[19] 	= -3.0833023089391356700426939178389803180735759427456881462578254759544805774865102659049704804252145637273033719835202215471113204;
	weights[19] 	= 0.0000236547291856152742790704609967614819827588896305964715712502936097571549327680092746922335383702033651097296204574018;

	nodes[20] 	= 3.0833023089391356700426939178389803180735759427456881462578254759544805774865102659049704804252145637273033719835202215471113204;
	weights[20] 	= 0.0000236547291856152742790704609967614819827588896305964715712502936097571549327680092746922335383702033651097296204574018;

	nodes[21] 	= -3.4031434102599181483919218252056252472657481024331687240422893182706725306626710397329894098389190035096900461160953711412399558;
	weights[21] 	= 3.0032131335980188979799514446322268064923135216582650377618960760739888804671565772695963262623891459494689595360423e-6;

	nodes[22] 	= 3.4031434102599181483919218252056252472657481024331687240422893182706725306626710397329894098389190035096900461160953711412399558;
	weights[22] 	= 3.0032131335980188979799514446322268064923135216582650377618960760739888804671565772695963262623891459494689595360423e-6;

	nodes[23] 	= -3.7266776654942124268440259389476667227709423460629380917787881032482528747169417687461420047150766096341724816185101548449883698;
	weights[23] 	= 3.0275650879319485645284381961952433059430606227220606918716274367869935469438614371319837172038425234940049803908814e-7;

	nodes[24] 	= 3.7266776654942124268440259389476667227709423460629380917787881032482528747169417687461420047150766096341724816185101548449883698;
	weights[24] 	= 3.0275650879319485645284381961952433059430606227220606918716274367869935469438614371319837172038425234940049803908814e-7;

	nodes[25] 	= -4.054459529503473196050419413093193273141226667998017455338685474160034384912253595647501112370639111045945621216468818429985531;
	weights[25] 	= 2.39578385565918250049011301891738611460513298526664998139960469217981637393786527755145665487090983274239335928839e-8;

	nodes[26] 	= 4.054459529503473196050419413093193273141226667998017455338685474160034384912253595647501112370639111045945621216468818429985531;
	weights[26] 	= 2.39578385565918250049011301891738611460513298526664998139960469217981637393786527755145665487090983274239335928839e-8;

	nodes[27] 	= -4.3871272577720728810207089064532255630204673129154166158503540842189402877023658814774990129643613552771635716104304917532252733;
	weights[27] 	= 1.467846333732644492750437553888097370184866676402387625446119914610845220163448417945915722081574357641910209154872e-9;

	nodes[28] 	= 4.3871272577720728810207089064532255630204673129154166158503540842189402877023658814774990129643613552771635716104304917532252733;
	weights[28] 	= 1.467846333732644492750437553888097370184866676402387625446119914610845220163448417945915722081574357641910209154872e-9;

	nodes[29] 	= -4.7254265200961152685340901781407360396918144131773168071904160522733157884951340722607832872714566152381148378054858014401924821;
	weights[29] 	= 6.84877361582967342965355075529988632952452658178902723850384305045047258220155336758002483390895419525573851381252e-11;

	nodes[30] 	= 4.7254265200961152685340901781407360396918144131773168071904160522733157884951340722607832872714566152381148378054858014401924821;
	weights[30] 	= 6.84877361582967342965355075529988632952452658178902723850384305045047258220155336758002483390895419525573851381252e-11;

	nodes[31] 	= -5.0702427937817158655809339958557122878932274229308245652332388303124622407768254622920672094910825136485459433429222769632650595;
	weights[31] 	= 2.38522541083271151743494413479946168133797591554420854048817906052813784638607184807178400787761701933739732181113e-12;

	nodes[32] 	= 5.0702427937817158655809339958557122878932274229308245652332388303124622407768254622920672094910825136485459433429222769632650595;
	weights[32] 	= 2.38522541083271151743494413479946168133797591554420854048817906052813784638607184807178400787761701933739732181113e-12;

	nodes[33] 	= -5.4226470161614525809787272598074537185047784657308852628120157960354037266417855989644409797347488919366913000589481201799051178;
	weights[33] 	= 6.04958058642293878270483171800640699931928474489366718361370408801313568457528087861821187685248045252675949783987e-14;

	nodes[34] 	= 5.4226470161614525809787272598074537185047784657308852628120157960354037266417855989644409797347488919366913000589481201799051178;
	weights[34] 	= 6.04958058642293878270483171800640699931928474489366718361370408801313568457528087861821187685248045252675949783987e-14;

	nodes[35] 	= -5.7839619604859458628502489825529175383921813170285234341922814780039317073615020918405829892565934549159228972909094215040938958;
	weights[35] 	= 1.08354456402498672597919504806503419064801350517412166787129379498383108388761620245745967660602118376649034183713e-15;

	nodes[36] 	= 5.7839619604859458628502489825529175383921813170285234341922814780039317073615020918405829892565934549159228972909094215040938958;
	weights[36] 	= 1.08354456402498672597919504806503419064801350517412166787129379498383108388761620245745967660602118376649034183713e-15;

	nodes[37] 	= -6.1558623601311928747529959276452096029183025039907900470935128781042533360440542581887132940056716702281238589218314836966458885;
	weights[37] 	= 1.31797323164665382165669751360934651089606291074982690433482363402552400428543695692529762890425716937086503548412e-17;

	nodes[38] 	= 6.1558623601311928747529959276452096029183025039907900470935128781042533360440542581887132940056716702281238589218314836966458885;
	weights[38] 	= 1.31797323164665382165669751360934651089606291074982690433482363402552400428543695692529762890425716937086503548412e-17;

	nodes[39] 	= -6.5405328108757628390314455988460172448314385331418291965943616584286159468745276251259081459553038011885978985449355375381578953;
	weights[39] 	= 1.034530501752034906677061111505268466770429449435319407804680825021240095785354231372935167648227376858354612788268e-19;

	nodes[40] 	= 6.5405328108757628390314455988460172448314385331418291965943616584286159468745276251259081459553038011885978985449355375381578953;
	weights[40] 	= 1.034530501752034906677061111505268466770429449435319407804680825021240095785354231372935167648227376858354612788268e-19;

	nodes[41] 	= -6.9409309282147529551907855505972227460736416906050170281170086225120421960133816363361417078397754400654744864880506231607900564;
	weights[41] 	= 4.89194553311074272935122376813705616588346365346131934555038458977966807892032052080611662487628676213705374646265e-22;

	nodes[42] 	= 6.9409309282147529551907855505972227460736416906050170281170086225120421960133816363361417078397754400654744864880506231607900564;
	weights[42] 	= 4.89194553311074272935122376813705616588346365346131934555038458977966807892032052080611662487628676213705374646265e-22;

	nodes[43] 	= -7.3612580683690459931400755151453003022138917430230043963248041644961987758526960984754258868437482641122389476076442416418997415;
	weights[43] 	= 1.264866123939542148382634047505680927302628560404665485270447316351418553201150224153559232710425972864659902835093e-24;

	nodes[44] 	= 7.3612580683690459931400755151453003022138917430230043963248041644961987758526960984754258868437482641122389476076442416418997415;
	weights[44] 	= 1.264866123939542148382634047505680927302628560404665485270447316351418553201150224153559232710425972864659902835093e-24;

	nodes[45] 	= -7.8078847487003961357898105391694007207064649831587577070181371867433198448320461390495122977046411849158932946470705862410755247;
	weights[45] 	= 1.546877128804686976721676383858083247918162909906417892795757913667788192120777765560812654377242606504131005949592e-27;

	nodes[46] 	= 7.8078847487003961357898105391694007207064649831587577070181371867433198448320461390495122977046411849158932946470705862410755247;
	weights[46] 	= 1.546877128804686976721676383858083247918162909906417892795757913667788192120777765560812654377242606504131005949592e-27;

	nodes[47] 	= -8.2914303867830105435966327111080972441898208977519036694669700634482276766420215547108889598831198922128775037727601261036738841;
	weights[47] 	= 7.057066374856978420586542573309934473438046598590421482894780562158411785773867523023950789436095393321448019216265e-31;

	nodes[48] 	= 8.2914303867830105435966327111080972441898208977519036694669700634482276766420215547108889598831198922128775037727601261036738841;
	weights[48] 	= 7.057066374856978420586542573309934473438046598590421482894780562158411785773867523023950789436095393321448019216265e-31;

	nodes[49] 	= -8.8325166958454148505007212165324157541070035288108747520223453424082497322339045283534603363990858317840512800894090358354844211;
	weights[49] 	= 7.6617679179706538130356444391648511121810940933396306187307292238199584596044237209623884394630458302348570422585241e-35;

	nodes[50] 	= 8.8325166958454148505007212165324157541070035288108747520223453424082497322339045283534603363990858317840512800894090358354844211;
	weights[50] 	= 7.6617679179706538130356444391648511121810940933396306187307292238199584596044237209623884394630458302348570422585241e-35;

	nodes[51] 	= -9.485202964372730286170378776881820247394485992507891045564211527723382989621440019837292707853964955039592559316008009523007117;
	weights[51] 	= 6.36846233983439190420490355049942534155023713668972152531310863928869663555935767486627633069450950269537318720415574e-40;

	nodes[52] 	= 9.485202964372730286170378776881820247394485992507891045564211527723382989621440019837292707853964955039592559316008009523007117;
	weights[52] 	= 6.36846233983439190420490355049942534155023713668972152531310863928869663555935767486627633069450950269537318720415574e-40;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_53_hpp__)*/