//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_89.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 89.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_89_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_89_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_89(long double*& nodes, long double*& weights) {
	nodes	= new long double[89];
	weights	= new long double[89];

	nodes[0] 	= 0.99939082701909573000624344004392996449523630666999677310390040801094861891833265254950453446422364420556084765562641139156021535;
	weights[0] 	= 0.00004251534337916727396236571173797694299256661198884654427371675303418534439637101614271340744779248895523505985432112949874315447;

	nodes[1] 	= 0.99756405025982424761316268064425502636937766038422153622599560889821918141108184308528921167547603764269671215582339631757585466;
	weights[1] 	= 0.00016985424303735316501846038615928264796539267763558292019431662394443735139037880571162716062737525354962764391824408456030739125;

	nodes[2] 	= 0.99452189536827333692269194498057038152079208870931942736655883357431625068689836257930622038336092967901760933592087343856440085;
	weights[2] 	= 0.0003813963166554844249168001708083577648494231729111512667882206745278484786918014831000167178914639551664894516498993351902964373;

	nodes[3] 	= 0.99026806874157031508377486734485075925108979376888650008971412760099581772933645498991861675964930521538885384149921534902791219;
	weights[3] 	= 0.0006761109525150284002050047942463407350321360627255979468715639007224237100750682009950838690057897948809066989687016352031367312;

	nodes[4] 	= 0.98480775301220805936674302458952301367064325171984241879002575235582759994303623927467841005611989916062133620382429048903021783;
	weights[4] 	= 0.0010525623305346889956354541069510597437398858572398420784006013843442141097878150913028253864285871777954538758660337788613002627;

	nodes[5] 	= 0.97814760073380563792856674786959953245973780886267710788517766364059683312009512199975852545478563672221737010812557636952599961;
	weights[5] 	= 0.0015089164174415146188670637058800426892392416675255878836107954851703146737038256870738110120285778074307396721650108057088926623;

	nodes[6] 	= 0.97029572627599647230637787403399037763226085244308291565658876232355573583663092965544292244531932228307213360083942005690295002;
	weights[6] 	= 0.0020429499019966476206975271561626858482520036001791047898752923116781153707255035345755913066792673304796900417458024845564323134;

	nodes[7] 	= 0.96126169593831886191649704855706487352569248934070866585668530015437151574767653035239681360535718176574687317280571564683182843;
	weights[7] 	= 0.0026520610267441935453047725531736922184992162211348900925716558333802269275742026962926232842572218346379658616510765718375443001;

	nodes[8] 	= 0.95105651629515357211643933337938214340569863412575022244730564443015317008519350171879281097081138167589971755140300420898706619;
	weights[8] 	= 0.0033332822635120185030993826481022414626736097375807153374098788204601490808881094316388361953619221718491291145933336307207052593;

	nodes[9] 	= 0.93969262078590838405410927732473146993620813426446463309028666277422121099588945894974588983794806746192163479658862657697069787;
	weights[9] 	= 0.004083294770910708918272094426297142468358238866384278190041028662822908433670685530196702070001148220915690031094872649679725926;

	nodes[10] 	= 0.92718385456678740080647445113695694209762171984899761514302091240956285340663474241284935803932639351595564794312273391740679021;
	weights[10] 	= 0.004898444563395211981859880644169542265156788944616921927402885346533799653272620644961553136621861312416288991116340926981227323;

	nodes[11] 	= 0.91354545764260089550212757198531717794081045937747454506099978806511488210263127168178400089329999498758288627658095385708406697;
	weights[11] 	= 0.005774760313115113806435871365149179869390172878039063209864299054922744970820939269872388370702089194378882799593461000711518524;

	nodes[12] 	= 0.89879404629916699278229567669578535492997341381842186993819696446104302709891489999148151339222397102432466498608635333301549947;
	weights[12] 	= 0.00670797269782473016298599095338935050840457020563119176229594183667420253737880358822096164254582099153886944395276729324754442;

	nodes[13] 	= 0.88294759285892694203217136031571938608353663199954223047686772807039728281024624829917168050375626261810229901528011253895505705;
	weights[13] 	= 0.007693535200591936683023685663105075887359532621101221196521342841998104493940249640245735137546572878611692440755373524186819938;

	nodes[14] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	weights[14] 	= 0.008726646259971647884618453842443063567214359442708627280485957200855045573017247218411207848172547411061522462536895296241927346;

	nodes[15] 	= 0.84804809615642597038617617869038644872871205595624535905186196112831323159642492284804852904472769740483542604470132508522076511;
	weights[15] 	= 0.009802272662730526360175587733519028190061752876304879908724288312746171996490615812719393966246314432466587544172738197795777909;

	nodes[16] 	= 0.82903757255504169200633684150164202632907021216562534489457966832397190003212577707894365656414967872143045737531218161699451731;
	weights[16] 	= 0.010915174065155918771269377117656059273989541357421645718870289188980325960046069654313081214426649084133803125039267383796617664;

	nodes[17] 	= 0.80901699437494742410229341718281905886015458990288143106772431135263023140945122485360360209469556874237704403769344587606331693;
	weights[17] 	= 0.012059928523483666387717836490545305029887969180289342617895836021315194653905356650050044043534469582910651577130228926962632605;

	nodes[18] 	= 0.78801075360672195669397778783585166664169678847542873854133430939142973770576813256144441917529796739937904889107276651781115974;
	weights[18] 	= 0.0132309589090631121875820318349629256043040660035259305804405929558987152028369419928559464287290233045876626329261513007057641;

	nodes[19] 	= 0.76604444311897803520239265055541667393583245708039524585404528464215538885687472352822927668054849344996248839987004553419542483;
	weights[19] 	= 0.014422560079567275846600267365540044409810365876272818449331487123231396822151623997928539012772533779002808769844951721665429029;

	nodes[20] 	= 0.74314482547739423501469704897425697718911387349802638604012367054777034442111912541416405424808380861803436695639437010239598251;
	weights[20] 	= 0.015628926673872791885004588742663928360994350815362127107172831066420256738850210692257390513011750457704655482645467767472042095;

	nodes[21] 	= 0.71933980033865113935605467445671190823068455894196577128021403431548069107154394602004395577804225809903133806687101853359674233;
	weights[21] 	= 0.016844181395195749844629662287875120764181506264461469258275550880007979589185795275105383718767140317964769105168516505202742706;

	nodes[22] 	= 0.69465837045899728665640629942268622991981352598618623378962369030381748071914727212874956350862086790829700852125870881729508647;
	weights[22] 	= 0.018062403644690841693844153081897133504675931506373039863668277923412202702883193598539447673923049326281320744979064679764966679;

	nodes[23] 	= 0.66913060635885821382627333068678047359958321895979567681745335228796660171064389714615492336009006797984032607043213049346268268;
	weights[23] 	= 0.019277658366013799653469226627108325907863086955472382014770997736999925553218778181387440879678439186541434367502113417495667289;

	nodes[24] 	= 0.64278760968653932632264340990726343290755988420568179032497725467111283624095863971048822771759435162014780267264646498539261968;
	weights[24] 	= 0.020484024960319315691873548004232209859047071894561690672612341680188785469917364875716292379917655865243281080302629463302280356;

	nodes[25] 	= 0.61566147532565827966881109284365562825093087151521032598627375656763720336325123603128288053716407567000318665868593816042266302;
	weights[25] 	= 0.021675626130823479350891783534809328664553371767308578541503235847521467089232046880788884963961166339658427217221429884261945284;

	nodes[26] 	= 0.58778525229247312916870595463907276859765243764314599107227248075727847416235195750850404986274133596005313160275265936633893033;
	weights[26] 	= 0.022846656516402925150755978879226949238969468590545166504047992782104987638163632223594787349155720061335438273017352258005076779;

	nodes[27] 	= 0.55919290347074683016042813998598928730662194039566942179486935224540284739764283917750880531072639615291107531189006163682724051;
	weights[27] 	= 0.023991410974730672767204438252116194994867896413412863403073539614439856332022919219331750178263540560112286725108313801171091721;

	nodes[28] 	= 0.52991926423320495404678115181608666877201754995879996476779210862004882674417332955535680648352713055013710940415560712987547771;
	weights[28] 	= 0.025104312377156065178298227636253226078795684894529629213219540490674010295578373060925437426443875211779502305974842987171931476;

	nodes[29] 	= 0.5;
	weights[29] 	= 0.026179938779914943653855361527329190701643078328125881841457871602565136719051741655233623544517642233184567387610685888725782038;

	nodes[30] 	= 0.46947156278589077595946228822784329572321875671119680833610829939089979217415932299414772798069651365542373825147080426168473764;
	weights[30] 	= 0.027213049839294654855450129706667178381497905149733287925422485961422077798128739233399096255143616765634397409392207660780889446;

	nodes[31] 	= 0.4383711467890774174527345406582657390627557199885521144311262566528163340134390039077804063647496414897856368439333346807486142;
	weights[31] 	= 0.028198612342061861375487824416382903760452867565203317359647886966745979754690185285423869750144368652707220406194813891720164965;

	nodes[32] 	= 0.4067366430758002077539859903414976129231396510661734362942863528170377765245464050708021705206195937189644777331682140722254705;
	weights[32] 	= 0.02913182472677147773203794400462307439946726489279544591207952974849743732124804960377244302198810044986720705055412018425619086;

	nodes[33] 	= 0.3746065934159120354149637745011951310001589222536761741034403710333586143660852189586357362224852295453856671828132771886052492;
	weights[33] 	= 0.030008140476491379556613934725602712003700648826217587194540943456886382638796368228683278256068328331829800859031240257986482061;

	nodes[34] 	= 0.3420201433256687330440996146822595807630833675141606284650484976847147637020775995641901823385255475404735335311778255036375982;
	weights[34] 	= 0.030823290268975882620201720943475111800499198904450230931902800140597273858398303343448129322689041423330399819052708535287983458;

	nodes[35] 	= 0.3090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[35] 	= 0.031573302776374573035374432721670012806183828033253793784533949982960033211180879442005995197328267472396960735554247554247004125;

	nodes[36] 	= 0.2756373558169991856499715746113041477124473264568966818669650720197382551174836575266933589366984543747751250795807112396078635;
	weights[36] 	= 0.032254524013142397993169042816598562050358221549699619029372172970039955364494786177352208108432967809608123988496504613130165084;

	nodes[37] 	= 0.2419218955996677225604423741003529652950079303987428945764712658388908246761325843323528578273149236667155351059346971132350861;
	weights[37] 	= 0.032863635137889943917776288213609568420605434170655404332068536491742066921343485339069240086010922313766399808401778700411277071;

	nodes[38] 	= 0.2079116908177593371017422844051251662165847606277238364071819738823828256640743763046287567227275730578653505950086341065910837;
	weights[38] 	= 0.033397668622445076919606751663892211579618196103308921238333033318249867618365163186571020380661611836815350177982570379258816722;

	nodes[39] 	= 0.173648177666930348851716626769314796000375677184069387236241378132065822139014735421516613157399574011959146396718581042775273;
	weights[39] 	= 0.033854022709351902542838361262821194525117551913594667043543227419075968182281173782342006006261602466450635974281547406106409122;

	nodes[40] 	= 0.1391731009600654441124966633011052754559249313735688766016866030181331157008666098514049388640284261165765990520499673995956305;
	weights[40] 	= 0.034230474087371563138268810575525913533825301708108911175072264902697758581993920672649747523684399849365183151178879549764572653;

	nodes[41] 	= 0.10452846326765347139983415480249811908065586947459311399327547671248465069318004682818039879860442624520584223888750798102075;
	weights[41] 	= 0.034525188723231107113557015198963896504008014597923357855155608128892333813377187390544814674798725689079600398497681849777412947;

	nodes[42] 	= 0.0697564737441253007759588351941433286009032016527965250436172961370711270667891229125378568280742923028942076107741717160209822;
	weights[42] 	= 0.034736730796849238373455354983612971620892045093198926201749512179475744940678610067933204232062814390696462206229337100407401993;

	nodes[43] 	= 0.0348994967025009716459951816253329373548245760432968714250057669420840512138213254511231514590285652132668729705787874537342919;
	weights[43] 	= 0.03486406969650742426451144965803427732586487115884566257767011205038599694767261785750211798524239715529085479029326005546896623;

	nodes[44] 	= 0.e-127;
	weights[44] 	= 0.034906585039886591538473815369772254268857437770834509121943828803420182292068988873644831392690189644246089850147581184967709385;

	nodes[45] 	= -0.0348994967025009716459951816253329373548245760432968714250057669420840512138213254511231514590285652132668729705787874537342919;
	weights[45] 	= 0.03486406969650742426451144965803427732586487115884566257767011205038599694767261785750211798524239715529085479029326005546896623;

	nodes[46] 	= -0.0697564737441253007759588351941433286009032016527965250436172961370711270667891229125378568280742923028942076107741717160209822;
	weights[46] 	= 0.034736730796849238373455354983612971620892045093198926201749512179475744940678610067933204232062814390696462206229337100407401993;

	nodes[47] 	= -0.10452846326765347139983415480249811908065586947459311399327547671248465069318004682818039879860442624520584223888750798102075;
	weights[47] 	= 0.034525188723231107113557015198963896504008014597923357855155608128892333813377187390544814674798725689079600398497681849777412947;

	nodes[48] 	= -0.1391731009600654441124966633011052754559249313735688766016866030181331157008666098514049388640284261165765990520499673995956305;
	weights[48] 	= 0.034230474087371563138268810575525913533825301708108911175072264902697758581993920672649747523684399849365183151178879549764572653;

	nodes[49] 	= -0.173648177666930348851716626769314796000375677184069387236241378132065822139014735421516613157399574011959146396718581042775273;
	weights[49] 	= 0.033854022709351902542838361262821194525117551913594667043543227419075968182281173782342006006261602466450635974281547406106409122;

	nodes[50] 	= -0.2079116908177593371017422844051251662165847606277238364071819738823828256640743763046287567227275730578653505950086341065910837;
	weights[50] 	= 0.033397668622445076919606751663892211579618196103308921238333033318249867618365163186571020380661611836815350177982570379258816722;

	nodes[51] 	= -0.2419218955996677225604423741003529652950079303987428945764712658388908246761325843323528578273149236667155351059346971132350861;
	weights[51] 	= 0.032863635137889943917776288213609568420605434170655404332068536491742066921343485339069240086010922313766399808401778700411277071;

	nodes[52] 	= -0.2756373558169991856499715746113041477124473264568966818669650720197382551174836575266933589366984543747751250795807112396078635;
	weights[52] 	= 0.032254524013142397993169042816598562050358221549699619029372172970039955364494786177352208108432967809608123988496504613130165084;

	nodes[53] 	= -0.3090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[53] 	= 0.031573302776374573035374432721670012806183828033253793784533949982960033211180879442005995197328267472396960735554247554247004125;

	nodes[54] 	= -0.3420201433256687330440996146822595807630833675141606284650484976847147637020775995641901823385255475404735335311778255036375982;
	weights[54] 	= 0.030823290268975882620201720943475111800499198904450230931902800140597273858398303343448129322689041423330399819052708535287983458;

	nodes[55] 	= -0.3746065934159120354149637745011951310001589222536761741034403710333586143660852189586357362224852295453856671828132771886052492;
	weights[55] 	= 0.030008140476491379556613934725602712003700648826217587194540943456886382638796368228683278256068328331829800859031240257986482061;

	nodes[56] 	= -0.4067366430758002077539859903414976129231396510661734362942863528170377765245464050708021705206195937189644777331682140722254705;
	weights[56] 	= 0.02913182472677147773203794400462307439946726489279544591207952974849743732124804960377244302198810044986720705055412018425619086;

	nodes[57] 	= -0.4383711467890774174527345406582657390627557199885521144311262566528163340134390039077804063647496414897856368439333346807486142;
	weights[57] 	= 0.028198612342061861375487824416382903760452867565203317359647886966745979754690185285423869750144368652707220406194813891720164965;

	nodes[58] 	= -0.4694715627858907759594622882278432957232187567111968083361082993908997921741593229941477279806965136554237382514708042616847376;
	weights[58] 	= 0.027213049839294654855450129706667178381497905149733287925422485961422077798128739233399096255143616765634397409392207660780889446;

	nodes[59] 	= -0.5;
	weights[59] 	= 0.026179938779914943653855361527329190701643078328125881841457871602565136719051741655233623544517642233184567387610685888725782038;

	nodes[60] 	= -0.5299192642332049540467811518160866687720175499587999647677921086200488267441733295553568064835271305501371094041556071298754777;
	weights[60] 	= 0.025104312377156065178298227636253226078795684894529629213219540490674010295578373060925437426443875211779502305974842987171931476;

	nodes[61] 	= -0.5591929034707468301604281399859892873066219403956694217948693522454028473976428391775088053107263961529110753118900616368272405;
	weights[61] 	= 0.023991410974730672767204438252116194994867896413412863403073539614439856332022919219331750178263540560112286725108313801171091721;

	nodes[62] 	= -0.5877852522924731291687059546390727685976524376431459910722724807572784741623519575085040498627413359600531316027526593663389303;
	weights[62] 	= 0.022846656516402925150755978879226949238969468590545166504047992782104987638163632223594787349155720061335438273017352258005076779;

	nodes[63] 	= -0.615661475325658279668811092843655628250930871515210325986273756567637203363251236031282880537164075670003186658685938160422663;
	weights[63] 	= 0.021675626130823479350891783534809328664553371767308578541503235847521467089232046880788884963961166339658427217221429884261945284;

	nodes[64] 	= -0.6427876096865393263226434099072634329075598842056817903249772546711128362409586397104882277175943516201478026726464649853926197;
	weights[64] 	= 0.020484024960319315691873548004232209859047071894561690672612341680188785469917364875716292379917655865243281080302629463302280356;

	nodes[65] 	= -0.6691306063588582138262733306867804735995832189597956768174533522879666017106438971461549233600900679798403260704321304934626827;
	weights[65] 	= 0.019277658366013799653469226627108325907863086955472382014770997736999925553218778181387440879678439186541434367502113417495667289;

	nodes[66] 	= -0.6946583704589972866564062994226862299198135259861862337896236903038174807191472721287495635086208679082970085212587088172950865;
	weights[66] 	= 0.018062403644690841693844153081897133504675931506373039863668277923412202702883193598539447673923049326281320744979064679764966679;

	nodes[67] 	= -0.7193398003386511393560546744567119082306845589419657712802140343154806910715439460200439557780422580990313380668710185335967423;
	weights[67] 	= 0.016844181395195749844629662287875120764181506264461469258275550880007979589185795275105383718767140317964769105168516505202742706;

	nodes[68] 	= -0.7431448254773942350146970489742569771891138734980263860401236705477703444211191254141640542480838086180343669563943701023959825;
	weights[68] 	= 0.015628926673872791885004588742663928360994350815362127107172831066420256738850210692257390513011750457704655482645467767472042095;

	nodes[69] 	= -0.7660444431189780352023926505554166739358324570803952458540452846421553888568747235282292766805484934499624883998700455341954248;
	weights[69] 	= 0.014422560079567275846600267365540044409810365876272818449331487123231396822151623997928539012772533779002808769844951721665429029;

	nodes[70] 	= -0.7880107536067219566939777878358516666416967884754287385413343093914297377057681325614444191752979673993790488910727665178111597;
	weights[70] 	= 0.0132309589090631121875820318349629256043040660035259305804405929558987152028369419928559464287290233045876626329261513007057641;

	nodes[71] 	= -0.8090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[71] 	= 0.012059928523483666387717836490545305029887969180289342617895836021315194653905356650050044043534469582910651577130228926962632605;

	nodes[72] 	= -0.8290375725550416920063368415016420263290702121656253448945796683239719000321257770789436565641496787214304573753121816169945173;
	weights[72] 	= 0.010915174065155918771269377117656059273989541357421645718870289188980325960046069654313081214426649084133803125039267383796617664;

	nodes[73] 	= -0.8480480961564259703861761786903864487287120559562453590518619611283132315964249228480485290447276974048354260447013250852207651;
	weights[73] 	= 0.009802272662730526360175587733519028190061752876304879908724288312746171996490615812719393966246314432466587544172738197795777909;

	nodes[74] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
	weights[74] 	= 0.008726646259971647884618453842443063567214359442708627280485957200855045573017247218411207848172547411061522462536895296241927346;

	nodes[75] 	= -0.882947592858926942032171360315719386083536631999542230476867728070397282810246248299171680503756262618102299015280112538955057;
	weights[75] 	= 0.007693535200591936683023685663105075887359532621101221196521342841998104493940249640245735137546572878611692440755373524186819938;

	nodes[76] 	= -0.8987940462991669927822956766957853549299734138184218699381969644610430270989148999914815133922239710243246649860863533330154995;
	weights[76] 	= 0.00670797269782473016298599095338935050840457020563119176229594183667420253737880358822096164254582099153886944395276729324754442;

	nodes[77] 	= -0.913545457642600895502127571985317177940810459377474545060999788065114882102631271681784000893299994987582886276580953857084067;
	weights[77] 	= 0.005774760313115113806435871365149179869390172878039063209864299054922744970820939269872388370702089194378882799593461000711518524;

	nodes[78] 	= -0.9271838545667874008064744511369569420976217198489976151430209124095628534066347424128493580393263935159556479431227339174067902;
	weights[78] 	= 0.004898444563395211981859880644169542265156788944616921927402885346533799653272620644961553136621861312416288991116340926981227323;

	nodes[79] 	= -0.93969262078590838405410927732473146993620813426446463309028666277422121099588945894974588983794806746192163479658862657697069787;
	weights[79] 	= 0.004083294770910708918272094426297142468358238866384278190041028662822908433670685530196702070001148220915690031094872649679725926;

	nodes[80] 	= -0.95105651629515357211643933337938214340569863412575022244730564443015317008519350171879281097081138167589971755140300420898706619;
	weights[80] 	= 0.003333282263512018503099382648102241462673609737580715337409878820460149080888109431638836195361922171849129114593333630720705259;

	nodes[81] 	= -0.96126169593831886191649704855706487352569248934070866585668530015437151574767653035239681360535718176574687317280571564683182843;
	weights[81] 	= 0.0026520610267441935453047725531736922184992162211348900925716558333802269275742026962926232842572218346379658616510765718375443;

	nodes[82] 	= -0.97029572627599647230637787403399037763226085244308291565658876232355573583663092965544292244531932228307213360083942005690295002;
	weights[82] 	= 0.002042949901996647620697527156162685848252003600179104789875292311678115370725503534575591306679267330479690041745802484556432313;

	nodes[83] 	= -0.97814760073380563792856674786959953245973780886267710788517766364059683312009512199975852545478563672221737010812557636952599961;
	weights[83] 	= 0.001508916417441514618867063705880042689239241667525587883610795485170314673703825687073811012028577807430739672165010805708892662;

	nodes[84] 	= -0.98480775301220805936674302458952301367064325171984241879002575235582759994303623927467841005611989916062133620382429048903021783;
	weights[84] 	= 0.001052562330534688995635454106951059743739885857239842078400601384344214109787815091302825386428587177795453875866033778861300263;

	nodes[85] 	= -0.99026806874157031508377486734485075925108979376888650008971412760099581772933645498991861675964930521538885384149921534902791219;
	weights[85] 	= 0.000676110952515028400205004794246340735032136062725597946871563900722423710075068200995083869005789794880906698968701635203136731;

	nodes[86] 	= -0.99452189536827333692269194498057038152079208870931942736655883357431625068689836257930622038336092967901760933592087343856440085;
	weights[86] 	= 0.000381396316655484424916800170808357764849423172911151266788220674527848478691801483100016717891463955166489451649899335190296437;

	nodes[87] 	= -0.99756405025982424761316268064425502636937766038422153622599560889821918141108184308528921167547603764269671215582339631757585466;
	weights[87] 	= 0.000169854243037353165018460386159282647965392677635582920194316623944437351390378805711627160627375253549627643918244084560307391;

	nodes[88] 	= -0.99939082701909573000624344004392996449523630666999677310390040801094861891833265254950453446422364420556084765562641139156021535;
	weights[88] 	= 0.0000425153433791672739623657117379769429925666119888465442737167530341853443963710161427134074477924889552350598543211294987431545;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_89_hpp__)*/