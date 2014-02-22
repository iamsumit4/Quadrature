//
//        Gauss_Hermite_Nodes_and_Weights_59.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 59.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_59_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_59_hpp__

void Gauss_Hermite_Nodes_and_Weights_59(long double*& nodes, long double*& weights) {
	nodes	= new long double[59];
	weights	= new long double[59];

	nodes[0] 	= 0;
	weights[0] 	= 0.2879842431257188461630973669938068127929289679888391160617585458615649411487471995480060985625851506249760427920105924327394581;

	nodes[1] 	= -0.28801770388153512870521582399568463582503738356898151357247946069123503464500293498160648998671222575905162193287188578919970653;
	weights[1] 	= 0.265151187633974429773715078240210885637905627923624256393013378296937327429437095988419152527843519334924094252019663850778168;

	nodes[2] 	= 0.28801770388153512870521582399568463582503738356898151357247946069123503464500293498160648998671222575905162193287188578919970653;
	weights[2] 	= 0.265151187633974429773715078240210885637905627923624256393013378296937327429437095988419152527843519334924094252019663850778168;

	nodes[3] 	= -0.57623653694114957122367863839637635596865258053575968104518470468083840712672238176899070682979287406516124143265748804289159308;
	weights[3] 	= 0.20690383287647834281983933983719327993272687731653433788677302421097893712853865787575001146346508784428953025135735877235071;

	nodes[4] 	= 0.57623653694114957122367863839637635596865258053575968104518470468083840712672238176899070682979287406516124143265748804289159308;
	weights[4] 	= 0.20690383287647834281983933983719327993272687731653433788677302421097893712853865787575001146346508784428953025135735877235071;

	nodes[5] 	= -0.86485946196705760228632100287852909717686471928803886713888829995770619686353085191168632557504498873574073243841128875514794847;
	weights[5] 	= 0.1367392833596404609703973942566259446412339170577506963984995332987692151440146102534849165410232554909112850540726803444349;

	nodes[6] 	= 0.86485946196705760228632100287852909717686471928803886713888829995770619686353085191168632557504498873574073243841128875514794847;
	weights[6] 	= 0.1367392833596404609703973942566259446412339170577506963984995332987692151440146102534849165410232554909112850540726803444349;

	nodes[7] 	= -1.1540931580511035380577736115693077273482931976724636496329911592676539018759066247995544356532648093017692870086940896852925169;
	weights[7] 	= 0.076447309674074943221737508484095870581133264124461631599773214385140932548488282907266610135815947860763861248361057212176;

	nodes[8] 	= 1.1540931580511035380577736115693077273482931976724636496329911592676539018759066247995544356532648093017692870086940896852925169;
	weights[8] 	= 0.076447309674074943221737508484095870581133264124461631599773214385140932548488282907266610135815947860763861248361057212176;

	nodes[9] 	= -1.4441500040985724805607236270808682048144084809902866762456305098010075533736380758949440663023252196080704942618867331302129415;
	weights[9] 	= 0.03609576971914758844154433200050973507382446072240664932018197034751719083139443807989888076834255461588322656466263258868;

	nodes[10] 	= 1.4441500040985724805607236270808682048144084809902866762456305098010075533736380758949440663023252196080704942618867331302129415;
	weights[10] 	= 0.03609576971914758844154433200050973507382446072240664932018197034751719083139443807989888076834255461588322656466263258868;

	nodes[11] 	= -1.7352502204281331766004243818512029519627000656604333692374882809617559737447007481787846876268268562399631489904929321802637664;
	weights[11] 	= 0.0143625593575871424323994800279828249417451298721777468113269075920582985188668325514110282516346467486539676259405390011;

	nodes[12] 	= 1.7352502204281331766004243818512029519627000656604333692374882809617559737447007481787846876268268562399631489904929321802637664;
	weights[12] 	= 0.0143625593575871424323994800279828249417451298721777468113269075920582985188668325514110282516346467486539676259405390011;

	nodes[13] 	= -2.0276242346848045230360888072629729597717755372478569465908206780940054228721245769325298086905090694041866856314489918983826844;
	weights[13] 	= 0.0048029120328152510137278021667001298703425391034759496827645644310370232525902911850014858237806460359644917706500689761;

	nodes[14] 	= 2.0276242346848045230360888072629729597717755372478569465908206780940054228721245769325298086905090694041866856314489918983826844;
	weights[14] 	= 0.0048029120328152510137278021667001298703425391034759496827645644310370232525902911850014858237806460359644917706500689761;

	nodes[15] 	= -2.3215153515122373648396924213392312547931079497631134736042824488664991096620061458474467747668171733753216235967693085848457959;
	weights[15] 	= 0.001345333206077744783579432431389727902385932157585994875766770468980745569763101862043460615992416369483807288692044874;

	nodes[16] 	= 2.3215153515122373648396924213392312547931079497631134736042824488664991096620061458474467747668171733753216235967693085848457959;
	weights[16] 	= 0.001345333206077744783579432431389727902385932157585994875766770468980745569763101862043460615992416369483807288692044874;

	nodes[17] 	= -2.6171828242728930852500964624416494249093692789880970094659512521814453450753774934957925870623632553098120868304577303148296266;
	weights[17] 	= 0.000314395389074515812666705995566265034287308984555851340607218328867052150593197738022130806506774742489985326388790408;

	nodes[18] 	= 2.6171828242728930852500964624416494249093692789880970094659512521814453450753774934957925870623632553098120868304577303148296266;
	weights[18] 	= 0.000314395389074515812666705995566265034287308984555851340607218328867052150593197738022130806506774742489985326388790408;

	nodes[19] 	= -2.9149054536014395642934342022961156491904394561502795738113302739410917976152722397009002793443849692779338952115663982881872679;
	weights[19] 	= 0.00006100888008487544976416241319213878975627364788922198630029467084835757632177632895217415439783063022568227465815171;

	nodes[20] 	= 2.9149054536014395642934342022961156491904394561502795738113302739410917976152722397009002793443849692779338952115663982881872679;
	weights[20] 	= 0.00006100888008487544976416241319213878975627364788922198630029467084835757632177632895217415439783063022568227465815171;

	nodes[21] 	= -3.2149858747990208354480873898368999224693250126805513258128149793210720986717164267282563337054383160648759286797335542868090399;
	weights[21] 	= 9.776195619973210025445057314451844444219629934548662493498812408541994238089905440045858107162387155198429485972093e-6;

	nodes[22] 	= 3.2149858747990208354480873898368999224693250126805513258128149793210720986717164267282563337054383160648759286797335542868090399;
	weights[22] 	= 9.776195619973210025445057314451844444219629934548662493498812408541994238089905440045858107162387155198429485972093e-6;

	nodes[23] 	= -3.5177557486926584599879246674779912248873838609707872456725947575080501580399744361347503051187096216771845294972692676708556908;
	weights[23] 	= 1.2852403270784285597692289641109313783738015057623329134178281574626402436763427110485433574820684956320118306147923e-6;

	nodes[24] 	= 3.5177557486926584599879246674779912248873838609707872456725947575080501580399744361347503051187096216771845294972692676708556908;
	weights[24] 	= 1.2852403270784285597692289641109313783738015057623329134178281574626402436763427110485433574820684956320118306147923e-6;

	nodes[25] 	= -3.8235821457915503735204757346136847994954595244430391393381154907293846035539374627480081030099537658602363295915737273885578995;
	weights[25] 	= 1.375743140386264195756536864952048250845768651114720624115439484394752182512406643121253846544752536570779054087969e-7;

	nodes[26] 	= 3.8235821457915503735204757346136847994954595244430391393381154907293846035539374627480081030099537658602363295915737273885578995;
	weights[26] 	= 1.375743140386264195756536864952048250845768651114720624115439484394752182512406643121253846544752536570779054087969e-7;

	nodes[27] 	= -4.132875522667987332692188021995713103747358274061785477617504265423073058317451859670061713672045122166564584969642743487161729;
	weights[27] 	= 1.18842102280394023914955707922084279773653212254753480731053321108866300218260583168077642811641116809578167043172e-8;

	nodes[28] 	= 4.132875522667987332692188021995713103747358274061785477617504265423073058317451859670061713672045122166564584969642743487161729;
	weights[28] 	= 1.18842102280394023914955707922084279773653212254753480731053321108866300218260583168077642811641116809578167043172e-8;

	nodes[29] 	= -4.4460998505989423396733033713882025570020507103112219778307930142348318886074382430755445364989289517718652815084478263047133696;
	weights[29] 	= 8.198962869224023305860763265398319229884602315132946981595546958824105019203245424574100769355014560987841161323e-10;

	nodes[30] 	= 4.4460998505989423396733033713882025570020507103112219778307930142348318886074382430755445364989289517718652815084478263047133696;
	weights[30] 	= 8.198962869224023305860763265398319229884602315132946981595546958824105019203245424574100769355014560987841161323e-10;

	nodes[31] 	= -4.7637856994329747404867359794513379419173386101798134422748748429411666561785556082885285510257705626847663933453025355083191064;
	weights[31] 	= 4.4624672633249686200180205819532965498954263807433780266026607792818770327044673920879121467076405035075942274771e-11;

	nodes[32] 	= 4.7637856994329747404867359794513379419173386101798134422748748429411666561785556082885285510257705626847663933453025355083191064;
	weights[32] 	= 4.4624672633249686200180205819532965498954263807433780266026607792818770327044673920879121467076405035075942274771e-11;

	nodes[33] 	= -5.0865474548246596581664233244842377849112800597995188465088355651329824104271537903019137799179404090253496012433156568680388621;
	weights[33] 	= 1.8884472351365667368389682013393412831948413394400056606008150460967401274921856301774256060598684560409460691104e-12;

	nodes[34] 	= 5.0865474548246596581664233244842377849112800597995188465088355651329824104271537903019137799179404090253496012433156568680388621;
	weights[34] 	= 1.8884472351365667368389682013393412831948413394400056606008150460967401274921856301774256060598684560409460691104e-12;

	nodes[35] 	= -5.4151064424967953545376595841164615710395106728616261836850593319246634351768304539147898761285369608347206854506879807367370676;
	weights[35] 	= 6.10667177517434244038815514067118864353737052291646738057527248205632868376058697459816807202541182435414879667e-14;

	nodes[36] 	= 5.4151064424967953545376595841164615710395106728616261836850593319246634351768304539147898761285369608347206854506879807367370676;
	weights[36] 	= 6.10667177517434244038815514067118864353737052291646738057527248205632868376058697459816807202541182435414879667e-14;

	nodes[37] 	= -5.7503227086468641261103257156036884769593810740144672339182585350824930387531233466219062973467977057948455122966803545410545756;
	weights[37] 	= 1.4776310161414657402837788873484160764384149502644211149535128409787612753164619006370507576943822680362683402097e-15;

	nodes[38] 	= 5.7503227086468641261103257156036884769593810740144672339182585350824930387531233466219062973467977057948455122966803545410545756;
	weights[38] 	= 1.4776310161414657402837788873484160764384149502644211149535128409787612753164619006370507576943822680362683402097e-15;

	nodes[39] 	= -6.0932398625106681791750336071851989534754750149887927097714523959567328502955385436712810982141543645923603156634192229476059929;
	weights[39] 	= 2.6076354448061806428779479695104348824297103758256384517695589802240222222589865055144023773551777952063170806851e-17;

	nodes[40] 	= 6.0932398625106681791750336071851989534754750149887927097714523959567328502955385436712810982141543645923603156634192229476059929;
	weights[40] 	= 2.6076354448061806428779479695104348824297103758256384517695589802240222222589865055144023773551777952063170806851e-17;

	nodes[41] 	= -6.445150323318536894429737860706927931456400023904207208159795434739244033037591735844824117028320974766967650372918539831868661;
	weights[41] 	= 3.250814397058755142631029580367116479937321219079171087344588864235286333436644853871964427497473130019184540701e-19;

	nodes[42] 	= 6.445150323318536894429737860706927931456400023904207208159795434739244033037591735844824117028320974766967650372918539831868661;
	weights[42] 	= 3.250814397058755142631029580367116479937321219079171087344588864235286333436644853871964427497473130019184540701e-19;

	nodes[43] 	= -6.8076937845356603626435872626659120179321188832189496397292250154590206172798820128397535436685731738772370842154641452195563025;
	weights[43] 	= 2.749272678901032848717739047390553557852741933737136672568360672705304952418376340193506662489274502901695720085e-21;

	nodes[44] 	= 6.8076937845356603626435872626659120179321188832189496397292250154590206172798820128397535436685731738772370842154641452195563025;
	weights[44] 	= 2.749272678901032848717739047390553557852741933737136672568360672705304952418376340193506662489274502901695720085e-21;

	nodes[45] 	= -7.1830125334106772495110265109551584026302166570783099300150051701832614840279769926913027332871046181430397592749633726336709177;
	weights[45] 	= 1.4963121942445577822511461517111611753731641714075650300579320557173781314060018094756780037281845426539968738209e-23;

	nodes[46] 	= 7.1830125334106772495110265109551584026302166570783099300150051701832614840279769926913027332871046181430397592749633726336709177;
	weights[46] 	= 1.4963121942445577822511461517111611753731641714075650300579320557173781314060018094756780037281845426539968738209e-23;

	nodes[47] 	= -7.5740103261427950432992729045157953926062347348489461843304113804908548235727808833681236830612877531064699029503366090915868051;
	weights[47] 	= 4.8816444464632550989992093511834072365515200052720584948965662317687435799393538537561559522121772627859436522458e-26;

	nodes[48] 	= 7.5740103261427950432992729045157953926062347348489461843304113804908548235727808833681236830612877531064699029503366090915868051;
	weights[48] 	= 4.8816444464632550989992093511834072365515200052720584948965662317687435799393538537561559522121772627859436522458e-26;

	nodes[49] 	= -7.9848154458297129081031983687870576547521882506738738997197348899343394138734410736294271061956728414322461994140922052799553918;
	weights[49] 	= 8.6385560494218036181201618539095166711618966435726329056323846585051173656565860869901262271001700250634528896523e-29;

	nodes[50] 	= 7.9848154458297129081031983687870576547521882506738738997197348899343394138734410736294271061956728414322461994140922052799553918;
	weights[50] 	= 8.6385560494218036181201618539095166711618966435726329056323846585051173656565860869901262271001700250634528896523e-29;

	nodes[51] 	= -8.4216909949586138645587269765807671260007893460037278755698247501485865480707631888922249562748272179586784532900063314649714114;
	weights[51] 	= 7.1398344998606959828683499385090191139294172375229190920511859845370394833751314551612656959984195010827041462687e-32;

	nodes[52] 	= 8.4216909949586138645587269765807671260007893460037278755698247501485865480707631888922249562748272179586784532900063314649714114;
	weights[52] 	= 7.1398344998606959828683499385090191139294172375229190920511859845370394833751314551612656959984195010827041462687e-32;

	nodes[53] 	= -8.8950804110294361372643828457291239512558491340391814997614361534478148995850909944689469990589594045784503971570041317463198322;
	weights[53] 	= 2.157450602726913598662944464413205122604130766939993160686470209456879258944836969836950541164032745643871221709546e-35;

	nodes[54] 	= 8.8950804110294361372643828457291239512558491340391814997614361534478148995850909944689469990589594045784503971570041317463198322;
	weights[54] 	= 2.157450602726913598662944464413205122604130766939993160686470209456879258944836969836950541164032745643871221709546e-35;

	nodes[55] 	= -9.4252653876264005717390174340702479766920524519141558236212114656894901794637951860454537032440056144411301126665780520546931293;
	weights[55] 	= 1.4983962534796150164635005759809280207863927081775071386455793703652117157750993828066023154406855388428153629344026e-39;

	nodes[56] 	= 9.4252653876264005717390174340702479766920524519141558236212114656894901794637951860454537032440056144411301126665780520546931293;
	weights[56] 	= 1.4983962534796150164635005759809280207863927081775071386455793703652117157750993828066023154406855388428153629344026e-39;

	nodes[57] 	= -10.065408350118515061253858384395238049331072121105367176660092482680231928409952418981674286260831284169108998766813546384612568;
	weights[57] 	= 7.4038563200789493106278454054721184144273452555215082606132991815376727029318888043688483437600150252373071673829373e-45;

	nodes[58] 	= 10.065408350118515061253858384395238049331072121105367176660092482680231928409952418981674286260831284169108998766813546384612568;
	weights[58] 	= 7.4038563200789493106278454054721184144273452555215082606132991815376727029318888043688483437600150252373071673829373e-45;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_59_hpp__)*/