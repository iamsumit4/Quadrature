//
//        Gauss_Legendre_Nodes_and_Weights_121.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 121.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_121_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_121_hpp__

void Gauss_Legendre_Nodes_and_Weights_121(long double*& nodes, long double*& weights) {
	nodes	= new long double[121];
	weights	= new long double[121];

	nodes[0] 	= 0;
	weights[0] 	= 0.02585651072637678876179074253781984477868842785545407084260831500408632044164239843299094482296950747261491329074817776054246774;

	nodes[1] 	= -0.025853629672777886331934362814913268471186494170744792787065939299242249904265110617334014966034905768942871176849618477179041704;
	weights[1] 	= 0.0258478677581991278235563800149292328739523674682507726557670904449641422902957420958793867267413659299608450571541676895355528;

	nodes[2] 	= 0.025853629672777886331934362814913268471186494170744792787065939299242249904265110617334014966034905768942871176849618477179041704;
	weights[2] 	= 0.0258478677581991278235563800149292328739523674682507726557670904449641422902957420958793867267413659299608450571541676895355528;

	nodes[3] 	= -0.051689975335280534641733840949033672306719399444936162497668779139322708772930743213892540739880872161674777979971371432650030091;
	weights[3] 	= 0.025821944631777624402865789237677703340323289434530868472664212090689426519947982423470586185219325353811025052616169559732478;

	nodes[4] 	= 0.051689975335280534641733840949033672306719399444936162497668779139322708772930743213892540739880872161674777979971371432650030091;
	weights[4] 	= 0.025821944631777624402865789237677703340323289434530868472664212090689426519947982423470586185219325353811025052616169559732478;

	nodes[5] 	= -0.077491764532168017799154053349231490484273173921398936623562501528413576840097340142477310390272875604051600880661025262247650255;
	weights[5] 	= 0.025778758677583859083329683092143015080531813266071491132865033375810333808883360461544502378548723208066947980840800466643;

	nodes[6] 	= 0.077491764532168017799154053349231490484273173921398936623562501528413576840097340142477310390272875604051600880661025262247650255;
	weights[6] 	= 0.025778758677583859083329683092143015080531813266071491132865033375810333808883360461544502378548723208066947980840800466643;

	nodes[7] 	= -0.10324174791024617611135731021440478491900713450197595345355060712242450584740595585472494773408193637471860274351516060202532098;
	weights[7] 	= 0.025718338766863523336814032306422973901472743092054990794696440729385374321980471137887510731734192326375953275120150428048;

	nodes[8] 	= 0.10324174791024617611135731021440478491900713450197595345355060712242450584740595585472494773408193637471860274351516060202532098;
	weights[8] 	= 0.025718338766863523336814032306422973901472743092054990794696440729385374321980471137887510731734192326375953275120150428048;

	nodes[9] 	= -0.1289227107502325295885867114251843568516209938690669229797128118328590141402593381917675871435509559642788048633645152818098404;
	weights[9] 	= 0.0256407252923350422761295308547792521777208440041304254930483376187696309360555377509407067289333606616299926920412311473;

	nodes[10] 	= 0.1289227107502325295885867114251843568516209938690669229797128118328590141402593381917675871435509559642788048633645152818098404;
	weights[10] 	= 0.0256407252923350422761295308547792521777208440041304254930483376187696309360555377509407067289333606616299926920412311473;

	nodes[11] 	= -0.15451748447536828137302754342333062129542713366703848456363135020403335619986297414971255827886321845771272411261216364443305322;
	weights[11] 	= 0.025545970141185714308356246947914433925549651104852831337919190404751313592656127210807656601706613671848525947179663906;

	nodes[12] 	= 0.15451748447536828137302754342333062129542713366703848456363135020403335619986297414971255827886321845771272411261216364443305322;
	weights[12] 	= 0.025545970141185714308356246947914433925549651104852831337919190404751313592656127210807656601706613671848525947179663906;

	nodes[13] 	= -0.18000895812918252721780973798991101701063163744854534457760730644101011429577637176887669083713494825147666650819859771793515744;
	weights[13] 	= 0.0254341366603834210069146601810396375392666170696397720052328375060583234095288930415979458579769514051561052011556076;

	nodes[14] 	= 0.18000895812918252721780973798991101701063163744854534457760730644101011429577637176887669083713494825147666650819859771793515744;
	weights[14] 	= 0.0254341366603834210069146601810396375392666170696397720052328375060583234095288930415979458579769514051561052011556076;

	nodes[15] 	= -0.20538008981473540907639183100582238129672365128009694215626567706473729458996968763174235868165514194666344576900982394887473083;
	weights[15] 	= 0.025305299614327097935258524188886231359438291548032940386275256454396894772703785420033821072822187034106582270387964;

	nodes[16] 	= 0.20538008981473540907639183100582238129672365128009694215626567706473729458996968763174235868165514194666344576900982394887473083;
	weights[16] 	= 0.025305299614327097935258524188886231359438291548032940386275256454396894772703785420033821072822187034106582270387964;

	nodes[17] 	= -0.23061391808769270399269193308893430257897424615402888573067827421454558754104698361805007526172723111062914352241863719883802683;
	weights[17] 	= 0.02515954513486427908318654812459635019767876228129382987198727829633788700500047458869223466050612113837711196574536;

	nodes[18] 	= 0.23061391808769270399269193308893430257897424615402888573067827421454558754104698361805007526172723111062914352241863719883802683;
	weights[18] 	= 0.02515954513486427908318654812459635019767876228129382987198727829633788700500047458869223466050612113837711196574536;

	nodes[19] 	= -0.25569357329561520537228182535045468642115975495283136491517279672037204109810819475920053374327564169119066848873513044855241455;
	weights[19] 	= 0.024996970663709130599597873365357269968948845231375711968990708924356664666671080252689338698715887606854144732358;

	nodes[20] 	= 0.25569357329561520537228182535045468642115975495283136491517279672037204109810819475920053374327564169119066848873513044855241455;
	weights[20] 	= 0.024996970663709130599597873365357269968948845231375711968990708924356664666671080252689338698715887606854144732358;

	nodes[21] 	= -0.28060228885588221175577795979230560478321623236338846030997073577611757991233795596803627126877374685155789394136069016555660525;
	weights[21] 	= 0.02481768488729947021824981691033229734500674940586170348246999008290482727747619910476656371404245633347427669367;

	nodes[22] 	= 0.28060228885588221175577795979230560478321623236338846030997073577611757991233795596803627126877374685155789394136069016555660525;
	weights[22] 	= 0.02481768488729947021824981691033229734500674940586170348246999008290482727747619910476656371404245633347427669367;

	nodes[23] 	= -0.30532341246470946440152606485901840070713804759649041536694025230267303439324417864906765752932114917365784675078030121606435709;
	weights[23] 	= 0.024621807664136323787444102657743374669817904482779729602680190438286675871325396797213227755143414552830019493;

	nodes[24] 	= 0.30532341246470946440152606485901840070713804759649041536694025230267303439324417864906765752932114917365784675078030121606435709;
	weights[24] 	= 0.024621807664136323787444102657743374669817904482779729602680190438286675871325396797213227755143414552830019493;

	nodes[25] 	= -0.3298404172297679419312119678292817846088246196176963246558579828157172839045015410661742960764731864740470774491935152977243074;
	weights[25] 	= 0.024409469944654596261615720608545366834520542514226677792467213943445589022353540695400759322280263264345130035;

	nodes[26] 	= 0.3298404172297679419312119678292817846088246196176963246558579828157172839045015410661742960764731864740470774491935152977243074;
	weights[26] 	= 0.024409469944654596261615720608545366834520542514226677792467213943445589022353540695400759322280263264345130035;

	nodes[27] 	= -0.35413691271896099725648856440537867547281594297383035337385013068279891787129832435535244909621574604400649289355074545807248794;
	weights[27] 	= 0.0241808136836784280458268210801287281665403963801844642648327736508016716212130816496818103779957275216903137;

	nodes[28] 	= 0.35413691271896099725648856440537867547281594297383035337385013068279891787129832435535244909621574604400649289355074545807248794;
	weights[28] 	= 0.0241808136836784280458268210801287281665403963801844642648327736508016716212130816496818103779957275216903137;

	nodes[29] 	= -0.37819665591797337491016292592878238241782733232742495974730953888369958115255831684329140312537653404750277521840084594500777535;
	weights[29] 	= 0.023935991745519765381875469156523787126004692157933742018011016026519584801304349764523078159684466604478826;

	nodes[30] 	= 0.37819665591797337491016292592878238241782733232742495974730953888369958115255831684329140312537653404750277521840084594500777535;
	weights[30] 	= 0.023935991745519765381875469156523787126004692157933742018011016026519584801304349764523078159684466604478826;

	nodes[31] 	= -0.40200356208926663836782709113043139473164930281568808120402543341488966429618519382243544488140611614229345966667587997547884857;
	weights[31] 	= 0.02367516780178359223464496928607591900983999185271629078821372486194782834035703651491881278139979656289461;

	nodes[32] 	= 0.40200356208926663836782709113043139473164930281568808120402543341488966429618519382243544488140611614229345966667587997547884857;
	weights[32] 	= 0.02367516780178359223464496928607591900983999185271629078821372486194782834035703651491881278139979656289461;

	nodes[33] 	= -0.4255417155252614263044506486461295798162608443484421729065046062208671349925325201558692183284920789884223174166277469054563268;
	weights[33] 	= 0.0233985162219481476196354769651793071452146239638160918845370169993149532508463588907859626961873868610058;

	nodes[34] 	= 0.4255417155252614263044506486461295798162608443484421729065046062208671349925325201558692183284920789884223174166277469054563268;
	weights[34] 	= 0.0233985162219481476196354769651793071452146239638160918845370169993149532508463588907859626961873868610058;

	nodes[35] 	= -0.4487953801885177000831157915403744799663573839574172051040399060054626961391415909559310527306098151598832162241405527350714731;
	weights[35] 	= 0.023106221956793283284579956640454165694329217874761687128659092082519484167422296838524508085757038069317;

	nodes[36] 	= 0.4487953801885177000831157915403744799663573839574172051040399060054626961391415909559310527306098151598832162241405527350714731;
	weights[36] 	= 0.023106221956793283284579956640454165694329217874761687128659092082519484167422296838524508085757038069317;

	nodes[37] 	= -0.47174901023179969501538501284658328421712005210236610484308154858025999704263804979133644257576131690246662101954325558367329441;
	weights[37] 	= 0.02279848041475489893912142143124948139475949232407065027808413061016484545754266845235951817157991814399;

	nodes[38] 	= 0.47174901023179969501538501284658328421712005210236610484308154858025999704263804979133644257576131690246662101954325558367329441;
	weights[38] 	= 0.02279848041475489893912142143124948139475949232407065027808413061016484545754266845235951817157991814399;

	nodes[39] 	= -0.49438726039099259480350899049810771664797796997977549129572887248250745503667324065189022651129058067500533073740759288572804211;
	weights[39] 	= 0.022475497331288122684691839839718457588263217865128361231689011521280413559469350289434769076829310688;

	nodes[40] 	= 0.49438726039099259480350899049810771664797796997977549129572887248250745503667324065189022651129058067500533073740759288572804211;
	weights[40] 	= 0.022475497331288122684691839839718457588263217865128361231689011521280413559469350289434769076829310688;

	nodes[41] 	= -0.51669499624392295870798198802411659015790166257906425839210811343273043839450287001243861263772467377769427637338797924656417419;
	weights[41] 	= 0.02213748863132657985630754806924959666175184564891859606354689505068829309973912712115868357319497306;

	nodes[42] 	= 0.51669499624392295870798198802411659015790166257906425839210811343273043839450287001243861263772467377769427637338797924656417419;
	weights[42] 	= 0.02213748863132657985630754806924959666175184564891859606354689505068829309973912712115868357319497306;

	nodes[43] 	= -0.53865730432822458797058998005115199128859696675713013372983489734100440907332614666018148405568091168377923562785776766883897398;
	weights[43] 	= 0.0217846802849297111397339582435309399475688433402754783005654747701703900428360822488358875895387105;

	nodes[44] 	= 0.53865730432822458797058998005115199128859696675713013372983489734100440907332614666018148405568091168377923562785776766883897398;
	weights[44] 	= 0.0217846802849297111397339582435309399475688433402754783005654747701703900428360822488358875895387105;

	nodes[45] 	= -0.56025950211148576248316944245881710651504578673218482258286000777415337487278113868196132045233488585916647814461804635427009933;
	weights[45] 	= 0.02141730815621465764185536256759159893216823946678750188520792110992826999264214568874295615322327;

	nodes[46] 	= 0.56025950211148576248316944245881710651504578673218482258286000777415337487278113868196132045233488585916647814461804635427009933;
	weights[46] 	= 0.02141730815621465764185536256759159893216823946678750188520792110992826999264214568874295615322327;

	nodes[47] 	= -0.58148714780701254836348500242620455919766495559370821296418724130481964719890686919972180711596513170474858911651938605691882847;
	weights[47] 	= 0.02103561784567372373728613599851266477506915737963749891587665418006041516854790818214404309800113;

	nodes[48] 	= 0.58148714780701254836348500242620455919766495559370821296418724130481964719890686919972180711596513170474858911651938605691882847;
	weights[48] 	= 0.02103561784567372373728613599851266477506915737963749891587665418006041516854790818214404309800113;

	nodes[49] 	= -0.60232605002864610694660690048322284130528521968902770528448900456204071139634372227998644398745008130795506739592249583685468024;
	weights[49] 	= 0.02063986452598285528091647582564878133960683878679658428346847373850350125948059060946496999650582;

	nodes[50] 	= 0.60232605002864610694660690048322284130528521968902770528448900456204071139634372227998644398745008130795506739592249583685468024;
	weights[50] 	= 0.02063986452598285528091647582564878133960683878679658428346847373850350125948059060946496999650582;

	nodes[51] 	= -0.62276227727817955805343838152349810608077908956262158328554815200844918234522343120058216925807666412500906378862867733121046841;
	weights[51] 	= 0.0202303127714109286121246979255112248490474513613429797482250868093905142082483362106592031189327;

	nodes[52] 	= 0.62276227727817955805343838152349810608077908956262158328554815200844918234522343120058216925807666412500906378862867733121046841;
	weights[52] 	= 0.0202303127714109286121246979255112248490474513613429797482250868093905142082483362106592031189327;

	nodes[53] 	= -0.6427821672590318951346329655119564341013957348871374259962074857604393894887954607788045350541681441341501182817194031154323473;
	weights[53] 	= 0.019807236380943932336789995047506506968721536015598488043028603010512904462353207308973716891812;

	nodes[54] 	= 0.6427821672590318951346329655119564341013957348871374259962074857604393894887954607788045350541681441341501182817194031154323473;
	weights[54] 	= 0.019807236380943932336789995047506506968721536015598488043028603010512904462353207308973716891812;

	nodes[55] 	= -0.66237233600995264467247980968320106920585220511304319817703330623202050549103691854072624992007819612064844264756012753625927729;
	weights[55] 	= 0.01937091819524233709227557920815279869247979515025105642220609358828961906752915233774297503295;

	nodes[56] 	= 0.66237233600995264467247980968320106920585220511304319817703330623202050549103691854072624992007819612064844264756012753625927729;
	weights[56] 	= 0.01937091819524233709227557920815279869247979515025105642220609358828961906752915233774297503295;

	nodes[57] 	= -0.68151968685265133283624399517412103747633541318391894432492889269561057288769338213878663843098378137839361445327436019471167124;
	weights[57] 	= 0.0189216499075540866981438503362117191324255863746198906664030525888586639082374347478327700765;

	nodes[58] 	= 0.68151968685265133283624399517412103747633541318391894432492889269561057288769338213878663843098378137839361445327436019471167124;
	weights[58] 	= 0.0189216499075540866981438503362117191324255863746198906664030525888586639082374347478327700765;

	nodes[59] 	= -0.7002114191473702931848104036270095039371030833730458547559520458802408776539402200755689086649665936362626585724941334903679728;
	weights[59] 	= 0.018459731868709706135862786888103472899316321391055551967219280346465294026736480237793455015;

	nodes[60] 	= 0.7002114191473702931848104036270095039371030833730458547559520458802408776539402200755689086649665936362626585724941334903679728;
	weights[60] 	= 0.018459731868709706135862786888103472899316321391055551967219280346465294026736480237793455015;

	nodes[61] 	= -0.71843503685054784378339738833198985156429599981070477164865315406122919744431088920898347828915245473513384003395678561806545401;
	weights[61] 	= 0.01798547288633000733319997222780317207074348104666120307268136708494278114408325678058601717;

	nodes[62] 	= 0.71843503685054784378339738833198985156429599981070477164865315406122919744431088920898347828915245473513384003395678561806545401;
	weights[62] 	= 0.01798547288633000733319997222780317207074348104666120307268136708494278114408325678058601717;

	nodes[63] 	= -0.73617835686885130422554305650027839179844750239634776979250310473857275504245732872892807426850763972778821250879327033309816321;
	weights[63] 	= 0.01749919001838078355560080315343752260668548832387763075298365630389105295341654172506450346;

	nodes[64] 	= 0.73617835686885130422554305650027839179844750239634776979250310473857275504245732872892807426850763972778821250879327033309816321;
	weights[64] 	= 0.01749919001838078355560080315343752260668548832387763075298365630389105295341654172506450346;

	nodes[65] 	= -0.75342951720399563811074476587946295206845045366266314641715709756389803086711014597081320707847087538942443408153198785842421656;
	weights[65] 	= 0.017001208361212719856121401383733326209246902308150252831046730473650384369851163708060768;

	nodes[66] 	= 0.75342951720399563811074476587946295206845045366266314641715709756389803086711014597081320707847087538942443408153198785842421656;
	weights[66] 	= 0.017001208361212719856121401383733326209246902308150252831046730473650384369851163708060768;

	nodes[67] 	= -0.77017698488290362365513629694759055931223144568116696327084291348872972577999683278223164092824642950241164518248399077132712869;
	weights[67] 	= 0.016491860832228515666381434026017471984561923980932796205781737076938549972181800099865667;

	nodes[68] 	= 0.77017698488290362365513629694759055931223144568116696327084291348872972577999683278223164092824642950241164518248399077132712869;
	weights[68] 	= 0.016491860832228515666381434026017471984561923980932796205781737076938549972181800099865667;

	nodes[69] 	= -0.78640956366790731048729803619408416856446826833406643941472711561526309427826795557110812272598117260956960638304936151301883143;
	weights[69] 	= 0.015971487947322925460888386348234434022288902883339508052050610654465202634943812873181511;

	nodes[70] 	= 0.78640956366790731048729803619408416856446826833406643941472711561526309427826795557110812272598117260956960638304936151301883143;
	weights[70] 	= 0.015971487947322925460888386348234434022288902883339508052050610654465202634943812873181511;

	nodes[71] 	= -0.80211640154183806269007987874933572757267338595405661445527595502878612027166595347739510497748052171148902974742201809714797987;
	weights[71] 	= 0.01544043759324509016769390347541720639532999861410043665262050542145901442418123786996076;

	nodes[72] 	= 0.80211640154183806269007987874933572757267338595405661445527595502878612027166595347739510497748052171148902974742201809714797987;
	weights[72] 	= 0.01544043759324509016769390347541720639532999861410043665262050542145901442418123786996076;

	nodes[73] 	= -0.81728699796300368560291184032453903203135727647270019218275073972468439874860374052760654649954657274300983077703365100090384372;
	weights[73] 	= 0.01489906479503618163392310464519479620195594689928402054496351345348166262947597266704189;

	nodes[74] 	= 0.81728699796300368560291184032453903203135727647270019218275073972468439874860374052760654649954657274300983077703365100090384372;
	weights[74] 	= 0.01489906479503618163392310464519479620195594689928402054496351345348166262947597266704189;

	nodes[75] 	= -0.8319112108852059893595575238280916817718511375766973394227267499547465629149165743667189291358117520169149668118262783347580734;
	weights[75] 	= 0.0143477314786990578886665041175629795097357396701722304177430781653184032722586852805583;

	nodes[76] 	= 0.8319112108852059893595575238280916817718511375766973394227267499547465629149165743667189291358117520169149668118262783347580734;
	weights[76] 	= 0.0143477314786990578886665041175629795097357396701722304177430781653184032722586852805583;

	nodes[77] 	= -0.84597926353811071393997146494249293255769371480612273259324961107459905835496609919885100056245098084397181908287970029660668412;
	weights[77] 	= 0.013786806229260399257039454829260315070885159341122569351277456730346856378942520585406;

	nodes[78] 	= 0.84597926353811071393997146494249293255769371480612273259324961107459905835496609919885100056245098084397181908287970029660668412;
	weights[78] 	= 0.013786806229260399257039454829260315070885159341122569351277456730346856378942520585406;

	nodes[79] 	= -0.85948175096344417989593893465335870452270419822459834244104118809427175732843191837569262455782387868951254043006292481042178944;
	weights[79] 	= 0.013216664044389783591429300258115277575270875376951928360192483556636447050065506436509;

	nodes[80] 	= 0.85948175096344417989593893465335870452270419822459834244104118809427175732843191837569262455782387868951254043006292481042178944;
	weights[80] 	= 0.013216664044389783591429300258115277575270875376951928360192483556636447050065506436509;

	nodes[81] 	= -0.87240964630265764391861742101831110780020994221409504905921694632007583711523372450326813300535346747117938919331460715632009943;
	weights[81] 	= 0.012637686083744565407142343801225753817393557131509135163686393672868830316738510573349;

	nodes[82] 	= 0.87240964630265764391861742101831110780020994221409504905921694632007583711523372450326813300535346747117938919331460715632009943;
	weights[82] 	= 0.012637686083744565407142343801225753817393557131509135163686393672868830316738510573349;

	nodes[83] 	= -0.88475430683187170650693271375828693223123331268282051896721039242555523319485771926992722559607822547527925059784600784613434968;
	weights[83] 	= 0.01205025941421459942329895956171843696060695676913210063165059555389151391872504330414;

	nodes[84] 	= 0.88475430683187170650693271375828693223123331268282051896721039242555523319485771926992722559607822547527925059784600784613434968;
	weights[84] 	= 0.01205025941421459942329895956171843696060695676913210063165059555389151391872504330414;

	nodes[85] 	= -0.89650747974009029029977653801772263000240846242262462357457502152483410765235771260695355771967074811702852885630795477548139291;
	weights[85] 	= 0.01145477675124741601606334725766517466006027610493047076733908979503181493833352948058;

	nodes[86] 	= 0.89650747974009029029977653801772263000240846242262462357457502152483410765235771260695355771967074811702852885630795477548139291;
	weights[86] 	= 0.01145477675124741601606334725766517466006027610493047076733908979503181493833352948058;

	nodes[87] 	= -0.90766130764685858193934631498512620635689751875640305188799430400665294784009759584352152135234583339049572263714093666142390965;
	weights[87] 	= 0.0108516361964435459222312829142351887352562132482805997873457535219211905022071718187;

	nodes[88] 	= 0.90766130764685858193934631498512620635689751875640305188799430400665294784009759584352152135234583339049572263714093666142390965;
	weights[88] 	= 0.0108516361964435459222312829142351887352562132482805997873457535219211905022071718187;

	nodes[89] 	= -0.91820833385573537709221357760381827520661753094619116614661627669506367538179869352989332986945485791512277056470532212735516093;
	weights[89] 	= 0.0102412409716254223295471592380341634212516384886561487037022228152976532113982168381;

	nodes[90] 	= 0.91820833385573537709221357760381827520661753094619116614661627669506367538179869352989332986945485791512277056470532212735516093;
	weights[90] 	= 0.0102412409716254223295471592380341634212516384886561487037022228152976532113982168381;

	nodes[91] 	= -0.92814150734016394706579838842226076345966170626467708262797758638865107025979926463028827486703842352755380355157804212867056287;
	weights[91] 	= 0.0096239991496057548048574877032848927950523329417486038461072175410928120446202222155;

	nodes[92] 	= 0.92814150734016394706579838842226076345966170626467708262797758638865107025979926463028827486703842352755380355157804212867056287;
	weights[92] 	= 0.0096239991496057548048574877032848927950523329417486038461072175410928120446202222155;

	nodes[93] 	= -0.93745418745856921093297861830238395331230865472539657199361200063100502677909901633793370029718350481347955398806141314011688127;
	weights[93] 	= 0.009000323381920676445256249699220111072873354216939536791473453610258872243156099763;

	nodes[94] 	= 0.93745418745856921093297861830238395331230865472539657199361200063100502677909901633793370029718350481347955398806141314011688127;
	weights[94] 	= 0.009000323381920676445256249699220111072873354216939536791473453610258872243156099763;

	nodes[95] 	= -0.94614014839580708214541812479296496258506225682442495959001248809329282118846341147009857159980543688775922977855877523068161111;
	weights[95] 	= 0.008370630623866433696112381592917672104125458775013047526827234585717210587975090346;

	nodes[96] 	= 0.94614014839580708214541812479296496258506225682442495959001248809329282118846341147009857159980543688775922977855877523068161111;
	weights[96] 	= 0.008370630623866433696112381592917672104125458775013047526827234585717210587975090346;

	nodes[97] 	= -0.95419358332849464229123705949892065932103961929897270896472144645588451652263204466675169404715406996801748770250405697594959976;
	weights[97] 	= 0.00773534185732331010871080578629788802489842368432275071277545393773656643568794089;

	nodes[98] 	= 0.95419358332849464229123705949892065932103961929897270896472144645588451652263204466675169404715406996801748770250405697594959976;
	weights[98] 	= 0.00773534185732331010871080578629788802489842368432275071277545393773656643568794089;

	nodes[99] 	= -0.96160910831236566117953630945210139253208932822360605554529299314494112125101746126015596892163024463741920767633950785682322792;
	weights[99] 	= 0.0070948818121528804229051969010918232682450051191104409830532146827592508679536232;

	nodes[100] 	= 0.96160910831236566117953630945210139253208932822360605554529299314494112125101746126015596892163024463741920767633950785682322792;
	weights[100] 	= 0.0070948818121528804229051969010918232682450051191104409830532146827592508679536232;

	nodes[101] 	= -0.96838176589087154641874723667433423656158122445182465822291538616677961574609762849613197037527519469163751073335591379583249699;
	weights[101] 	= 0.006449678687624708682162222944026377141538863838287959850551782287934207754040090207;

	nodes[102] 	= 0.96838176589087154641874723667433423656158122445182465822291538616677961574609762849613197037527519469163751073335591379583249699;
	weights[102] 	= 0.006449678687624708682162222944026377141538863838287959850551782287934207754040090207;

	nodes[103] 	= -0.97450702842638081136858222288170824844222667957136235565685760981189382602835662690993362866510988972386406392290454955491818484;
	weights[103] 	= 0.00580016387691646287680296747561763420249556948659225606934532240930759636673173752;

	nodes[104] 	= 0.97450702842638081136858222288170824844222667957136235565685760981189382602835662690993362866510988972386406392290454955491818484;
	weights[104] 	= 0.00580016387691646287680296747561763420249556948659225606934532240930759636673173752;

	nodes[105] 	= -0.97998080116008169587207095201564378094025979121673487563975889470094659431693810011375726291279703797392686815310604259514945038;
	weights[105] 	= 0.00514677170180119313410834255670942216234856594611614642815102247702940365710664009;

	nodes[106] 	= 0.97998080116008169587207095201564378094025979121673487563975889470094659431693810011375726291279703797392686815310604259514945038;
	weights[106] 	= 0.00514677170180119313410834255670942216234856594611614642815102247702940365710664009;

	nodes[107] 	= -0.98479942501852155377179793487001742678770407177311257759363889726396676740192151149790601267105478880978728462561422977303457339;
	weights[107] 	= 0.00448993917609385059776669077913874973664709681363973295301832111769813779966998437;

	nodes[108] 	= 0.98479942501852155377179793487001742678770407177311257759363889726396676740192151149790601267105478880978728462561422977303457339;
	weights[108] 	= 0.00448993917609385059776669077913874973664709681363973295301832111769813779966998437;

	nodes[109] 	= -0.98895967921783423958584468292462799496303767911544155670283116574174760490558836896306669705715519643094151828160303773063306702;
	weights[109] 	= 0.00383010585264893346208809046902177172785742830950944863211814190823270428279253976;

	nodes[110] 	= 0.98895967921783423958584468292462799496303767911544155670283116574174760490558836896306669705715519643094151828160303773063306702;
	weights[110] 	= 0.00383010585264893346208809046902177172785742830950944863211814190823270428279253976;

	nodes[111] 	= -0.99245878382310762083454240189744057483395986145186302020130005324957923002800061775272785122155265482060999901878860413362964638;
	weights[111] 	= 0.003167713941363928881738527321916616386067434598280017901519334095369218957577241;

	nodes[112] 	= 0.99245878382310762083454240189744057483395986145186302020130005324957923002800061775272785122155265482060999901878860413362964638;
	weights[112] 	= 0.003167713941363928881738527321916616386067434598280017901519334095369218957577241;

	nodes[113] 	= -0.9952944028278845178595657720491007283788960664275158686762370770702972820274234184889831443213208763041239559994517033336061028;
	weights[113] 	= 0.002503209476498750871851888915856505845418938863123337224311708540282556363551330337;

	nodes[114] 	= 0.9952944028278845178595657720491007283788960664275158686762370770702972820274234184889831443213208763041239559994517033336061028;
	weights[114] 	= 0.002503209476498750871851888915856505845418938863123337224311708540282556363551330337;

	nodes[115] 	= -0.99746465030938901793641629368420479848983177795125101093054198731671403605492589255970196419837973849014644025803576079272529942;
	weights[115] 	= 0.001837048780102251895004528463594651045444416371239343621918110856777514972285390935;

	nodes[116] 	= 0.99746465030938901793641629368420479848983177795125101093054198731671403605492589255970196419837973849014644025803576079272529942;
	weights[116] 	= 0.001837048780102251895004528463594651045444416371239343621918110856777514972285390935;

	nodes[117] 	= -0.99896811633275009779764429563243073827992716157238509649894630492058116182737760558157529370739824476711411595907105645161733456;
	weights[117] 	= 0.00116974583104372321806851318389901137275962096813128854666956554788012692164860939;

	nodes[118] 	= 0.99896811633275009779764429563243073827992716157238509649894630492058116182737760558157529370739824476711411595907105645161733456;
	weights[118] 	= 0.00116974583104372321806851318389901137275962096813128854666956554788012692164860939;

	nodes[119] 	= -0.9998041299760687506622614836428878797466999946233091119861865710994988035912739163327548381619447661209247050082560410968452107;
	weights[119] 	= 0.0005026493233937661674521247011254419462745477161213633089526833641655728781950926345;

	nodes[120] 	= 0.9998041299760687506622614836428878797466999946233091119861865710994988035912739163327548381619447661209247050082560410968452107;
	weights[120] 	= 0.0005026493233937661674521247011254419462745477161213633089526833641655728781950926345;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_121_hpp__)*/