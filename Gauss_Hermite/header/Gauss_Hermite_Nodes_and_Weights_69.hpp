//
//        Gauss_Hermite_Nodes_and_Weights_69.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 69.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_69_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_69_hpp__

void Gauss_Hermite_Nodes_and_Weights_69(long double*& nodes, long double*& weights) {
	nodes	= new long double[69];
	weights	= new long double[69];

	nodes[0] 	= 0;
	weights[0] 	= 0.26646296361626067384388823966422809826874865665869138939476711721181046916170370662933970749171306298692057199248909152148335636;

	nodes[1] 	= -0.26648565380755117484118018084818483059820137522930759022617750320699281166134541148392299164162477098865327698140197502767311079;
	weights[1] 	= 0.248259889921121685305257514219912458310653209114830029557764959200552419857115985231907247790739905507188753352774003907097259;

	nodes[2] 	= 0.26648565380755117484118018084818483059820137522930759022617750320699281166134541148392299164162477098865327698140197502767311079;
	weights[2] 	= 0.248259889921121685305257514219912458310653209114830029557764959200552419857115985231907247790739905507188753352774003907097259;

	nodes[3] 	= -0.53310762988307845661198221308100456161657776827015070566596457654547071962865879725360389629099475420992546149440812642214036004;
	weights[3] 	= 0.20074887688731424609123780256406650899494802681864165777422582933968869440604298862345599715019495479687767593691385488547961;

	nodes[4] 	= 0.53310762988307845661198221308100456161657776827015070566596457654547071962865879725360389629099475420992546149440812642214036004;
	weights[4] 	= 0.20074887688731424609123780256406650899494802681864165777422582933968869440604298862345599715019495479687767593691385488547961;

	nodes[5] 	= -0.80000315987311327284533383146350863720072814980896222242649832077446544577983466090258163936109834147240045947697954661293092082;
	weights[5] 	= 0.1408277379440146700012924882107448009492180466822521615422110913477021113351298340020453899895880134804864258547085560028066;

	nodes[6] 	= 0.80000315987311327284533383146350863720072814980896222242649832077446544577983466090258163936109834147240045947697954661293092082;
	weights[6] 	= 0.1408277379440146700012924882107448009492180466822521615422110913477021113351298340020453899895880134804864258547085560028066;

	nodes[7] 	= -1.0673113119622562229866603188645477439624879928039228655188151048247959108259884542452336820528720446736430192816301367108041236;
	weights[7] 	= 0.085643719556780969020952453384126304671118529205782966769713037133120394450234647450722275574129368774672054558463125181162;

	nodes[8] 	= 1.0673113119622562229866603188645477439624879928039228655188151048247959108259884542452336820528720446736430192816301367108041236;
	weights[8] 	= 0.085643719556780969020952453384126304671118529205782966769713037133120394450234647450722275574129368774672054558463125181162;

	nodes[9] 	= -1.3351739542940309502336222798876481093457112268257559805998169414136841865555680121708097716625954100875809695329497562384355882;
	weights[9] 	= 0.04510526729169996390928134472502754402286276137378949908960440293865484640925785240154393522897274996691814396727245099164;

	nodes[10] 	= 1.3351739542940309502336222798876481093457112268257559805998169414136841865555680121708097716625954100875809695329497562384355882;
	weights[10] 	= 0.04510526729169996390928134472502754402286276137378949908960440293865484640925785240154393522897274996691814396727245099164;

	nodes[11] 	= -1.603736774578648521328576635426006975438078948515704380863229200929838070173722768668886806695613931880604974035786974813123284;
	weights[11] 	= 0.020544655922552204550996635298734182324538471483122096862030024648678430629605859316312457554977421523482892099766427153;

	nodes[12] 	= 1.603736774578648521328576635426006975438078948515704380863229200929838070173722768668886806695613931880604974035786974813123284;
	weights[12] 	= 0.020544655922552204550996635298734182324538471483122096862030024648678430629605859316312457554977421523482892099766427153;

	nodes[13] 	= -1.8731503781015580668373940572313180865655349444918257568225930571541009857343278969415433802708334553497197972358564613775845154;
	weights[13] 	= 0.008079456330374966972784006888752551593759406756035572268212246930902147376172712644400252269910261497053426771076243361;

	nodes[14] 	= 1.8731503781015580668373940572313180865655349444918257568225930571541009857343278969415433802708334553497197972358564613775845154;
	weights[14] 	= 0.008079456330374966972784006888752551593759406756035572268212246930902147376172712644400252269910261497053426771076243361;

	nodes[15] 	= -2.1435714896364329483850531634287239867218505443314901409180206748427600056156106929976363183043627834202523860744610122775988629;
	weights[15] 	= 0.002737765899879270156594379791545399039397274291014157770450962533695717149264565981064055917385663476285207215064936362;

	nodes[16] 	= 2.1435714896364329483850531634287239867218505443314901409180206748427600056156106929976363183043627834202523860744610122775988629;
	weights[16] 	= 0.002737765899879270156594379791545399039397274291014157770450962533695717149264565981064055917385663476285207215064936362;

	nodes[17] 	= -2.4151642892936242478838339070930604078381748660713730510072357245225794733688765221506406260469559622038010537218496627145816601;
	weights[17] 	= 0.00079743820114063378377067723300395026752989493239711239638341519413905871943393201231471352264929010970853971689991883;

	nodes[18] 	= 2.4151642892936242478838339070930604078381748660713730510072357245225794733688765221506406260469559622038010537218496627145816601;
	weights[18] 	= 0.00079743820114063378377067723300395026752989493239711239638341519413905871943393201231471352264929010970853971689991883;

	nodes[19] 	= -2.688101918440161857907694346107133421086597642513539421170771082078713909674279491215333311520287821737874409056451366132019529;
	weights[19] 	= 0.00019909609055329142881180585904537066112065281002688550603377821544385195564357120440081947491547653409304060335540268;

	nodes[20] 	= 2.688101918440161857907694346107133421086597642513539421170771082078713909674279491215333311520287821737874409056451366132019529;
	weights[20] 	= 0.00019909609055329142881180585904537066112065281002688550603377821544385195564357120440081947491547653409304060335540268;

	nodes[21] 	= -2.9625681999937007655999106139466943675816711449635784160538224300643378981565892698478943821089090577159016623608093338742754022;
	weights[21] 	= 0.00004246957643392292069312184033818173848758075971354252317354407189087711357940608031431713493429838400279715489631901;

	nodes[22] 	= 2.9625681999937007655999106139466943675816711449635784160538224300643378981565892698478943821089090577159016623608093338742754022;
	weights[22] 	= 0.00004246957643392292069312184033818173848758075971354252317354407189087711357940608031431713493429838400279715489631901;

	nodes[23] 	= -3.238759628307363094637820053833402445265091415611998152042437095376245348161037820061294747651919004154685761317809097537615418;
	weights[23] 	= 7.71104127696795999965416975308445629485717436377470586102587432912456549483680819214321691626527830944980121189046e-6;

	nodes[24] 	= 3.238759628307363094637820053833402445265091415611998152042437095376245348161037820061294747651919004154685761317809097537615418;
	weights[24] 	= 7.71104127696795999965416975308445629485717436377470586102587432912456549483680819214321691626527830944980121189046e-6;

	nodes[25] 	= -3.5168876985063169804501131209445725206617953807223319486487811230258873363406681940838194429438510576203294573120587759257605368;
	weights[25] 	= 1.18658723539186707712273845273754769313420467036828266474718084079278098531948206446439052687189372845994322056769e-6;

	nodes[26] 	= 3.5168876985063169804501131209445725206617953807223319486487811230258873363406681940838194429438510576203294573120587759257605368;
	weights[26] 	= 1.18658723539186707712273845273754769313420467036828266474718084079278098531948206446439052687189372845994322056769e-6;

	nodes[27] 	= -3.797181664924647350403083353363732113569555718296609764636584960895681366088571806729942371390901414259159726920940309683509224;
	weights[27] 	= 1.5399292502875019641802002132253408776965070498009452113140489336180593365539178040188910600664633198130925891461e-7;

	nodes[28] 	= 3.797181664924647350403083353363732113569555718296609764636584960895681366088571806729942371390901414259159726920940309683509224;
	weights[28] 	= 1.5399292502875019641802002132253408776965070498009452113140489336180593365539178040188910600664633198130925891461e-7;

	nodes[29] 	= -4.0798918452871911585087115746827690215361541317699148655430663315992382009642034325569389554947516128541517039634960268468698576;
	weights[29] 	= 1.6759992864220912723212253195707362485894117165426488361939164471683269219185549956325578768863050675950678410758e-8;

	nodes[30] 	= 4.0798918452871911585087115746827690215361541317699148655430663315992382009642034325569389554947516128541517039634960268468698576;
	weights[30] 	= 1.6759992864220912723212253195707362485894117165426488361939164471683269219185549956325578768863050675950678410758e-8;

	nodes[31] 	= -4.3652936245432167645386814012230647084466072474765944368518816969069945496130884282251450455214196934289889261516588237087046705;
	weights[31] 	= 1.519938174098298040552305240869331123412500551708834990101991905129720382867887226919653319907358682062925608037e-9;

	nodes[32] 	= 4.3652936245432167645386814012230647084466072474765944368518816969069945496130884282251450455214196934289889261516588237087046705;
	weights[32] 	= 1.519938174098298040552305240869331123412500551708834990101991905129720382867887226919653319907358682062925608037e-9;

	nodes[33] 	= -4.6536923643912965964610714833168694321233490451635898538330067893830595254567463444402103300908589790303243604462010537844066376;
	weights[33] 	= 1.140139255348938715677471382112804180782382823576431777186774003751831191483328975171156002756652788559614830471e-10;

	nodes[34] 	= 4.6536923643912965964610714833168694321233490451635898538330067893830595254567463444402103300908589790303243604462010537844066376;
	weights[34] 	= 1.140139255348938715677471382112804180782382823576431777186774003751831191483328975171156002756652788559614830471e-10;

	nodes[35] 	= -4.9454294985999852187266599318844512889205131012899394429453429052211809141316599086812194202818250702961006057657888213124162034;
	weights[35] 	= 7.01446823519132357713796899915408723661274583988978974074761705213233982506590867367388065446539762202873875978e-12;

	nodes[36] 	= 4.9454294985999852187266599318844512889205131012899394429453429052211809141316599086812194202818250702961006057657888213124162034;
	weights[36] 	= 7.01446823519132357713796899915408723661274583988978974074761705213233982506590867367388065446539762202873875978e-12;

	nodes[37] 	= -5.240890201286034947152920009612766947120218701590219304572975541048036459279941163198224542641005002260124745691546766878328717;
	weights[37] 	= 3.50507869476882958831136818775444107217715168236246227682628040816171265849760820879905880926095843320571693514e-13;

	nodes[38] 	= 5.240890201286034947152920009612766947120218701590219304572975541048036459279941163198224542641005002260124745691546766878328717;
	weights[38] 	= 3.50507869476882958831136818775444107217715168236246227682628040816171265849760820879905880926095843320571693514e-13;

	nodes[39] 	= -5.5405131730790885288254775795940435869860876120353104842131359369535564325534801402319073497157321389934204413023867617830494507;
	weights[39] 	= 1.4065409569369089803970837005576410211438989233017105800847819569785786711878596104869534056889504388265123086e-14;

	nodes[40] 	= 5.5405131730790885288254775795940435869860876120353104842131359369535564325534801402319073497157321389934204413023867617830494507;
	weights[40] 	= 1.4065409569369089803970837005576410211438989233017105800847819569785786711878596104869534056889504388265123086e-14;

	nodes[41] 	= -5.844803327699797845984442191252161324192669824751660436819475926852608692594985199527120751612963438511860300053406818130239168;
	weights[41] 	= 4.4732478501982534291795598669829516716388762631794370453057886192666740520384435066440088276023352480112260657e-16;

	nodes[42] 	= 5.844803327699797845984442191252161324192669824751660436819475926852608692594985199527120751612963438511860300053406818130239168;
	weights[42] 	= 4.4732478501982534291795598669829516716388762631794370453057886192666740520384435066440088276023352480112260657e-16;

	nodes[43] 	= -6.1543485281550765808596672199307702740920645351908447623129847060397853096330463448669317520902749736107269784856015852812989517;
	weights[43] 	= 1.11009949885908955046543769312012500746460528388962398742728751117797169229583536028682177235891318348540952144e-17;

	nodes[44] 	= 6.1543485281550765808596672199307702740920645351908447623129847060397853096330463448669317520902749736107269784856015852812989517;
	weights[44] 	= 1.11009949885908955046543769312012500746460528388962398742728751117797169229583536028682177235891318348540952144e-17;

	nodes[45] 	= -6.4698421035199564133613225804905436450624732452722842185963076099820895669923400447949241640312646836008056967229130728897084433;
	weights[45] 	= 2.110346879313025591242052265637236596805652709838689472605326777713303923466279623029489569410332989453742515e-19;

	nodes[46] 	= 6.4698421035199564133613225804905436450624732452722842185963076099820895669923400447949241640312646836008056967229130728897084433;
	weights[46] 	= 2.110346879313025591242052265637236596805652709838689472605326777713303923466279623029489569410332989453742515e-19;

	nodes[47] 	= -6.7921138299353222518644002612560111605792142802324751393741845851287140376771617838517969533825293472544127762531637570217943115;
	weights[47] 	= 3.0058381695418590158667503733941386584518224681816758564573330518596931259981085090302896799146943595214297e-21;

	nodes[48] 	= 6.7921138299353222518644002612560111605792142802324751393741845851287140376771617838517969533825293472544127762531637570217943115;
	weights[48] 	= 3.0058381695418590158667503733941386584518224681816758564573330518596931259981085090302896799146943595214297e-21;

	nodes[49] 	= -7.1221736773103954471859590574689187993724223783445690762068878252384182024725718930318004320629843957250143817233322889450114624;
	weights[49] 	= 3.1221586704547967293882560946929046634821470920384363351521693335624624850336954499429917074618438303591826787e-23;

	nodes[50] 	= 7.1221736773103954471859590574689187993724223783445690762068878252384182024725718930318004320629843957250143817233322889450114624;
	weights[50] 	= 3.1221586704547967293882560946929046634821470920384363351521693335624624850336954499429917074618438303591826787e-23;

	nodes[51] 	= -7.4612754898399771593126900560999985607273903411085270670537688109356234378115800027797918615004561339373271057409019754206665308;
	weights[51] 	= 2.2869723112553934880616216797536590649988542324139471397436501824746136071797200068806519688896552000431597627e-25;

	nodes[52] 	= 7.4612754898399771593126900560999985607273903411085270670537688109356234378115800027797918615004561339373271057409019754206665308;
	weights[52] 	= 2.2869723112553934880616216797536590649988542324139471397436501824746136071797200068806519688896552000431597627e-25;

	nodes[53] 	= -7.8110131087611867600861542820074602172691147330259206979736321274895478169127592020963128553924489810424677332054321160636628253;
	weights[53] 	= 1.13224508834167859438794203630774925617643039540896683375790790558203774092960034372286745496132076914769875141e-27;

	nodes[54] 	= 7.8110131087611867600861542820074602172691147330259206979736321274895478169127592020963128553924489810424677332054321160636628253;
	weights[54] 	= 1.13224508834167859438794203630774925617643039540896683375790790558203774092960034372286745496132076914769875141e-27;

	nodes[55] 	= -8.1734720117891596127481039549623302853767919400827260623945994366171879345104760316112705818324702602318037449060342174996186892;
	weights[55] 	= 3.58514393728562664855173963878014290982449625346271803276100328006964506166077923380058996220693129987028397504e-30;

	nodes[56] 	= 8.1734720117891596127481039549623302853767919400827260623945994366171879345104760316112705818324702602318037449060342174996186892;
	weights[56] 	= 3.58514393728562664855173963878014290982449625346271803276100328006964506166077923380058996220693129987028397504e-30;

	nodes[57] 	= -8.5514820514248042555143913970408985385272002738289427465036732580634233597536718394181693105893401265146338361222521382593962513;
	weights[57] 	= 6.74039322584825450168975117410001259882836956864385187626072169080929678508269322950843455466433389017870508107e-33;

	nodes[58] 	= 8.5514820514248042555143913970408985385272002738289427465036732580634233597536718394181693105893401265146338361222521382593962513;
	weights[58] 	= 6.74039322584825450168975117410001259882836956864385187626072169080929678508269322950843455466433389017870508107e-33;

	nodes[59] 	= -8.9490694985983320076402703472843977295638468848749798019479830972063785098876380802051394287537750366566312477854691272569123568;
	weights[59] 	= 6.77739625940820259151633824157649291764513236207357534987320858295563542443681405080634588513226581861303569456e-36;

	nodes[60] 	= 8.9490694985983320076402703472843977295638468848749798019479830972063785098876380802051394287537750366566312477854691272569123568;
	weights[60] 	= 6.77739625940820259151633824157649291764513236207357534987320858295563542443681405080634588513226581861303569456e-36;

	nodes[61] 	= -9.372345566336882941647695079454526692304112183402445729806724607986931143243131923198469786907089870578155568973981756561439347;
	weights[61] 	= 3.116518308766831863348101178017191633788842975786296284459228044381161211964630458383925466115248207618346955777e-39;

	nodes[62] 	= 9.372345566336882941647695079454526692304112183402445729806724607986931143243131923198469786907089870578155568973981756561439347;
	weights[62] 	= 3.116518308766831863348101178017191633788842975786296284459228044381161211964630458383925466115248207618346955777e-39;

	nodes[63] 	= -9.8315026740330877716177499044914682403456423273601941888450494731332102494035044942772191173465069906427335085482310845921901849;
	weights[63] 	= 5.071530359097701998632425398609096780975999946888205173302477293435378226146612737853841287441426708498285345405e-43;

	nodes[64] 	= 9.8315026740330877716177499044914682403456423273601941888450494731332102494035044942772191173465069906427335085482310845921901849;
	weights[64] 	= 5.071530359097701998632425398609096780975999946888205173302477293435378226146612737853841287441426708498285345405e-43;

	nodes[65] 	= -10.346335043862190690729909780284647215498865452725389492036725550677884318148915111584669816344536935924049387668165175746726469;
	weights[65] 	= 1.79543842980592067685347532695478091551630568002345660382315124782862706030195699486562827175082791891307187052032e-47;

	nodes[66] 	= 10.346335043862190690729909780284647215498865452725389492036725550677884318148915111584669816344536935924049387668165175746726469;
	weights[66] 	= 1.79543842980592067685347532695478091551630568002345660382315124782862706030195699486562827175082791891307187052032e-47;

	nodes[67] 	= -10.968716712272720660281294308299148560410343767313756078208520340546223041301902408877127780938515160241699033200961183337595537;
	weights[67] 	= 4.03454580739591766118431401998871587289417036126483877619510497944678820584470321156083725830035870424714577504248e-53;

	nodes[68] 	= 10.968716712272720660281294308299148560410343767313756078208520340546223041301902408877127780938515160241699033200961183337595537;
	weights[68] 	= 4.03454580739591766118431401998871587289417036126483877619510497944678820584470321156083725830035870424714577504248e-53;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_69_hpp__)*/