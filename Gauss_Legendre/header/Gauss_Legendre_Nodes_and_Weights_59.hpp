//
//        Gauss_Legendre_Nodes_and_Weights_59.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 59.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_59_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_59_hpp__

void Gauss_Legendre_Nodes_and_Weights_59(long double*& nodes, long double*& weights) {
	nodes	= new long double[59];
	weights	= new long double[59];

	nodes[0] 	= 0;
	weights[0] 	= 0.052798012621990421415512332430855267299015674402671168439458663063236618206517002337545380009058922814078276727724404628432129387;

	nodes[1] 	= -0.052773484088310003951680328603338537824700769509178105314022426004846225114073946668485606302749218177855656375602674650049845673;
	weights[1] 	= 0.0527244338591279319613042488706125028718839375035442669792246394813498131794767671877846873796404368243789948825075646937646862;

	nodes[2] 	= 0.052773484088310003951680328603338537824700769509178105314022426004846225114073946668485606302749218177855656375602674650049845673;
	weights[2] 	= 0.0527244338591279319613042488706125028718839375035442669792246394813498131794767671877846873796404368243789948825075646937646862;

	nodes[3] 	= -0.10539987901634414383691438776186928705392541093682229170346197180707444079289842862907917951816864175027146876576290164827320291;
	weights[3] 	= 0.05250390264782873905094132201428846536078805848590753052765879020086029306340890924264966415881736100728741345778268267184923;

	nodes[4] 	= 0.10539987901634414383691438776186928705392541093682229170346197180707444079289842862907917951816864175027146876576290164827320291;
	weights[4] 	= 0.05250390264782873905094132201428846536078805848590753052765879020086029306340890924264966415881736100728741345778268267184923;

	nodes[5] 	= -0.15773250558785796811521785627155430412417462420270318836895230218733951692529257313108574407320230286517403689764069556548894847;
	weights[5] 	= 0.0521370336483753913839872083078182338745975798794849497600211734635984637355653728685604949570164529340364136575744163894351;

	nodes[6] 	= 0.15773250558785796811521785627155430412417462420270318836895230218733951692529257313108574407320230286517403689764069556548894847;
	weights[6] 	= 0.0521370336483753913839872083078182338745975798794849497600211734635984637355653728685604949570164529340364136575744163894351;

	nodes[7] 	= -0.209625503392036544923366790631491096332050474314493174631143039159435271428415058394745724202431556332460116172607154201001864;
	weights[7] 	= 0.05162484939089148214643993977342280859376433774926873706711294734947172578902326004026503214872324248076477705250358397347;

	nodes[8] 	= 0.209625503392036544923366790631491096332050474314493174631143039159435271428415058394745724202431556332460116172607154201001864;
	weights[8] 	= 0.05162484939089148214643993977342280859376433774926873706711294734947172578902326004026503214872324248076477705250358397347;

	nodes[9] 	= -0.26093423734281171161061626741427838000354448343313036164401445506841760022980771639765430559566076557283336584747301269652843673;
	weights[9] 	= 0.050968777425393916850247968993681010098309609785211989260210323318438417200073952300869052272724139624755403536678473482;

	nodes[10] 	= 0.26093423734281171161061626741427838000354448343313036164401445506841760022980771639765430559566076557283336584747301269652843673;
	weights[10] 	= 0.050968777425393916850247968993681010098309609785211989260210323318438417200073952300869052272724139624755403536678473482;

	nodes[11] 	= -0.31151570080301370031836014910574975012565923760298034192656503395147593252233578043625240531304035104210437103174889070548803829;
	weights[11] 	= 0.050170646342996902810720430442165682143844105715868295286590235980825866425210117773639853303313444933529908249840740913;

	nodes[12] 	= 0.31151570080301370031836014910574975012565923760298034192656503395147593252233578043625240531304035104210437103174889070548803829;
	weights[12] 	= 0.050170646342996902810720430442165682143844105715868295286590235980825866425210117773639853303313444933529908249840740913;

	nodes[13] 	= -0.36122891416979480999231245233404895795341396017483940421597055235592426544737623040584387079474794242451264612696446131415608316;
	weights[13] 	= 0.0492326806793619857796936200150241883828630358705233272719000848569007817023499564278664940150736123263902871192607027;

	nodes[14] 	= 0.36122891416979480999231245233404895795341396017483940421597055235592426544737623040584387079474794242451264612696446131415608316;
	weights[14] 	= 0.0492326806793619857796936200150241883828630358705233272719000848569007817023499564278664940150736123263902871192607027;

	nodes[15] 	= -0.40993531781041896672282369375587912101472146267823341721410421591667652970389309309287211902265682640642101492488311351222755179;
	weights[15] 	= 0.048157494714606440388146829285935783960464218721007911107878044179392578795392697065074691838974927591446833148626031;

	nodes[16] 	= 0.40993531781041896672282369375587912101472146267823341721410421591667652970389309309287211902265682640642101492488311351222755179;
	weights[16] 	= 0.048157494714606440388146829285935783960464218721007911107878044179392578795392697065074691838974927591446833148626031;

	nodes[17] 	= -0.45749915825326669022621526043496150817642577591233421790258669715484442561373842645425210054288815411305397458931908060059851279;
	weights[17] 	= 0.04694808518696201919315973648292895223854591747457069802697773745029242675018521796800388770265759224065045013911326;

	nodes[18] 	= 0.45749915825326669022621526043496150817642577591233421790258669715484442561373842645425210054288815411305397458931908060059851279;
	weights[18] 	= 0.04694808518696201919315973648292895223854591747457069802697773745029242675018521796800388770265759224065045013911326;

	nodes[19] 	= -0.5037878665577179787680872804573088921509806488978758588639789239726968563464239801270948613020358794156327401650126062823046899;
	weights[19] 	= 0.0456078229405097698318682131583742114179944597204615576470796017784119612714696579221078744263252599140010667214783;

	nodes[20] 	= 0.5037878665577179787680872804573088921509806488978758588639789239726968563464239801270948613020358794156327401650126062823046899;
	weights[20] 	= 0.0456078229405097698318682131583742114179944597204615576470796017784119612714696579221078744263252599140010667214783;

	nodes[21] 	= -0.54867242780839638437225630038700585744067331832400930164463123410650424238550764397468907746557769720420295623670483325586742283;
	weights[21] 	= 0.044140443530297380690798084733080968589186332668130717684777897100918453441133571979641477870699907666687429053427;

	nodes[22] 	= 0.54867242780839638437225630038700585744067331832400930164463123410650424238550764397468907746557769720420295623670483325586742283;
	weights[22] 	= 0.044140443530297380690798084733080968589186332668130717684777897100918453441133571979641477870699907666687429053427;

	nodes[23] 	= -0.59202774070403014446417615975653433980424816968069367591655332988010578332002037670800896591560803032286231548161395903204291955;
	weights[23] 	= 0.04255003681106763866730820048471312744572341334593283115326469575744861169203340021420533853124110541568541699038;

	nodes[24] 	= 0.59202774070403014446417615975653433980424816968069367591655332988010578332002037670800896591560803032286231548161395903204291955;
	weights[24] 	= 0.04255003681106763866730820048471312744572341334593283115326469575744861169203340021420533853124110541568541699038;

	nodes[25] 	= -0.63373296623885009751258093017500791255189837643896226290002703802918059946418054076329393057104307806348082626130811478794805606;
	weights[25] 	= 0.0408410355386867076602021080894693086860064759028936404917099547065168719718649204558805513120715173996214294928;

	nodes[26] 	= 0.63373296623885009751258093017500791255189837643896226290002703802918059946418054076329393057104307806348082626130811478794805606;
	weights[26] 	= 0.0408410355386867076602021080894693086860064759028936404917099547065168719718649204558805513120715173996214294928;

	nodes[27] 	= -0.67367186450493722702402721275525368441506427511554588645758193136912576046262218040305056050638585682119254431164194101815870117;
	weights[27] 	= 0.039018203016160009503030777211285513419091837939024416970522282596771494017865251813955323405292437119417938033;

	nodes[28] 	= 0.67367186450493722702402721275525368441506427511554588645758193136912576046262218040305056050638585682119254431164194101815870117;
	weights[28] 	= 0.039018203016160009503030777211285513419091837939024416970522282596771494017865251813955323405292437119417938033;

	nodes[29] 	= -0.71173311867719773159591572196590935391076245280231223404591653671354685046408630245744953727612882576137520889509574090218134894;
	weights[29] 	= 0.03708661981887092269183791703527735827894996394913449146838873374150925326316821538698986231394039812530988431;

	nodes[30] 	= 0.71173311867719773159591572196590935391076245280231223404591653671354685046408630245744953727612882576137520889509574090218134894;
	weights[30] 	= 0.03708661981887092269183791703527735827894996394913449146838873374150925326316821538698986231394039812530988431;

	nodes[31] 	= -0.74781064527864023188925757901321238792089493398551449101294474531843848566855688210646345640729759004301165211129216826148775108;
	weights[31] 	= 0.03505166963640010878371835896107825111672508118785725456908097468488728452779300332092302102882181744434378912;

	nodes[32] 	= 0.74781064527864023188925757901321238792089493398551449101294474531843848566855688210646345640729759004301165211129216826148775108;
	weights[32] 	= 0.03505166963640010878371835896107825111672508118785725456908097468488728452779300332092302102882181744434378912;

	nodes[33] 	= -0.78180388986236090563267881276748262802966695695039443066991025823597404530073385841806634834294589424801834267646511688155878863;
	weights[33] 	= 0.0329190242710452777575112643535988080802698765574078252815785786941967092434999992848501869788638824580868312;

	nodes[34] 	= 0.78180388986236090563267881276748262802966695695039443066991025823597404530073385841806634834294589424801834267646511688155878863;
	weights[34] 	= 0.0329190242710452777575112643535988080802698765574078252815785786941967092434999992848501869788638824580868312;

	nodes[35] 	= -0.81361810728821157143508977382120044741070406508964745370342391678308701494533759420815304361724962678644274059033823357247933212;
	weights[35] 	= 0.0306946278361116832397503281924808053595267480058283296204308827660806886053409730105750412736025393677618964;

	nodes[36] 	= 0.81361810728821157143508977382120044741070406508964745370342391678308701494533759420815304361724962678644274059033823357247933212;
	weights[36] 	= 0.0306946278361116832397503281924808053595267480058283296204308827660806886053409730105750412736025393677618964;

	nodes[37] 	= -0.84316462581687220147035095397223663847022596081723219257729891523807160930096680677293152081575378251804017230673322616543196001;
	weights[37] 	= 0.028384680200534797905152869335388498770314183763042335839215276318137463800245672625453399661359611650908209;

	nodes[38] 	= 0.84316462581687220147035095397223663847022596081723219257729891523807160930096680677293152081575378251804017230673322616543196001;
	weights[38] 	= 0.028384680200534797905152869335388498770314183763042335839215276318137463800245672625453399661359611650908209;

	nodes[39] 	= -0.8703610942928822609634262331041452012841869473961876577151171042007065672320200113896385728962599296172893872493568456118495228;
	weights[39] 	= 0.025995619731298500186650506801707932713984809731618023067400297543712513589463359643666600314309935499825212;

	nodes[40] 	= 0.8703610942928822609634262331041452012841869473961876577151171042007065672320200113896385728962599296172893872493568456118495228;
	weights[40] 	= 0.025995619731298500186650506801707932713984809731618023067400297543712513589463359643666600314309935499825212;

	nodes[41] 	= -0.8951317117434720853642968294624592750295371394099992765675393604269882843163776339385278730091382144492747598493605572358488632;
	weights[41] 	= 0.02353410539371336342527536007835770029878448503836891520253640093649900292792771717279952826260965674214929;

	nodes[42] 	= 0.8951317117434720853642968294624592750295371394099992765675393604269882843163776339385278730091382144492747598493605572358488632;
	weights[42] 	= 0.02353410539371336342527536007835770029878448503836891520253640093649900292792771717279952826260965674214929;

	nodes[43] 	= -0.91740743878815528135254148521524582687314349000380399347839368114293971940457012472273867863426792089518657664991914567444211278;
	weights[43] 	= 0.02100699828843718735046147321866926505068902778651109394073411038484583592820758446926123785832757987393271;

	nodes[44] 	= 0.91740743878815528135254148521524582687314349000380399347839368114293971940457012472273867863426792089518657664991914567444211278;
	weights[44] 	= 0.02100699828843718735046147321866926505068902778651109394073411038484583592820758446926123785832757987393271;

	nodes[45] 	= -0.93712619035345385940513847104328988491060212647114705992669222427885220727723268581995534457040274602390784920002640093907019142;
	weights[45] 	= 0.01842134275361002936061575105644531831052684871711224009635800424184109760338261315836926358104290927879493;

	nodes[46] 	= 0.93712619035345385940513847104328988491060212647114705992669222427885220727723268581995534457040274602390784920002640093907019142;
	weights[46] 	= 0.01842134275361002936061575105644531831052684871711224009635800424184109760338261315836926358104290927879493;

	nodes[47] 	= -0.95423300937695105586323311218564993707390813827454712563123155665016365533300400178621467571573183853262415031467926318558459717;
	weights[47] 	= 0.01578434731308146614732048039724917037307255386895795190627822188798140804125545783774434833314427866408063;

	nodes[48] 	= 0.95423300937695105586323311218564993707390813827454712563123155665016365533300400178621467571573183853262415031467926318558459717;
	weights[48] 	= 0.01578434731308146614732048039724917037307255386895795190627822188798140804125545783774434833314427866408063;

	nodes[49] 	= -0.96868022168178153135363333967256205766488944332981848563431229183027391585697100295372018778516596010211778269800965201063517081;
	weights[49] 	= 0.01310336630634519101831954648421696696556483923400709095569502566198996693026843492602050697663032090331955;

	nodes[50] 	= 0.96868022168178153135363333967256205766488944332981848563431229183027391585697100295372018778516596010211778269800965201063517081;
	weights[50] 	= 0.01310336630634519101831954648421696696556483923400709095569502566198996693026843492602050697663032090331955;

	nodes[51] 	= -0.98042757395671568844960798140326777546255785113970301059584553273597223625547868717203835694365855516151204339518113190326483065;
	weights[51] 	= 0.01038588550099586219379787441098304036744482914933800613387746267015635229528695016602988034720974311042452;

	nodes[52] 	= 0.98042757395671568844960798140326777546255785113970301059584553273597223625547868717203835694365855516151204339518113190326483065;
	weights[52] 	= 0.01038588550099586219379787441098304036744482914933800613387746267015635229528695016602988034720974311042452;

	nodes[53] 	= -0.9894423651337309317821839350227057934732552800232993425694400913632188206572269683527810930864910324098885842932155805424155276;
	weights[53] 	= 0.00763952945348757514270068297475436525755164120840651149662826727137997413069367995065550053814264057096104;

	nodes[54] 	= 0.9894423651337309317821839350227057934732552800232993425694400913632188206572269683527810930864910324098885842932155805424155276;
	weights[54] 	= 0.00763952945348757514270068297475436525755164120840651149662826727137997413069367995065550053814264057096104;

	nodes[55] 	= -0.99569964038324596468720182343344830766185577690859122700798419998589484778894477688792123342774007703999230197756350272130989869;
	weights[55] 	= 0.00487223916826528476858200113292406855604266062886634061255898083989777543490291107716220795531696058875005;

	nodes[56] 	= 0.99569964038324596468720182343344830766185577690859122700798419998589484778894477688792123342774007703999230197756350272130989869;
	weights[56] 	= 0.00487223916826528476858200113292406855604266062886634061255898083989777543490291107716220795531696058875005;

	nodes[57] 	= -0.99918335390929468375642401950467818497422597033002270855107230127165519023077437195308551340457309235073963643942276987324296923;
	weights[57] 	= 0.002095492284541223402700731488640059767981293210377136354581042604068605540251873540222301249576826835658556;

	nodes[58] 	= 0.99918335390929468375642401950467818497422597033002270855107230127165519023077437195308551340457309235073963643942276987324296923;
	weights[58] 	= 0.002095492284541223402700731488640059767981293210377136354581042604068605540251873540222301249576826835658556;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_59_hpp__)*/