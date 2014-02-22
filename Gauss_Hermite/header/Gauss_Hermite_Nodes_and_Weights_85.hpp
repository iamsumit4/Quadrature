//
//        Gauss_Hermite_Nodes_and_Weights_85.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 85.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_85_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_85_hpp__

void Gauss_Hermite_Nodes_and_Weights_85(long double*& nodes, long double*& weights) {
	nodes	= new long double[85];
	weights	= new long double[85];

	nodes[0] 	= 0;
	weights[0] 	= 0.2402415409035058386562806777178333125521020845434237508504865564494989992282576877949510944937524156469156781391322745369007168;

	nodes[1] 	= -0.2402550572347267674251571222649356767889828276184256416481624268713881608047214068267606937494760735990411218763254948679298081;
	weights[1] 	= 0.226805118482104126795636126810172678281758683222182564536246600090776475819959775198208531471228480372553542640864883951171295;

	nodes[2] 	= 0.2402550572347267674251571222649356767889828276184256416481624268713881608047214068267606937494760735990411218763254948679298081;
	weights[2] 	= 0.226805118482104126795636126810172678281758683222182564536246600090776475819959775198208531471228480372553542640864883951171295;

	nodes[3] 	= -0.48059128370529339637382320972194596456411112598707685559745343149949103494314306861154681650043940987056595024900666038583612475;
	weights[3] 	= 0.19082420376099698156668229359355586026081448889834762307029226801288221785458819805026392991637537554115156023723752553865558;

	nodes[4] 	= 0.48059128370529339637382320972194596456411112598707685559745343149949103494314306861154681650043940987056595024900666038583612475;
	weights[4] 	= 0.19082420376099698156668229359355586026081448889834762307029226801288221785458819805026392991637537554115156023723752553865558;

	nodes[5] 	= -0.72109020587034224285752804871378060437475712940025315430079419443759209741016080523574077926232388418427035304380894898077465677;
	weights[5] 	= 0.1430503025419642232526121519723385298381260273101678774818122070704675366579504125586731331485863241459216323227171859580033;

	nodes[6] 	= 0.72109020587034224285752804871378060437475712940025315430079419443759209741016080523574077926232388418427035304380894898077465677;
	weights[6] 	= 0.1430503025419642232526121519723385298381260273101678774818122070704675366579504125586731331485863241459216323227171859580033;

	nodes[7] 	= -0.9618340692347045708725531422992748289213620351503091613509122064152623020570281539408791641227150762192689120083873878085678242;
	weights[7] 	= 0.09551012255024684717687031090489794288760458399074169631081555624754600496430661187089052720715412047475108450407894326997;

	nodes[8] 	= 0.9618340692347045708725531422992748289213620351503091613509122064152623020570281539408791641227150762192689120083873878085678242;
	weights[8] 	= 0.09551012255024684717687031090489794288760458399074169631081555624754600496430661187089052720715412047475108450407894326997;

	nodes[9] 	= -1.2029062094928866813644987133050779576575488534132268665495830909315354157660553985571047584110336194093384232954669801895443788;
	weights[9] 	= 0.0567644417885225144548130401722055849217556687406752737290547381763928525379972359610687522896269524547596837265990770275;

	nodes[10] 	= 1.2029062094928866813644987133050779576575488534132268665495830909315354157660553985571047584110336194093384232954669801895443788;
	weights[10] 	= 0.0567644417885225144548130401722055849217556687406752737290547381763928525379972359610687522896269524547596837265990770275;

	nodes[11] 	= -1.4443914379551996692496149557525242668567372692647805142016984705643135267181971239410456251095979342824866212306978531982462739;
	weights[11] 	= 0.0300095433092010795327288832795792390823227655038398557940321806257406712308061846395788804759564879826478715901886924081;

	nodes[12] 	= 1.4443914379551996692496149557525242668567372692647805142016984705643135267181971239410456251095979342824866212306978531982462739;
	weights[12] 	= 0.0300095433092010795327288832795792390823227655038398557940321806257406712308061846395788804759564879826478715901886924081;

	nodes[13] 	= -1.6863764465968692418722129682633286689412170227697769661796356965166375820505080094752011583363521721899310053433123018500223412;
	weights[13] 	= 0.014099847351552912049919346338768300765770945486638746790056765842622757824380510553479619667976298482617219041227163913;

	nodes[14] 	= 1.6863764465968692418722129682633286689412170227697769661796356965166375820505080094752011583363521721899310053433123018500223412;
	weights[14] 	= 0.014099847351552912049919346338768300765770945486638746790056765842622757824380510553479619667976298482617219041227163913;

	nodes[15] 	= -1.9289502385999013624329280906285658935774558533679430022406356728809299436945728931966073290440130314787411451210769229211439262;
	weights[15] 	= 0.00588139937173201828152591635752795995457111692991335687911336301181613751262134093692844062594768406632789690456602045;

	nodes[16] 	= 1.9289502385999013624329280906285658935774558533679430022406356728809299436945728931966073290440130314787411451210769229211439262;
	weights[16] 	= 0.00588139937173201828152591635752795995457111692991335687911336301181613751262134093692844062594768406632789690456602045;

	nodes[17] 	= -2.1722045909628107346575788578610729100247308363271310188393809813467736207456307148654730466617068946977493824674366360522635068;
	weights[17] 	= 0.0021752890413369527084663059463228759860034177368095587373237664623333058635734311448962933906530378003843387095973594;

	nodes[18] 	= 2.1722045909628107346575788578610729100247308363271310188393809813467736207456307148654730466617068946977493824674366360522635068;
	weights[18] 	= 0.0021752890413369527084663059463228759860034177368095587373237664623333058635734311448962933906530378003843387095973594;

	nodes[19] 	= -2.4162345566678477383360850561199647302764510575215089156782794439383959550318826747278732897967178731067212654338508525983333228;
	weights[19] 	= 0.0007123562987154912561031432860438949894496145013344173769033901390678044519053859698070154755147161195539336187384596;

	nodes[20] 	= 2.4162345566678477383360850561199647302764510575215089156782794439383959550318826747278732897967178731067212654338508525983333228;
	weights[20] 	= 0.0007123562987154912561031432860438949894496145013344173769033901390678044519053859698070154755147161195539336187384596;

	nodes[21] 	= -2.6611390150638675040036665520864736633741329649315756981813300572620931444480591860972697841496805052569378509904561062102011616;
	weights[21] 	= 0.0002062079431665734745118575905935023555381583546540361528427500306088265628156233975293944371574026171507219800105424;

	nodes[22] 	= 2.6611390150638675040036665520864736633741329649315756981813300572620931444480591860972697841496805052569378509904561062102011616;
	weights[22] 	= 0.0002062079431665734745118575905935023555381583546540361528427500306088265628156233975293944371574026171507219800105424;

	nodes[23] 	= -2.9070212806051178802741800211375620266569727857589601581588557389880334142667100919654126272131032719489213117432588659659888061;
	weights[23] 	= 0.000052665815424842007660695621841377852206097205685448178414960544567912446039211534169749860619653518128969604970447;

	nodes[24] 	= 2.9070212806051178802741800211375620266569727857589601581588557389880334142667100919654126272131032719489213117432588659659888061;
	weights[24] 	= 0.000052665815424842007660695621841377852206097205685448178414960544567912446039211534169749860619653518128969604970447;

	nodes[25] 	= -3.1539897819612155685645592946302919682320465304269675931750334412466759896602210440562500768260082603822498990632632798777430197;
	weights[25] 	= 0.000011842716592385975347562752112298288486447797003510058781397034478046770911887072675551947985721698529128793329711;

	nodes[26] 	= 3.1539897819612155685645592946302919682320465304269675931750334412466759896602210440562500768260082603822498990632632798777430197;
	weights[26] 	= 0.000011842716592385975347562752112298288486447797003510058781397034478046770911887072675551947985721698529128793329711;

	nodes[27] 	= -3.4021588258868608856032673974398721170913454867168231612290360477242583142499026952633708564987899328972407140006237376191546433;
	weights[27] 	= 2.339076895801549368814670817866022548284902726630222396656468924409400115550314821668641776444904331584220348671e-6;

	nodes[28] 	= 3.4021588258868608856032673974398721170913454867168231612290360477242583142499026952633708564987899328972407140006237376191546433;
	weights[28] 	= 2.339076895801549368814670817866022548284902726630222396656468924409400115550314821668641776444904331584220348671e-6;

	nodes[29] 	= -3.6516494632523200835738617532915372464676217352366540268142907388416422387710592997468994259747805537439192893166059152583957473;
	weights[29] 	= 4.04722654097017607489848841495424212457219471190706911627812764195349539131520967115854796460906326457638472097e-7;

	nodes[30] 	= 3.6516494632523200835738617532915372464676217352366540268142907388416422387710592997468994259747805537439192893166059152583957473;
	weights[30] 	= 4.04722654097017607489848841495424212457219471190706911627812764195349539131520967115854796460906326457638472097e-7;

	nodes[31] 	= -3.9025904784769208528254761782150219541208961576133723862917473997514402609906815258253776067079171262809496997602514784687440779;
	weights[31] 	= 6.1165350599767646369137584702102637281983894541126044194968200503634291816946223444378738710565757804951020247e-8;

	nodes[32] 	= 3.9025904784769208528254761782150219541208961576133723862917473997514402609906815258253776067079171262809496997602514784687440779;
	weights[32] 	= 6.1165350599767646369137584702102637281983894541126044194968200503634291816946223444378738710565757804951020247e-8;

	nodes[33] 	= -4.1551195285347461883263531658842474258827191168078783853518800231431817428203163437608549462972200452085017962785687040269755563;
	weights[33] 	= 8.0473976876877593063292961126944993672893173180499563408173285998983005470107602682918902781120371298232675657e-9;

	nodes[34] 	= 4.1551195285347461883263531658842474258827191168078783853518800231431817428203163437608549462972200452085017962785687040269755563;
	weights[34] 	= 8.0473976876877593063292961126944993672893173180499563408173285998983005470107602682918902781120371298232675657e-9;

	nodes[35] 	= -4.409384464066000384847032708695716667482523925239966487935328076747783540490990281883459778611511012654423317798029361825219986;
	weights[35] 	= 9.183543315976317389134137541227780358924054594818296404093952685252158508433735838161509340268028436716937087e-10;

	nodes[36] 	= 4.409384464066000384847032708695716667482523925239966487935328076747783540490990281883459778611511012654423317798029361825219986;
	weights[36] 	= 9.183543315976317389134137541227780358924054594818296404093952685252158508433735838161509340268028436716937087e-10;

	nodes[37] 	= -4.6655448734152241619754632537809618386647359566282472638373250614728279622698079025446011451995370236614823504654922817103573438;
	weights[37] 	= 9.05292799921796504789059332659882350758783095369421137247376782511666388294521539286200655787269874552062922e-11;

	nodes[38] 	= 4.6655448734152241619754632537809618386647359566282472638373250614728279622698079025446011451995370236614823504654922817103573438;
	weights[38] 	= 9.05292799921796504789059332659882350758783095369421137247376782511666388294521539286200655787269874552062922e-11;

	nodes[39] 	= -4.9237739013081613996652043404558722663117687669941474563122761654895472014920761995101261127075457927077720495505203107244045741;
	weights[39] 	= 7.67369285146952108488988245983146708843312418692014406000407979216039129775235553205274944553354694016171325e-12;

	nodes[40] 	= 4.9237739013081613996652043404558722663117687669941474563122761654895472014920761995101261127075457927077720495505203107244045741;
	weights[40] 	= 7.67369285146952108488988245983146708843312418692014406000407979216039129775235553205274944553354694016171325e-12;

	nodes[41] 	= -5.1842604083343016578085835196957510096424403770460621587260522665482347528776990615729825636536331906083459732214944423279578124;
	weights[41] 	= 5.5646126660265734764434481702964066410805619558701107138114282899067936926006100781069120602401642626127469e-13;

	nodes[42] 	= 5.1842604083343016578085835196957510096424403770460621587260522665482347528776990615729825636536331906083459732214944423279578124;
	weights[42] 	= 5.5646126660265734764434481702964066410805619558701107138114282899067936926006100781069120602401642626127469e-13;

	nodes[43] 	= -5.4472115568012643591210156771161900245683126994829131918428390136801749559585965468866773594564470964701649272806277991701680549;
	weights[43] 	= 3.43235649700592137493576789964941667809432937354163310348999735655794977134178708122289976217323825517044558e-14;

	nodes[44] 	= 5.4472115568012643591210156771161900245683126994829131918428390136801749559585965468866773594564470964701649272806277991701680549;
	weights[44] 	= 3.43235649700592137493576789964941667809432937354163310348999735655794977134178708122289976217323825517044558e-14;

	nodes[45] 	= -5.7128559348775814205552087281561283662134915737438123501189180218938656323889445840741478192485135952354808586123926202944594055;
	weights[45] 	= 1.7892942386134805835901413430229426732245049622367502565956224766468694824097249204102880136428331509532906e-15;

	nodes[46] 	= 5.7128559348775814205552087281561283662134915737438123501189180218938656323889445840741478192485135952354808586123926202944594055;
	weights[46] 	= 1.7892942386134805835901413430229426732245049622367502565956224766468694824097249204102880136428331509532906e-15;

	nodes[47] 	= -5.981447367209963763214109468128091907930339128339823519642701740253836558883031361459998946879755496955976427864046426514821674;
	weights[47] 	= 7.8262318929365696786572447972881754922675032752794785567230219598217107613899053908138947619842073718364784e-17;

	nodes[48] 	= 5.981447367209963763214109468128091907930339128339823519642701740253836558883031361459998946879755496955976427864046426514821674;
	weights[48] 	= 7.8262318929365696786572447972881754922675032752794785567230219598217107613899053908138947619842073718364784e-17;

	nodes[49] 	= -6.2532696108544226941552237807676064710041790662384749741337674176509971433499446396883845351262851855104671246764916888991029042;
	weights[49] 	= 2.8486537373202794706027687297495550408288316727222799315383140801638755557412354996315565593792340238197672e-18;

	nodes[50] 	= 6.2532696108544226941552237807676064710041790662384749741337674176509971433499446396883845351262851855104671246764916888991029042;
	weights[50] 	= 2.8486537373202794706027687297495550408288316727222799315383140801638755557412354996315565593792340238197672e-18;

	nodes[51] 	= -6.5286422072422224713493639825810464255157963612534838192395882707709355044849425756514586807569688869909716728418854472472595382;
	weights[51] 	= 8.548449865945278077360732536407493619778644269393420977758896729880998702986587018934851046610828969256135e-20;

	nodes[52] 	= 6.5286422072422224713493639825810464255157963612534838192395882707709355044849425756514586807569688869909716728418854472472595382;
	weights[52] 	= 8.548449865945278077360732536407493619778644269393420977758896729880998702986587018934851046610828969256135e-20;

	nodes[53] 	= -6.8079278647256036964630451798847851187705097642892361760828726473129573424205340257050276483813386647708421935137400191210344719;
	weights[53] 	= 2.092460401454812882513680373469499793806048102445809512421950270657668984878170092089062477927667490028686e-21;

	nodes[54] 	= 6.8079278647256036964630451798847851187705097642892361760828726473129573424205340257050276483813386647708421935137400191210344719;
	weights[54] 	= 2.092460401454812882513680373469499793806048102445809512421950270657668984878170092089062477927667490028686e-21;

	nodes[55] 	= -7.0915418991761441840458893005270535212744151688902271012528230748929916778105595771908813929619627595014445512348355361862412837;
	weights[55] 	= 4.12674882315757223103290557497672826692786194373397299762585582437587233482260350258845666014312387032823e-23;

	nodes[56] 	= 7.0915418991761441840458893005270535212744151688902271012528230748929916778105595771908813929619627595014445512348355361862412837;
	weights[56] 	= 4.12674882315757223103290557497672826692786194373397299762585582437587233482260350258845666014312387032823e-23;

	nodes[57] 	= -7.3799644903419364388771155986613847745700195255198548328829794174668961438435216665607172555973417609294306350873231829418042932;
	weights[57] 	= 6.464597779261614778744121638862919632619979522883647751469389831012955900684664636245509080084961490223399e-25;

	nodes[58] 	= 7.3799644903419364388771155986613847745700195255198548328829794174668961438435216665607172555973417609294306350873231829418042932;
	weights[58] 	= 6.464597779261614778744121638862919632619979522883647751469389831012955900684664636245509080084961490223399e-25;

	nodes[59] 	= -7.6737568668958451510744235098163636033320585641721396500997288443830729332818452944335841775009337130180681525253884400879530385;
	weights[59] 	= 7.910423367387215455285881526131308246995214539649241612039737272708188324925386213411918449641491951865012e-27;

	nodes[60] 	= 7.6737568668958451510744235098163636033320585641721396500997288443830729332818452944335841775009337130180681525253884400879530385;
	weights[60] 	= 7.910423367387215455285881526131308246995214539649241612039737272708188324925386213411918449641491951865012e-27;

	nodes[61] 	= -7.973583096601899740772144502271158689948658897673279067758650021951853236992767665797016439814442941210900622426167886370781058;
	weights[61] 	= 7.412992091522888519443818947441786906104913715143652630864900487332050116725149198505452276118801188748224e-29;

	nodes[62] 	= 7.973583096601899740772144502271158689948658897673279067758650021951853236992767665797016439814442941210900622426167886370781058;
	weights[62] 	= 7.412992091522888519443818947441786906104913715143652630864900487332050116725149198505452276118801188748224e-29;

	nodes[63] 	= -8.2802400806274571180310533040769489804413227289798019512169542891848105795772846315491329267072494625233055396020136386443336998;
	weights[63] 	= 5.195544007177820127829126001550035027425121194438089968936908401470959588697212960869039952463331046202804e-31;

	nodes[64] 	= 8.2802400806274571180310533040769489804413227289798019512169542891848105795772846315491329267072494625233055396020136386443336998;
	weights[64] 	= 5.195544007177820127829126001550035027425121194438089968936908401470959588697212960869039952463331046202804e-31;

	nodes[65] 	= -8.5946999176295068245150478461715884358330477268427017393451340640154759100707383106541613081061573691617265608300210822956649008;
	weights[65] 	= 2.6460383187052339597693701559664989404895559886238026634083239896411556218265468787225109328646450444011653e-33;

	nodes[66] 	= 8.5946999176295068245150478461715884358330477268427017393451340640154759100707383106541613081061573691617265608300210822956649008;
	weights[66] 	= 2.6460383187052339597693701559664989404895559886238026634083239896411556218265468787225109328646450444011653e-33;

	nodes[67] 	= -8.9181715786909087673877418581738827033901877816009313254326343239606710899998206654734806637120734045615941452462194723025452854;
	weights[67] 	= 9.44919389664813183598109347180821916314621860003180184451098354556394509265569260458021080666437991130113e-36;

	nodes[68] 	= 8.9181715786909087673877418581738827033901877816009313254326343239606710899998206654734806637120734045615941452462194723025452854;
	weights[68] 	= 9.44919389664813183598109347180821916314621860003180184451098354556394509265569260458021080666437991130113e-36;

	nodes[69] 	= -9.2521940040089018940916158734188534713066434059216998848885856713245210495478316545472465658416060768049625937350242937346672465;
	weights[69] 	= 2.2616501773133520597913215933972251598318795731426073038056484846473877809475967400831350843908321892122608e-38;

	nodes[70] 	= 9.2521940040089018940916158734188534713066434059216998848885856713245210495478316545472465658416060768049625937350242937346672465;
	weights[70] 	= 2.2616501773133520597913215933972251598318795731426073038056484846473877809475967400831350843908321892122608e-38;

	nodes[71] 	= -9.5987829596674029037367421167820675874785574959979609282897655842635568397471208373968158453362074916398229668262171483129167157;
	weights[71] 	= 3.4214653414754847557435336483884761802145767129585571283449351849841523795383233025317903194289276793173558e-41;

	nodes[72] 	= 9.5987829596674029037367421167820675874785574959979609282897655842635568397471208373968158453362074916398229668262171483129167157;
	weights[72] 	= 3.4214653414754847557435336483884761802145767129585571283449351849841523795383233025317903194289276793173558e-41;

	nodes[73] 	= -9.9606757765591646890592983411646334619999191723283955651781939628908069160943739713757214661169985204648697426640925012194363636;
	weights[73] 	= 3.02333212694111541862100807340627114469952560727749604007861687160818913996440874940279916524570820405305993e-44;

	nodes[74] 	= 9.9606757765591646890592983411646334619999191723283955651781939628908069160943739713757214661169985204648697426640925012194363636;
	weights[74] 	= 3.02333212694111541862100807340627114469952560727749604007861687160818913996440874940279916524570820405305993e-44;

	nodes[75] 	= -10.341769018312585414811554138310269433105996637909211781160351995890858587122781435383622011663571248839520140478101742104307224;
	weights[75] 	= 1.396423978392573376709984345168749572320021281800051080851889903125495739841836567495248237033242624659935263e-47;

	nodes[76] 	= 10.341769018312585414811554138310269433105996637909211781160351995890858587122781435383622011663571248839520140478101742104307224;
	weights[76] 	= 1.396423978392573376709984345168749572320021281800051080851889903125495739841836567495248237033242624659935263e-47;

	nodes[77] 	= -10.747978586907844527030728808080324979291996824182260560720944311465758621134461667200590943086906984673167157799293658187841847;
	weights[77] 	= 2.854816260609847806525182618560356114899095757486079511617994367915456434278568724562328743168663723925640307e-51;

	nodes[78] 	= 10.747978586907844527030728808080324979291996824182260560720944311465758621134461667200590943086906984673167157799293658187841847;
	weights[78] 	= 2.854816260609847806525182618560356114899095757486079511617994367915456434278568724562328743168663723925640307e-51;

	nodes[79] 	= -11.189171723313380369253117427768127246939321702792747181761566325757567842422861560542504779085129127123056894786035221703184611;
	weights[79] 	= 1.9665137729345805905154129579712841049394709710001442194833479743075805884374688659890428153341164978738593503e-55;

	nodes[80] 	= 11.189171723313380369253117427768127246939321702792747181761566325757567842422861560542504779085129127123056894786035221703184611;
	weights[80] 	= 1.9665137729345805905154129579712841049394709710001442194833479743075805884374688659890428153341164978738593503e-55;

	nodes[81] 	= -11.684508587714936478676932389913918084694731444625274617264678926890712055805612560845405465208259473988263650846273467543955033;
	weights[81] 	= 2.71781045485543903869076612916422283496442065937661722120107844524656608635145149201511747111591421811356425244e-60;

	nodes[82] 	= 11.684508587714936478676932389913918084694731444625274617264678926890712055805612560845405465208259473988263650846273467543955033;
	weights[82] 	= 2.71781045485543903869076612916422283496442065937661722120107844524656608635145149201511747111591421811356425244e-60;

	nodes[83] 	= -12.284185353778503126240218027471773111585035883675942612185027797756955089880539604396152371058654382848965323118569439512365005;
	weights[83] 	= 2.0210775843650016382161572146036508612998845414889443859204868618117542532323064540995323279821886883827150632642e-66;

	nodes[84] 	= 12.284185353778503126240218027471773111585035883675942612185027797756955089880539604396152371058654382848965323118569439512365005;
	weights[84] 	= 2.0210775843650016382161572146036508612998845414889443859204868618117542532323064540995323279821886883827150632642e-66;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_85_hpp__)*/