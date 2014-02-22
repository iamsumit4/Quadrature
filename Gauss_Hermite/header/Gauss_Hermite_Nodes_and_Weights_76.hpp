//
//        Gauss_Hermite_Nodes_and_Weights_76.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 76.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_76_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_76_hpp__

void Gauss_Hermite_Nodes_and_Weights_76(long double*& nodes, long double*& weights) {
	nodes	= new long double[76];
	weights	= new long double[76];

	nodes[0] 	= -0.12699223100184112414505846853023404513722025632850273332945744381619810512802724204933287455732406688171086796368248999636091111;
	weights[0] 	= 0.2499300801393394310083662404017656608011828250993748436188326636465327701454684558084631823588006771464918609551991700335895795;

	nodes[1] 	= 0.12699223100184112414505846853023404513722025632850273332945744381619810512802724204933287455732406688171086796368248999636091111;
	weights[1] 	= 0.2499300801393394310083662404017656608011828250993748436188326636465327701454684558084631823588006771464918609551991700335895795;

	nodes[2] 	= -0.38103026441027603454505257542538555051820202120547778921618085252688775627828977519887414656453124843663700582164895277507876294;
	weights[2] 	= 0.219762210516246814132216911993603399583324049588186887954231891858857780404103029714272800492037645978908117594683378436328162;

	nodes[3] 	= 0.38103026441027603454505257542538555051820202120547778921618085252688775627828977519887414656453124843663700582164895277507876294;
	weights[3] 	= 0.219762210516246814132216911993603399583324049588186887954231891858857780404103029714272800492037645978908117594683378436328162;

	nodes[4] 	= -0.63522930636766927998923568223481519321804527022417477237018884506766335470752422821773186440695725219584822586429614558970881633;
	weights[4] 	= 0.1698744354394836967498270958531862092472935835814043385538783843377633849744261563075245794709513029555517263108159869374352;

	nodes[5] 	= 0.63522930636766927998923568223481519321804527022417477237018884506766335470752422821773186440695725219584822586429614558970881633;
	weights[5] 	= 0.1698744354394836967498270958531862092472935835814043385538783843377633849744261563075245794709513029555517263108159869374352;

	nodes[6] 	= -0.88969768175512148411849451854344785696873298801279641889758462176715877634514837621607581512314556655898098795318566079233697145;
	weights[6] 	= 0.115386438248745032614600214879146263481256689866752578451279452706834203646055199582948942284272925611009449561832827716045;

	nodes[7] 	= 0.88969768175512148411849451854344785696873298801279641889758462176715877634514837621607581512314556655898098795318566079233697145;
	weights[7] 	= 0.115386438248745032614600214879146263481256689866752578451279452706834203646055199582948942284272925611009449561832827716045;

	nodes[8] 	= -1.1445452109440197289388966629775966695027855270200728003008464842167096272247333759048803223475879556604948063360570370042640605;
	weights[8] 	= 0.06882525739412664433253435107396660576069465521893177758419493792168179375148244436338586695049151803554768736238706141842;

	nodes[9] 	= 1.1445452109440197289388966629775966695027855270200728003008464842167096272247333759048803223475879556604948063360570370042640605;
	weights[9] 	= 0.06882525739412664433253435107396660576069465521893177758419493792168179375148244436338586695049151803554768736238706141842;

	nodes[10] 	= -1.3998838419857679289556420894400719351798498489409450895253177129338063650069460604210623228949830898970080648705022292360831761;
	weights[10] 	= 0.0360182463566811348685837694135464227352508317807380261999405962258365876102192481044318428077137155158562641580124457439;

	nodes[11] 	= 1.3998838419857679289556420894400719351798498489409450895253177129338063650069460604210623228949830898970080648705022292360831761;
	weights[11] 	= 0.0360182463566811348685837694135464227352508317807380261999405962258365876102192481044318428077137155158562641580124457439;

	nodes[12] 	= -1.6558283181292228386798292302782429606490437543297904929711501014706209742011837786537242021162327886067077927865355159303137593;
	weights[12] 	= 0.016519285009994194559331295319132740816769450537301119305002336864919938836958175919565088290557052632704744671380842248;

	nodes[13] 	= 1.6558283181292228386798292302782429606490437543297904929711501014706209742011837786537242021162327886067077927865355159303137593;
	weights[13] 	= 0.016519285009994194559331295319132740816769450537301119305002336864919938836958175919565088290557052632704744671380842248;

	nodes[14] 	= -1.9124968927478690502774641609898278159991316925833768116392851258436677183202754408808323491416397000891011338607566318894144792;
	weights[14] 	= 0.006630685725990327934485175040514012060607356534258371439769931680861604869180836490910097689338306335339626992123873589;

	nodes[15] 	= 1.9124968927478690502774641609898278159991316925833768116392851258436677183202754408808323491416397000891011338607566318894144792;
	weights[15] 	= 0.006630685725990327934485175040514012060607356534258371439769931680861604869180836490910097689338306335339626992123873589;

	nodes[16] 	= -2.1700121054020435274800151621088462131980532219394596120946488689368219104304708281274581303818471852774172813090575403559917334;
	weights[16] 	= 0.0023254926708230860551978513115072860441082795679524462054424084067732735496956878662040115152603451666046947320578054;

	nodes[17] 	= 2.1700121054020435274800151621088462131980532219394596120946488689368219104304708281274581303818471852774172813090575403559917334;
	weights[17] 	= 0.0023254926708230860551978513115072860441082795679524462054424084067732735496956878662040115152603451666046947320578054;

	nodes[18] 	= -2.4285016349547644120364739834051618195931075082673805850682842013060528862433432785745853037199538955845918080823589176215832395;
	weights[18] 	= 0.00071126362441827637934080062287006911408935091702278798343690381826726040504300569013432995102509278491771554976578162;

	nodes[19] 	= 2.4285016349547644120364739834051618195931075082673805850682842013060528862433432785745853037199538955845918080823589176215832395;
	weights[19] 	= 0.00071126362441827637934080062287006911408935091702278798343690381826726040504300569013432995102509278491771554976578162;

	nodes[20] 	= -2.6880992485383532619035256168727979113136620666259289485238317593844558878965636329785571085688056414205040156540004838151891804;
	weights[20] 	= 0.0001892976217867165478258173545526328898339191295724508232921771116664334686290506064027718453093728058986662717924338;

	nodes[21] 	= 2.6880992485383532619035256168727979113136620666259289485238317593844558878965636329785571085688056414205040156540004838151891804;
	weights[21] 	= 0.0001892976217867165478258173545526328898339191295724508232921771116664334686290506064027718453093728058986662717924338;

	nodes[22] 	= -2.9489458689195021887096888915722008075830342342010966753352777876941818552769290157641839013436003113312698034881842195603363767;
	weights[22] 	= 0.0000437278315775459992068352739254820904547294902825325140581308796022502276083796555168356936406161880626239606391967;

	nodes[23] 	= 2.9489458689195021887096888915722008075830342342010966753352777876941818552769290157641839013436003113312698034881842195603363767;
	weights[23] 	= 0.0000437278315775459992068352739254820904547294902825325140581308796022502276083796555168356936406161880626239606391967;

	nodes[24] 	= -3.211190787688983163933475211072704106079926484344372625478447605301398261427538758361277329550638797589806452158308261380100772;
	weights[24] 	= 8.7420837008076351046169472796858203684815679395321352885949882983973469939755849622921060528503543457740899523737e-6;

	nodes[25] 	= 3.211190787688983163933475211072704106079926484344372625478447605301398261427538758361277329550638797589806452158308261380100772;
	weights[25] 	= 8.7420837008076351046169472796858203684815679395321352885949882983973469939755849622921060528503543457740899523737e-6;

	nodes[26] 	= -3.4749930580623097134837715092229576320726444174311883583815770973621190822047452233526713245346492091355328281247657122676156412;
	weights[26] 	= 1.507626466824537984592857119111505381188645551525806314071335804114933523108269757897069744958720046423436364017e-6;

	nodes[27] 	= 3.4749930580623097134837715092229576320726444174311883583815770973621190822047452233526713245346492091355328281247657122676156412;
	weights[27] 	= 1.507626466824537984592857119111505381188645551525806314071335804114933523108269757897069744958720046423436364017e-6;

	nodes[28] 	= -3.7405231094103381919505055376948874045639729747228662977004269999537719179154767540793380730022568135375009887949326569750852433;
	weights[28] 	= 2.234525098112146703387737397092823020232796562701908187777159193037424452251699381908942138925677047861322300957e-7;

	nodes[29] 	= 3.7405231094103381919505055376948874045639729747228662977004269999537719179154767540793380730022568135375009887949326569750852433;
	weights[29] 	= 2.234525098112146703387737397092823020232796562701908187777159193037424452251699381908942138925677047861322300957e-7;

	nodes[30] 	= -4.0079646366324129081667634916111352298366677681941057985737653862302435038644884976257701743060276789227294486915387708392941998;
	weights[30] 	= 2.834470735997179929424101315763451927503627024285649253449477478270588694044292278792347678069417267192920585994e-8;

	nodes[31] 	= 4.0079646366324129081667634916111352298366677681941057985737653862302435038644884976257701743060276789227294486915387708392941998;
	weights[31] 	= 2.834470735997179929424101315763451927503627024285649253449477478270588694044292278792347678069417267192920585994e-8;

	nodes[32] 	= -4.2775168321151090073780448602022227129059798874361624901595492632265386608997042406057058618523717798754222972881678223955673965;
	weights[32] 	= 3.06268322465160651214203301595504980427192434573594395301295658892715762480843020308983540873017546847503855281e-9;

	nodes[33] 	= 4.2775168321151090073780448602022227129059798874361624901595492632265386608997042406057058618523717798754222972881678223955673965;
	weights[33] 	= 3.06268322465160651214203301595504980427192434573594395301295658892715762480843020308983540873017546847503855281e-9;

	nodes[34] 	= -4.5493970476880529824270791292494743067464579432542885481856867048347052708852044337689865885947150778047196448347957020086195646;
	weights[34] 	= 2.80386867789961739262617478014899477609408962965361322630049641032410515030097002141761487754468371628312749349e-10;

	nodes[35] 	= 4.5493970476880529824270791292494743067464579432542885481856867048347052708852044337689865885947150778047196448347957020086195646;
	weights[35] 	= 2.80386867789961739262617478014899477609408962965361322630049641032410515030097002141761487754468371628312749349e-10;

	nodes[36] 	= -4.8238440007350294597067012677355586750153149552223518068650250217090910725327742285039112262231818696535058293856368978377640489;
	weights[36] 	= 2.1618054623290896169447433202289078834890830856837755982232000546891752580531044240923456341462846200913347449e-11;

	nodes[37] 	= 4.8238440007350294597067012677355586750153149552223518068650250217090910725327742285039112262231818696535058293856368978377640489;
	weights[37] 	= 2.1618054623290896169447433202289078834890830856837755982232000546891752580531044240923456341462846200913347449e-11;

	nodes[38] 	= -5.1011216754614017489066879677074363507371874168928108768282028902128289961367468344313689750477499968775578290815912016122381785;
	weights[38] 	= 1.3941377125806689862950895625515425417078151253099364165840155800620584622134757671164164632517010118021027007e-12;

	nodes[39] 	= 5.1011216754614017489066879677074363507371874168928108768282028902128289961367468344313689750477499968775578290815912016122381785;
	weights[39] 	= 1.3941377125806689862950895625515425417078151253099364165840155800620584622134757671164164632517010118021027007e-12;

	nodes[40] 	= -5.3815241217984988252809482836203979373600642666707091853434357527420976930204427432548633969472149293820686630165209872551967111;
	weights[40] 	= 7.461785865948530282579460280808075752352728723836369750319967243568864144921041836685243241870178558521799097e-14;

	nodes[41] 	= 5.3815241217984988252809482836203979373600642666707091853434357527420976930204427432548633969472149293820686630165209872551967111;
	weights[41] 	= 7.461785865948530282579460280808075752352728723836369750319967243568864144921041836685243241870178558521799097e-14;

	nodes[42] 	= -5.6653814275042980957794871869697516159023522518045823897293083073337423728688193091135981920840055898519593755252955849665902255;
	weights[42] 	= 3.285224408726823671614320100042819793664696308747438230203362739713679186284758729161765781008883767906495507e-15;

	nodes[43] 	= 5.6653814275042980957794871869697516159023522518045823897293083073337423728688193091135981920840055898519593755252955849665902255;
	weights[43] 	= 3.285224408726823671614320100042819793664696308747438230203362739713679186284758729161765781008883767906495507e-15;

	nodes[44] 	= -5.953067244596805676902396556040280642713766305879549733164068920151553275518829967200489852822064663328689080075958337937872534;
	weights[44] 	= 1.177709463373398791165481597145771849043694594999997349515471689376480083516639195188896452223729090880304518e-16;

	nodes[45] 	= 5.953067244596805676902396556040280642713766305879549733164068920151553275518829967200489852822064663328689080075958337937872534;
	weights[45] 	= 1.177709463373398791165481597145771849043694594999997349515471689376480083516639195188896452223729090880304518e-16;

	nodes[46] 	= -6.2450084067917311936024979108649029585194379004776998604887406890230958458341733862885266991476807272492124309300498155865006526;
	weights[46] 	= 3.397355176409098112620021602642251704874192676971576961525218137295577773880646376269782647076553847489613768e-18;

	nodes[47] 	= 6.2450084067917311936024979108649029585194379004776998604887406890230958458341733862885266991476807272492124309300498155865006526;
	weights[47] 	= 3.397355176409098112620021602642251704874192676971576961525218137295577773880646376269782647076553847489613768e-18;

	nodes[48] 	= -6.5416974088024285518463640157167239381650739433368104100902124142464194972490823882647624543225978217105349564466239221437510562;
	weights[48] 	= 7.7788589853854687484665876990871446483563984591980217615002389712711960101801113952154549487233446430877788e-20;

	nodes[49] 	= 6.5416974088024285518463640157167239381650739433368104100902124142464194972490823882647624543225978217105349564466239221437510562;
	weights[49] 	= 7.7788589853854687484665876990871446483563984591980217615002389712711960101801113952154549487233446430877788e-20;

	nodes[50] 	= -6.8437088797189289642661723611331572061005018120644905885289215507639128764777871875082583570228235499510507833895805183178407548;
	weights[50] 	= 1.391146358285105891375588527769245455628095451276627178118256447727874411825644535763286192635170992548950933e-21;

	nodes[51] 	= 6.8437088797189289642661723611331572061005018120644905885289215507639128764777871875082583570228235499510507833895805183178407548;
	weights[51] 	= 1.391146358285105891375588527769245455628095451276627178118256447727874411825644535763286192635170992548950933e-21;

	nodes[52] 	= -7.1517217559506382398449434480707508589206130419940009923938228305206214156774554199723354196266068865577261224876522187684356672;
	weights[52] 	= 1.90645208439269829520570529418156049651153655085260131337132676519726613409278678609632626379652958987620968e-23;

	nodes[53] 	= 7.1517217559506382398449434480707508589206130419940009923938228305206214156774554199723354196266068865577261224876522187684356672;
	weights[53] 	= 1.90645208439269829520570529418156049651153655085260131337132676519726613409278678609632626379652958987620968e-23;

	nodes[54] 	= -7.4665497978837835152982440974193855938636815213647178656360127308113213532288142939284717301992650332872829070463005338827181691;
	weights[54] 	= 1.956742973666224041429725883242039503890642764402911884130285617342206787437307588167561523448091455563223672e-25;

	nodes[55] 	= 7.4665497978837835152982440974193855938636815213647178656360127308113213532288142939284717301992650332872829070463005338827181691;
	weights[55] 	= 1.956742973666224041429725883242039503890642764402911884130285617342206787437307588167561523448091455563223672e-25;

	nodes[56] 	= -7.7891846883888826970454935136789094859398900164132032760299911208903245225775378975413689855857750426083791680698212509861231499;
	weights[56] 	= 1.462832930241982791001034792438296145769438488451860653993697034530940721702604730802121700809421727312186848e-27;

	nodes[57] 	= 7.7891846883888826970454935136789094859398900164132032760299911208903245225775378975413689855857750426083791680698212509861231499;
	weights[57] 	= 1.462832930241982791001034792438296145769438488451860653993697034530940721702604730802121700809421727312186848e-27;

	nodes[58] 	= -8.1208587754520744503959598365438527993678168914059132667993678519887974039455717093309024129680087019799781109599003233897281946;
	weights[58] 	= 7.69514274691703292338625286988803031003035523174229808618200213713351148130323437975273067867232007311967514e-30;

	nodes[59] 	= 8.1208587754520744503959598365438527993678168914059132667993678519887974039455717093309024129680087019799781109599003233897281946;
	weights[59] 	= 7.69514274691703292338625286988803031003035523174229808618200213713351148130323437975273067867232007311967514e-30;

	nodes[60] 	= -8.4631397820581817872184928416834027331061646436793556612555206332694001525154970497853187366394386333038747632350163980199444628;
	weights[60] 	= 2.726617129645481484658615929523099002018214585081250950588668697843404925898489786381943003916025118367791938e-32;

	nodes[61] 	= 8.4631397820581817872184928416834027331061646436793556612555206332694001525154970497853187366394386333038747632350163980199444628;
	weights[61] 	= 2.726617129645481484658615929523099002018214585081250950588668697843404925898489786381943003916025118367791938e-32;

	nodes[62] 	= -8.8180802146261934129500974829711140364100619208956028811683348797517324579109627549278595138777082100856002380138238786177546277;
	weights[62] 	= 6.148207274311360037990734154710684080826753163664503096123456835420007375894935960929397245055330260195283428e-35;

	nodes[63] 	= 8.8180802146261934129500974829711140364100619208956028811683348797517324579109627549278595138777082100856002380138238786177546277;
	weights[63] 	= 6.148207274311360037990734154710684080826753163664503096123456835420007375894935960929397245055330260195283428e-35;

	nodes[64] 	= -9.1884663714605924771270316493394663761969373164905167531522538119523808639856244659795660078842861999244324310814038553218362389;
	weights[64] 	= 8.173445792985343514604263419680834828331386386278119089428030467751755279777240841869435654126543242137966068e-38;

	nodes[65] 	= 9.1884663714605924771270316493394663761969373164905167531522538119523808639856244659795660078842861999244324310814038553218362389;
	weights[65] 	= 8.173445792985343514604263419680834828331386386278119089428030467751755279777240841869435654126543242137966068e-38;

	nodes[66] 	= -9.5782636843755532137080862596040395266006781445380299441749726447976303539806120906161655600198276047277347529415771731772476305;
	weights[66] 	= 5.7530583850393963160351211440791709383442728559009911693166151131697882906010110808875737005305873923096191639e-41;

	nodes[67] 	= 9.5782636843755532137080862596040395266006781445380299441749726447976303539806120906161655600198276047277347529415771731772476305;
	weights[67] 	= 5.7530583850393963160351211440791709383442728559009911693166151131697882906010110808875737005305873923096191639e-41;

	nodes[68] 	= -9.9934919928404526564758048574880502259397984786952062489640430917346042797475867649104823781294310167732558583105753334558749477;
	weights[68] 	= 1.82525644801388859082512247412116504454578433427043525017355780278658793316696243306559611814760001635690981116e-44;

	nodes[69] 	= 9.9934919928404526564758048574880502259397984786952062489640430917346042797475867649104823781294310167732558583105753334558749477;
	weights[69] 	= 1.82525644801388859082512247412116504454578433427043525017355780278658793316696243306559611814760001635690981116e-44;

	nodes[70] 	= -10.44419184013672973396560437730125191870528394939431520360976729994178149647089648336457388743507368095763183144381511626021128;
	weights[70] 	= 2.004878007028117096859161409732778407045143632539190083574334108601504813104396306076138693316391235448078804737e-48;

	nodes[71] 	= 10.44419184013672973396560437730125191870528394939431520360976729994178149647089648336457388743507368095763183144381511626021128;
	weights[71] 	= 2.004878007028117096859161409732778407045143632539190083574334108601504813104396306076138693316391235448078804737e-48;

	nodes[72] 	= -10.949861564373140515277997013601623541581941569286403252362938382015944220141123568644179248536878524576301663801382570895826419;
	weights[72] 	= 4.6195869591593008817395580565808244951316764576528385097240711958216259636429631895464993335117177436611465711729e-53;

	nodes[73] 	= 10.949861564373140515277997013601623541581941569286403252362938382015944220141123568644179248536878524576301663801382570895826419;
	weights[73] 	= 4.6195869591593008817395580565808244951316764576528385097240711958216259636429631895464993335117177436611465711729e-53;

	nodes[74] 	= -11.561592367542412275645844769322676318059946387697142468363973714404607811862689143254615954752804736483384880052333871588986358;
	weights[74] 	= 6.27037844806942796234730090974006201894098719995760451873220191500338152117238724696281384637707376326975350394411e-59;

	nodes[75] 	= 11.561592367542412275645844769322676318059946387697142468363973714404607811862689143254615954752804736483384880052333871588986358;
	weights[75] 	= 6.27037844806942796234730090974006201894098719995760451873220191500338152117238724696281384637707376326975350394411e-59;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_76_hpp__)*/