//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_99.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 99.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_99_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_99_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_99(long double*& nodes, long double*& weights) {
	nodes	= new long double[99];
	weights	= new long double[99];

	nodes[0] 	= 0.99950656036573155700069083670925366717845050090773977023364833938865029152369792613472556792321504278792918752984786623519646448;
	weights[0] 	= 0.000030996077366398228561801685725955736263489986549153622730854423821674558146539493212701255664920140424257940137345738673726531064;

	nodes[1] 	= 0.99802672842827156195233680686345055333690521970154311953512440681488813141422662367509455701853766530310506124950373678404481687;
	weights[1] 	= 0.00012386198210898849645287122310824279636710518077326309694462111596321209535512774454008407089061968465126315588283626657650647005;

	nodes[2] 	= 0.99556196460308001289767804421461941872371097988927660454880369897062703705882021755357852335382056470394125057453973615567139055;
	weights[2] 	= 0.00027823121492814801465945683181484296652841072002579052059000325562463969621322379534902780762062080229594132056379327516717890903;

	nodes[3] 	= 0.9921147013144778310497930427857785214530367089687957358710212264108831122527153416153676677534539856462231650482872816915249201;
	weights[3] 	= 0.0004934945509865336310136281803138314456657900607543217718247331695649733318938295069488464940486023770157500953295585127734814564;

	nodes[4] 	= 0.9876883405951377261900402476934372607584068615898804349239048016380729359697127357119630379998867786054499817482576411059702442;
	weights[4] 	= 0.0007688024442411864704410675980999474944127763572342078620861289641783964833955849596129425384541979230016994066586210620849163447;

	nodes[5] 	= 0.98228725072868868108564174286526841638847288663501387770945453614101988479554651205940723588568660958786784136116504966296259223;
	weights[5] 	= 0.0011030683802136428252302045247457870395860779601912415334285866487971873137658666840831095139191596575736390785844327179677410117;

	nodes[6] 	= 0.97591676193874739895751603190102758419968397683170613038427089829147662950922274799254044091629318425992482020926970798030007266;
	weights[6] 	= 0.0014949731639661994026015514010026078903812117098121660224001465687963835763619317536250013239064688518477524436447260078382097598;

	nodes[7] 	= 0.9685831611286311194901683754647358138360124027538877506150849142789580463827283934026071067075112036418229259933769828173862137;
	weights[7] 	= 0.001942970126361649600658623189054129609973653219542608554458089352942260763387348695316546178869508811902720979047458361215207483;

	nodes[8] 	= 0.96029368567694307175206880048899529330582268117736531296385004949344521033535297714450575637915495631664057280645950316577389486;
	weights[8] 	= 0.0024452912280597621474649824451213875483925346586145027662595909198485891462669867398672102760692264037733174590117128230262044431;

	nodes[9] 	= 0.95105651629515357211643933337938214340569863412575022244730564443015317008519350171879281097081138167589971755140300420898706619;
	weights[9] 	= 0.0029999540371608166527894443832920173164062487638226438036688909384141341727992984884749525758257299546642162031340002676486347334;

	nodes[10] 	= 0.9408807689542254723241184190970210354205495163365923060678513581747977214639436492116672335475748314619660604662750991095442338;
	weights[10] 	= 0.003604769552958624819801506636743903272151093443912011487121519589293544930709998686245437825519240139726866473276852019829895266;

	nodes[11] 	= 0.92977648588825140366094255622199072958715528248738001545928827680673886414198032679292888056688639004766469207354301619541916106;
	weights[11] 	= 0.004257350844926258474753967835505378536760463554198661781025365014385125040332417944186193509053266435789073906361190627902589005;

	nodes[12] 	= 0.91775462568398114114560385754948506453027279280631393387546338368785616533343504057196085055824517363386691550517488068093033492;
	weights[12] 	= 0.00495512247284035452327538209493505281533328065096639113785832654099250579569850030975715390358072897701516629241409073443043623;

	nodes[13] 	= 0.90482705246601952771366864793269759397041391104248708676737128360244744091248234119457139508611320860990466464374264360344986263;
	weights[13] 	= 0.00569533065086706984703562290401949907995334810359659848774823284693238546307870791199475613891598130034316520352845647195704972;

	nodes[14] 	= 0.89100652418836786235970957141362631277051851903608874540552228452249227417613522437793858273486147775249394307502799639420326536;
	weights[14] 	= 0.00647505411549668240598078575512625663581221160940674306991490657928784434171322949071935432798414371214022811004926123284474914;

	nodes[15] 	= 0.87630668004386358730811590392206258339906423848214708669736123114547041331304155655100481630642416697035526120943589436700056929;
	weights[15] 	= 0.007291215654436065762619664593449309739578806834228185273824446248026481410193534759181546366145316711479076177349049342237850109;

	nodes[16] 	= 0.86074202700394363716457648881711860333963165138306373769599523891084310803610733564143700599504079685219989704341410908111848387;
	weights[16] 	= 0.008140594250959765481376401728349436494482822381681457684504522183264758274840175317562640422422371719415620057897054027646078708;

	nodes[17] 	= 0.84432792550201507854855806396668150538165924141543890606643880698234057233445293478799884447900666532853028188214792696404851079;
	weights[17] 	= 0.009019837795791471930712313176384815823990745700413930955944892609619193314049238583757360401129786108234147091033671857526527539;

	nodes[18] 	= 0.82708057427456182491785218621532942556309967223784965267552393359575555522872599926768594231296381675176450485353909760367003362;
	weights[18] 	= 0.009925476316347900821093179778828045714023751239603178695228228489689714258042859076977837607029986707097062986830628444010426992;

	nodes[19] 	= 0.80901699437494742410229341718281905886015458990288143106772431135263023140945122485360360209469556874237704403769344587606331693;
	weights[19] 	= 0.010853935671135299748946052841490774526899172262260408356106252419183675188514820985045039639181022624619586419417206034266369345;

	nodes[20] 	= 0.79015501237569036515837390051915007165624044098061213094102677824852732371542713836105858037992652770826988298351066088989679367;
	weights[20] 	= 0.011801551655253054109924724533708803791242233873249711040296750557169827292218631849062283365604145035889603437887002193407415409;

	nodes[21] 	= 0.77051324277578923080300963639617784727166767211952072510650240048711766687306171975712384998343789933725845665379321943723836621;
	weights[21] 	= 0.012764584461336413840560623541463963947362112889429605387468663603284062425746445304345469342612954794717125071058552398250231702;

	nodes[22] 	= 0.75011106963045954151163189036022430845821397145071808460108905036740895101492963848640333966347285596993866356786980627137843406;
	weights[22] 	= 0.013739233438867606622154291852170895665689106255946838060038670632438573432438077943610661124154790647062097790164380972690857596;

	nodes[23] 	= 0.72896862742141152314673031905525911137257166408684890531015408929752368679517103414063537487053355141463863029286507069393362834;
	weights[23] 	= 0.014721652093607079470945751571399659355280676165680862080402363039677200066188255323087646919351807209332718442000692868148928389;

	nodes[24] 	= 0.70710678118654752440084436210484903928483593768847403658833986899536623923105351942519376716382078636750692311545614851246241803;
	weights[24] 	= 0.015707963267948966192313216916397514420985846996875529104874722961539082031431044993140174126710585339910740432566411533235469223;

	nodes[25] 	= 0.68454710592868867373228335762120926988951923270472530116615368343879095802562607485121896334970751159449549571934839722986814206;
	weights[25] 	= 0.016694274442290852913680682261395369486691017828070196129347082883400963996673834663192701334069363470488762423132130198322010057;

	nodes[26] 	= 0.66131186532365187656862173710232406219576766797876358880537782842119648160201573462767827503784341574364450393882025933933447683;
	weights[26] 	= 0.017676693097030325762472141980624133176282587737804220149710775290639590630424012042669687129266380032759383074968442093780080851;

	nodes[27] 	= 0.63742398974868971017671281167601619543491729778214606068004692893266578122287149156258792637764953148422420136510819140047560904;
	weights[27] 	= 0.018651342074561518544065810291331064894609581104321452822280782319794101637115644681934878910808215885104355794074270668220706744;

	nodes[28] 	= 0.61290705365297649336438605651869200148614419227241338148507571727551140135917888119899083214492555047342694511666989654248779629;
	weights[28] 	= 0.019614374880644878274701709299086225050729460120501347169452695365908336770643458137218064887817025643931877427245820873063523037;

	nodes[29] 	= 0.58778525229247312916870595463907276859765243764314599107227248075727847416235195750850404986274133596005313160275265936633893033;
	weights[29] 	= 0.020561990864762632635680380991304254315072521731490649853643193503894488874347269001235308614240148055201894445715617032204569101;

	nodes[30] 	= 0.56208337785213060009725200130888835384294532158030244676610961036660756669080143039351558657397610517107712555833260935216142224;
	weights[30] 	= 0.021490450219550031563533254053966983127947942754147879514521217433388449804819230909302510646391183972724417878302194622460511454;

	nodes[31] 	= 0.53582679497899661827130876786763997806357534560897205276120953182863307222134046827546398598680666389183213440309866488161161556;
	weights[31] 	= 0.022396088740106460453914120656410213017980948293337127253804553313458970748812851402522987852291384571587333774099151208944410907;

	nodes[32] 	= 0.50904141575037130028344271386530565278083942122039015112834884376432363708360012436019435644572651292337293064180515720024391568;
	weights[32] 	= 0.023275332284938166903250032104445592347488871612069600525244923739813405788021914668717707830998798960405860807235769038824859738;

	nodes[33] 	= 0.48175367410171527498719150287212965352854201015207884940942262964769883346607461781198826542458701708023304539388728162193477663;
	weights[33] 	= 0.024124710881461866622006769239345719102392887159522872935924999675051682652668555227098801887275853968342404687783773724233088337;

	nodes[34] 	= 0.45399049973954679156040836635787119898304770304902155698531600582202678413185242875447343922194679713941058359454605686329726037;
	weights[34] 	= 0.024940872420401249978645648077668772206159482384344315139834539343790319721148860495560993925437026967681252755083561833626189306;

	nodes[35] 	= 0.4257792915650726488625024457442517039799730418325583898770488739697242600801560839191314602158320524580455652655259587401500909;
	weights[35] 	= 0.025720595885030862537590810928775529762018345890154459722001213076145778599783382074285592114505189379478315661604366594513888726;

	nodes[36] 	= 0.3971478906347806137543773600194770636112211216589111970241000611737713666881423577954997016166900260873189839594237045117689937;
	weights[36] 	= 0.026460804063057577861351051737859976026638413342784667071891119382085658267163589676523194349840441702806314572718732332040502216;

	nodes[37] 	= 0.3681245526846779591569471474929608308988542873891972414015913163261391075709782607808529067741012417063079970872137836637638254;
	weights[37] 	= 0.027158575690971673909872465997289650305211230439552396428724080908693039022529672042094154744367904244032406958771632438568349441;

	nodes[38] 	= 0.3387379202452913812222843549667764425455618078671377328815175280735006727696408156617363910574869772702013608400645635659437132;
	weights[38] 	= 0.02781115698293930756482492719605112556982060054983904672262792633378461913215209130003491042790193054009461439185597104664104318;

	nodes[39] 	= 0.3090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[39] 	= 0.028415972498737115731836989449503011525565445229928414406080554984664029890062791497805395677595440725157264661998822798822303713;

	nodes[40] 	= 0.2789911060392292518532508950584493874953278044435842805013848443821319146508143958322825637121883244019038394671373286924266496;
	weights[40] 	= 0.028970635307838170237161451387673641293579159335136555443489855003229574916595103246413137977351944276048163406121110243444734003;

	nodes[41] 	= 0.2486898871648547882422837460064479684175674064442192702362254843284310002223097700891752306698056576563756801992236259534782347;
	weights[41] 	= 0.029472956409536282783967810643740899231998040774208449655291356570135903299474741290963802074551661867918759886085364705255730963;

	nodes[42] 	= 0.2181432413965425520241529749432464294629135212855940207241805291338536553040743987787621206880030620308783260773204746850565337;
	weights[42] 	= 0.029920953371931732982024882431792420951590482283938892187349299354281780486500158232655346929514701827973728421488097058632728686;

	nodes[43] 	= 0.1873813145857246305425507344472914693386261517676418662594452200623867277753411651571410632076716802807251611884877246292591867;
	weights[43] 	= 0.030312858155684289559396229308049241802385616033559816676320859274280976749096223302197238739502011022247841786548390348503197434;

	nodes[44] 	= 0.1564344650402308690101053194671668923138998920856607900846413460577587933056235793366958726768486883751403008476804469373981788;
	weights[44] 	= 0.030647124091656745914185366234695081347558917636516850347663316958899767579466505026667405714966972756819781458474202004386022101;

	nodes[45] 	= 0.1253332335643042453731187598165087939429182469601196608146478012525196806764872861743948571255470935362992736080387095484206358;
	weights[45] 	= 0.03092243198491139875361280565248119739630590393299673643792471275351319073096826047933150175937256830280573076980326455369745699;

	nodes[46] 	= 0.0941083133185143184732668488854758897455170627329812411682214700532523803426279028469043282340688921942136685929202748397208234;
	weights[46] 	= 0.031137695320969784369966977000980185875443283273725267689159442667453524366648866190931320445800549877525539544569029791303759537;

	nodes[47] 	= 0.0627905195293133760761782245656311331224848319066662727630407596318135267607829566774457142502180539982338330421755598968969408;
	weights[47] 	= 0.031292064553788943888173562609686786045604588812977795112804824807114951967506962241740264182530550995170217709249986799894431976;

	nodes[48] 	= 0.031410759078128293839183673817829389757925705851337927822967415590256345796968122872636722739369320447675307218152883134096713;
	weights[48] 	= 0.031384930458531534156064632147069073105708204007201904587018591499256489504715550493067646997756250539397222924995477327797211915;

	nodes[49] 	= 0.e-127;
	weights[49] 	= 0.031415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446;

	nodes[50] 	= -0.031410759078128293839183673817829389757925705851337927822967415590256345796968122872636722739369320447675307218152883134096713;
	weights[50] 	= 0.031384930458531534156064632147069073105708204007201904587018591499256489504715550493067646997756250539397222924995477327797211915;

	nodes[51] 	= -0.0627905195293133760761782245656311331224848319066662727630407596318135267607829566774457142502180539982338330421755598968969408;
	weights[51] 	= 0.031292064553788943888173562609686786045604588812977795112804824807114951967506962241740264182530550995170217709249986799894431976;

	nodes[52] 	= -0.0941083133185143184732668488854758897455170627329812411682214700532523803426279028469043282340688921942136685929202748397208234;
	weights[52] 	= 0.031137695320969784369966977000980185875443283273725267689159442667453524366648866190931320445800549877525539544569029791303759537;

	nodes[53] 	= -0.1253332335643042453731187598165087939429182469601196608146478012525196806764872861743948571255470935362992736080387095484206358;
	weights[53] 	= 0.03092243198491139875361280565248119739630590393299673643792471275351319073096826047933150175937256830280573076980326455369745699;

	nodes[54] 	= -0.1564344650402308690101053194671668923138998920856607900846413460577587933056235793366958726768486883751403008476804469373981788;
	weights[54] 	= 0.030647124091656745914185366234695081347558917636516850347663316958899767579466505026667405714966972756819781458474202004386022101;

	nodes[55] 	= -0.1873813145857246305425507344472914693386261517676418662594452200623867277753411651571410632076716802807251611884877246292591867;
	weights[55] 	= 0.030312858155684289559396229308049241802385616033559816676320859274280976749096223302197238739502011022247841786548390348503197434;

	nodes[56] 	= -0.2181432413965425520241529749432464294629135212855940207241805291338536553040743987787621206880030620308783260773204746850565337;
	weights[56] 	= 0.029920953371931732982024882431792420951590482283938892187349299354281780486500158232655346929514701827973728421488097058632728686;

	nodes[57] 	= -0.2486898871648547882422837460064479684175674064442192702362254843284310002223097700891752306698056576563756801992236259534782347;
	weights[57] 	= 0.029472956409536282783967810643740899231998040774208449655291356570135903299474741290963802074551661867918759886085364705255730963;

	nodes[58] 	= -0.2789911060392292518532508950584493874953278044435842805013848443821319146508143958322825637121883244019038394671373286924266496;
	weights[58] 	= 0.028970635307838170237161451387673641293579159335136555443489855003229574916595103246413137977351944276048163406121110243444734003;

	nodes[59] 	= -0.3090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[59] 	= 0.028415972498737115731836989449503011525565445229928414406080554984664029890062791497805395677595440725157264661998822798822303713;

	nodes[60] 	= -0.3387379202452913812222843549667764425455618078671377328815175280735006727696408156617363910574869772702013608400645635659437132;
	weights[60] 	= 0.02781115698293930756482492719605112556982060054983904672262792633378461913215209130003491042790193054009461439185597104664104318;

	nodes[61] 	= -0.3681245526846779591569471474929608308988542873891972414015913163261391075709782607808529067741012417063079970872137836637638254;
	weights[61] 	= 0.027158575690971673909872465997289650305211230439552396428724080908693039022529672042094154744367904244032406958771632438568349441;

	nodes[62] 	= -0.3971478906347806137543773600194770636112211216589111970241000611737713666881423577954997016166900260873189839594237045117689937;
	weights[62] 	= 0.026460804063057577861351051737859976026638413342784667071891119382085658267163589676523194349840441702806314572718732332040502216;

	nodes[63] 	= -0.4257792915650726488625024457442517039799730418325583898770488739697242600801560839191314602158320524580455652655259587401500909;
	weights[63] 	= 0.025720595885030862537590810928775529762018345890154459722001213076145778599783382074285592114505189379478315661604366594513888726;

	nodes[64] 	= -0.4539904997395467915604083663578711989830477030490215569853160058220267841318524287544734392219467971394105835945460568632972604;
	weights[64] 	= 0.024940872420401249978645648077668772206159482384344315139834539343790319721148860495560993925437026967681252755083561833626189306;

	nodes[65] 	= -0.4817536741017152749871915028721296535285420101520788494094226296476988334660746178119882654245870170802330453938872816219347766;
	weights[65] 	= 0.024124710881461866622006769239345719102392887159522872935924999675051682652668555227098801887275853968342404687783773724233088337;

	nodes[66] 	= -0.5090414157503713002834427138653056527808394212203901511283488437643236370836001243601943564457265129233729306418051572002439157;
	weights[66] 	= 0.023275332284938166903250032104445592347488871612069600525244923739813405788021914668717707830998798960405860807235769038824859738;

	nodes[67] 	= -0.5358267949789966182713087678676399780635753456089720527612095318286330722213404682754639859868066638918321344030986648816116156;
	weights[67] 	= 0.022396088740106460453914120656410213017980948293337127253804553313458970748812851402522987852291384571587333774099151208944410907;

	nodes[68] 	= -0.5620833778521306000972520013088883538429453215803024467661096103666075666908014303935155865739761051710771255583326093521614222;
	weights[68] 	= 0.021490450219550031563533254053966983127947942754147879514521217433388449804819230909302510646391183972724417878302194622460511454;

	nodes[69] 	= -0.5877852522924731291687059546390727685976524376431459910722724807572784741623519575085040498627413359600531316027526593663389303;
	weights[69] 	= 0.020561990864762632635680380991304254315072521731490649853643193503894488874347269001235308614240148055201894445715617032204569101;

	nodes[70] 	= -0.6129070536529764933643860565186920014861441922724133814850757172755114013591788811989908321449255504734269451166698965424877963;
	weights[70] 	= 0.019614374880644878274701709299086225050729460120501347169452695365908336770643458137218064887817025643931877427245820873063523037;

	nodes[71] 	= -0.637423989748689710176712811676016195434917297782146060680046928932665781222871491562587926377649531484224201365108191400475609;
	weights[71] 	= 0.018651342074561518544065810291331064894609581104321452822280782319794101637115644681934878910808215885104355794074270668220706744;

	nodes[72] 	= -0.6613118653236518765686217371023240621957676679787635888053778284211964816020157346276782750378434157436445039388202593393344768;
	weights[72] 	= 0.017676693097030325762472141980624133176282587737804220149710775290639590630424012042669687129266380032759383074968442093780080851;

	nodes[73] 	= -0.6845471059286886737322833576212092698895192327047253011661536834387909580256260748512189633497075115944954957193483972298681421;
	weights[73] 	= 0.016694274442290852913680682261395369486691017828070196129347082883400963996673834663192701334069363470488762423132130198322010057;

	nodes[74] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	weights[74] 	= 0.015707963267948966192313216916397514420985846996875529104874722961539082031431044993140174126710585339910740432566411533235469223;

	nodes[75] 	= -0.7289686274214115231467303190552591113725716640868489053101540892975236867951710341406353748705335514146386302928650706939336283;
	weights[75] 	= 0.014721652093607079470945751571399659355280676165680862080402363039677200066188255323087646919351807209332718442000692868148928389;

	nodes[76] 	= -0.7501110696304595415116318903602243084582139714507180846010890503674089510149296384864033396634728559699386635678698062713784341;
	weights[76] 	= 0.013739233438867606622154291852170895665689106255946838060038670632438573432438077943610661124154790647062097790164380972690857596;

	nodes[77] 	= -0.7705132427757892308030096363961778472716676721195207251065024004871176668730617197571238499834378993372584566537932194372383662;
	weights[77] 	= 0.012764584461336413840560623541463963947362112889429605387468663603284062425746445304345469342612954794717125071058552398250231702;

	nodes[78] 	= -0.7901550123756903651583739005191500716562404409806121309410267782485273237154271383610585803799265277082698829835106608898967937;
	weights[78] 	= 0.011801551655253054109924724533708803791242233873249711040296750557169827292218631849062283365604145035889603437887002193407415409;

	nodes[79] 	= -0.8090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[79] 	= 0.010853935671135299748946052841490774526899172262260408356106252419183675188514820985045039639181022624619586419417206034266369345;

	nodes[80] 	= -0.8270805742745618249178521862153294255630996722378496526755239335957555552287259992676859423129638167517645048535390976036700336;
	weights[80] 	= 0.009925476316347900821093179778828045714023751239603178695228228489689714258042859076977837607029986707097062986830628444010426992;

	nodes[81] 	= -0.8443279255020150785485580639666815053816592414154389060664388069823405723344529347879988444790066653285302818821479269640485108;
	weights[81] 	= 0.009019837795791471930712313176384815823990745700413930955944892609619193314049238583757360401129786108234147091033671857526527539;

	nodes[82] 	= -0.8607420270039436371645764888171186033396316513830637376959952389108431080361073356414370059950407968521998970434141090811184839;
	weights[82] 	= 0.008140594250959765481376401728349436494482822381681457684504522183264758274840175317562640422422371719415620057897054027646078708;

	nodes[83] 	= -0.8763066800438635873081159039220625833990642384821470866973612311454704133130415565510048163064241669703552612094358943670005693;
	weights[83] 	= 0.007291215654436065762619664593449309739578806834228185273824446248026481410193534759181546366145316711479076177349049342237850109;

	nodes[84] 	= -0.8910065241883678623597095714136263127705185190360887454055222845224922741761352243779385827348614777524939430750279963942032654;
	weights[84] 	= 0.00647505411549668240598078575512625663581221160940674306991490657928784434171322949071935432798414371214022811004926123284474914;

	nodes[85] 	= -0.9048270524660195277136686479326975939704139110424870867673712836024474409124823411945713950861132086099046646437426436034498626;
	weights[85] 	= 0.00569533065086706984703562290401949907995334810359659848774823284693238546307870791199475613891598130034316520352845647195704972;

	nodes[86] 	= -0.9177546256839811411456038575494850645302727928063139338754633836878561653334350405719608505582451736338669155051748806809303349;
	weights[86] 	= 0.00495512247284035452327538209493505281533328065096639113785832654099250579569850030975715390358072897701516629241409073443043623;

	nodes[87] 	= -0.9297764858882514036609425562219907295871552824873800154592882768067388641419803267929288805668863900476646920735430161954191611;
	weights[87] 	= 0.004257350844926258474753967835505378536760463554198661781025365014385125040332417944186193509053266435789073906361190627902589005;

	nodes[88] 	= -0.9408807689542254723241184190970210354205495163365923060678513581747977214639436492116672335475748314619660604662750991095442338;
	weights[88] 	= 0.003604769552958624819801506636743903272151093443912011487121519589293544930709998686245437825519240139726866473276852019829895266;

	nodes[89] 	= -0.95105651629515357211643933337938214340569863412575022244730564443015317008519350171879281097081138167589971755140300420898706619;
	weights[89] 	= 0.002999954037160816652789444383292017316406248763822643803668890938414134172799298488474952575825729954664216203134000267648634733;

	nodes[90] 	= -0.96029368567694307175206880048899529330582268117736531296385004949344521033535297714450575637915495631664057280645950316577389486;
	weights[90] 	= 0.002445291228059762147464982445121387548392534658614502766259590919848589146266986739867210276069226403773317459011712823026204443;

	nodes[91] 	= -0.9685831611286311194901683754647358138360124027538877506150849142789580463827283934026071067075112036418229259933769828173862137;
	weights[91] 	= 0.001942970126361649600658623189054129609973653219542608554458089352942260763387348695316546178869508811902720979047458361215207483;

	nodes[92] 	= -0.97591676193874739895751603190102758419968397683170613038427089829147662950922274799254044091629318425992482020926970798030007266;
	weights[92] 	= 0.00149497316396619940260155140100260789038121170981216602240014656879638357636193175362500132390646885184775244364472600783820976;

	nodes[93] 	= -0.98228725072868868108564174286526841638847288663501387770945453614101988479554651205940723588568660958786784136116504966296259223;
	weights[93] 	= 0.001103068380213642825230204524745787039586077960191241533428586648797187313765866684083109513919159657573639078584432717967741012;

	nodes[94] 	= -0.9876883405951377261900402476934372607584068615898804349239048016380729359697127357119630379998867786054499817482576411059702442;
	weights[94] 	= 0.000768802444241186470441067598099947494412776357234207862086128964178396483395584959612942538454197923001699406658621062084916345;

	nodes[95] 	= -0.9921147013144778310497930427857785214530367089687957358710212264108831122527153416153676677534539856462231650482872816915249201;
	weights[95] 	= 0.000493494550986533631013628180313831445665790060754321771824733169564973331893829506948846494048602377015750095329558512773481456;

	nodes[96] 	= -0.99556196460308001289767804421461941872371097988927660454880369897062703705882021755357852335382056470394125057453973615567139055;
	weights[96] 	= 0.000278231214928148014659456831814842966528410720025790520590003255624639696213223795349027807620620802295941320563793275167178909;

	nodes[97] 	= -0.99802672842827156195233680686345055333690521970154311953512440681488813141422662367509455701853766530310506124950373678404481687;
	weights[97] 	= 0.00012386198210898849645287122310824279636710518077326309694462111596321209535512774454008407089061968465126315588283626657650647;

	nodes[98] 	= -0.99950656036573155700069083670925366717845050090773977023364833938865029152369792613472556792321504278792918752984786623519646448;
	weights[98] 	= 0.0000309960773663982285618016857259557362634899865491536227308544238216745581465394932127012556649201404242579401373457386737265311;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_99_hpp__)*/