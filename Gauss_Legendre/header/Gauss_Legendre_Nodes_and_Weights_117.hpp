//
//        Gauss_Legendre_Nodes_and_Weights_117.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 117.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_117_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_117_hpp__

void Gauss_Legendre_Nodes_and_Weights_117(long double*& nodes, long double*& weights) {
	nodes	= new long double[117];
	weights	= new long double[117];

	nodes[0] 	= 0;
	weights[0] 	= 0.02673671669304539121353906105888302540975938304004051212603071396700908465816699822664569275008279255380260991753687619525220367;

	nodes[1] 	= -0.026733531283244978018148845911688541071831198808746910142004276813534871705234418113612761924272518710316245259354189828853421469;
	weights[1] 	= 0.0267271606913583309916102897176482201724781987922270456434454918806754040781574223084868398690839809797324567800808684739760989;

	nodes[2] 	= 0.026733531283244978018148845911688541071831198808746910142004276813534871705234418113612761924272518710316245259354189828853421469;
	weights[2] 	= 0.0267271606913583309916102897176482201724781987922270456434454918806754040781574223084868398690839809797324567800808684739760989;

	nodes[3] 	= -0.053447952840118102969944339070106444482264353661255637806905563298757532725632272620975307912809546666305201993082323443500899272;
	weights[3] 	= 0.026698499517141177357262985399228278956358708667152760988454645736366935859916032689901689286996901807536972574046606205437313;

	nodes[4] 	= 0.053447952840118102969944339070106444482264353661255637806905563298757532725632272620975307912809546666305201993082323443500899272;
	weights[4] 	= 0.026698499517141177357262985399228278956358708667152760988454645736366935859916032689901689286996901807536972574046606205437313;

	nodes[5] 	= -0.080124168604307924579661092268689169756746838773049957367218857115191627426844902186955690394201382890660595580453870249252979648;
	weights[5] 	= 0.0266507536580431739456736212961645789984076991668507294235378135899422095664680066454153072543203590539245974021439299881039;

	nodes[6] 	= 0.080124168604307924579661092268689169756746838773049957367218857115191627426844902186955690394201382890660595580453870249252979648;
	weights[6] 	= 0.0266507536580431739456736212961645789984076991668507294235378135899422095664680066454153072543203590539245974021439299881039;

	nodes[7] 	= -0.10674310981985928673942516888382414457575579036253312599233843525332170877070674579936392284905245330437131309382345754817428974;
	weights[7] 	= 0.026583957243873759049878081212551744201423725174636244765661028433674268930014048058305871165413204794096116059404416905477;

	nodes[8] 	= 0.10674310981985928673942516888382414457575579036253312599233843525332170877070674579936392284905245330437131309382345754817428974;
	weights[8] 	= 0.026583957243873759049878081212551744201423725174636244765661028433674268930014048058305871165413204794096116059404416905477;

	nodes[9] 	= -0.13328574867194717609190797190679162429827623417268237125762336157726570311983019828940079499916716133290090878299206852654502405;
	weights[9] 	= 0.0264981580222058279904274542498839612506713455486235831068682913381282023583962690202545445902330462390805109152441520025;

	nodes[10] 	= 0.13328574867194717609190797190679162429827623417268237125762336157726570311983019828940079499916716133290090878299206852654502405;
	weights[10] 	= 0.0264981580222058279904274542498839612506713455486235831068682913381282023583962690202545445902330462390805109152441520025;

	nodes[11] 	= -0.15973311188838495151784633538015974304423509118326835530086002131995269091315687480784787495082048672236913039521697744924624619;
	weights[11] 	= 0.026393417324244719498422087886300964513622262536607876713302027491596916370223041982686031366587567359132821149928117452;

	nodes[12] 	= 0.15973311188838495151784633538015974304423509118326835530086002131995269091315687480784787495082048672236913039521697744924624619;
	weights[12] 	= 0.026393417324244719498422087886300964513622262536607876713302027491596916370223041982686031366587567359132821149928117452;

	nodes[13] 	= -0.18606629430214429839212199262323115752248848927745362097364767310042914468111351297378881195588427970860174432247551693384165962;
	weights[13] 	= 0.0262698100209873242531717044537192649979278559282030392845549512393213995485394023486388007810242352875881571404159408;

	nodes[14] 	= 0.18606629430214429839212199262323115752248848927745362097364767310042914468111351297378881195588427970860174432247551693384165962;
	weights[14] 	= 0.0262698100209873242531717044537192649979278559282030392845549512393213995485394023486388007810242352875881571404159408;

	nodes[15] 	= -0.21226647236519212178359375084255667786672010002737006770172133936319826621800810323074839091743434059766749142999995766328476837;
	weights[15] 	= 0.026127424469702654739611397154774765943017511129636870627997979532425117536097140775075596726501399339183354861116378;

	nodes[16] 	= 0.21226647236519212178359375084255667786672010002737006770172133936319826621800810323074839091743434059766749142999995766328476837;
	weights[16] 	= 0.026127424469702654739611397154774765943017511129636870627997979532425117536097140775075596726501399339183354861116378;

	nodes[17] 	= -0.23831491760398439333472015945188274099232112192409243081215492046223284987765342440787263231081017897331517237718018931902574265;
	weights[17] 	= 0.02596636245077213424120648815262014775813863331634761788352778755464365486551125097648090018833947526522247147939063;

	nodes[18] 	= 0.23831491760398439333472015945188274099232112192409243081215492046223284987765342440787263231081017897331517237718018931902574265;
	weights[18] 	= 0.02596636245077213424120648815262014775813863331634761788352778755464365486551125097648090018833947526522247147939063;

	nodes[19] 	= -0.264193010006998672524245160517216643664034037600212734021017823807732139602587044691545813318616364287395808855651304722131763;
	weights[19] 	= 0.025786739094934754125245094060185688109120087205277665359212352814593723245445891940532076223863575018961593072083;

	nodes[20] 	= 0.264193010006998672524245160517216643664034037600212734021017823807732139602587044691545813318616364287395808855651304722131763;
	weights[20] 	= 0.025786739094934754125245094060185688109120087205277665359212352814593723245445891940532076223863575018961593072083;

	nodes[21] 	= -0.2898822513347356046211990498031927940023416664961400748370919635702646742016930755101944618574350061856472885916554149972929125;
	weights[21] 	= 0.02558868280098910769469870869479476321930338391064805749433465899789704108302476419558862089723359816807978257862;

	nodes[22] 	= 0.2898822513347356046211990498031927940023416664961400748370919635702646742016930755101944618574350061856472885916554149972929125;
	weights[22] 	= 0.02558868280098910769469870869479476321930338391064805749433465899789704108302476419558862089723359816807978257862;

	nodes[23] 	= -0.31536427834267512021072489603918861935976161073756214831597336681165321565690009568054591034731205615100297299337462658666557584;
	weights[23] 	= 0.0253723351440111308857577526731583205287333307541925147060683134487948452991036245866176533146042116331265294616;

	nodes[24] 	= 0.31536427834267512021072489603918861935976161073756214831597336681165321565690009568054591034731205615100297299337462658666557584;
	weights[24] 	= 0.0253723351440111308857577526731583205287333307541925147060683134487948452991036245866176533146042116331265294616;

	nodes[25] 	= -0.34062087590773528516768287655709339280938385954558035903550218133934618961926761830283567020568300696796785771205075347004116803;
	weights[25] 	= 0.025137850774153160124707326751278379075335185429151234548539291330175298870681256724075899186294764653343250282;

	nodes[26] 	= 0.34062087590773528516768287655709339280938385954558035903550218133934618961926761830283567020568300696796785771205075347004116803;
	weights[26] 	= 0.025137850774153160124707326751278379075335185429151234548539291330175298870681256724075899186294764653343250282;

	nodes[27] 	= -0.36563399004885073098770992678906471511539802701416131957870862828620406809377749029519454899731775066122891868661982189470317398;
	weights[27] 	= 0.0248853973060966508992227117126181767495498871462066168073082319708471492162324096793654014072371505619689704;

	nodes[28] 	= 0.36563399004885073098770992678906471511539802701416131957870862828620406809377749029519454899731775066122891868661982189470317398;
	weights[28] 	= 0.0248853973060966508992227117126181767495498871462066168073082319708471492162324096793654014072371505619689704;

	nodes[29] 	= -0.3903857408323632842695069966287681944847856848134668490677695581824625141973398938979272550125323923533391570042993505556533492;
	weights[29] 	= 0.024615155199237582265098522347395369166517510321580754898879888515739358799801770001033853783035365894508863;

	nodes[30] 	= 0.3903857408323632842695069966287681944847856848134668490677695581824625141973398938979272550125323923533391570042993505556533492;
	weights[30] 	= 0.024615155199237582265098522347395369166517510321580754898879888515739358799801770001033853783035365894508863;

	nodes[31] 	= -0.41485843515299975692894518985373925152809301502982883931005115511919740155450743874188047386403937879820816278273854750275230048;
	weights[31] 	= 0.0243273176286901978637751699776330571774984584473701847731977911395779497902634317403065213475571795347203;

	nodes[32] 	= 0.41485843515299975692894518985373925152809301502982883931005115511919740155450743874188047386403937879820816278273854750275230048;
	weights[32] 	= 0.0243273176286901978637751699776330571774984584473701847731977911395779497902634317403065213475571795347203;

	nodes[33] 	= -0.43903457938130079675720648591198159020343003941004922548282189888357393277649298722774380918642208201297687947556222556294034197;
	weights[33] 	= 0.0240220903472012983855394031280772032285600223896436438282511154867088503318840415097973236651850591988725;

	nodes[34] 	= 0.43903457938130079675720648591198159020343003941004922548282189888357393277649298722774380918642208201297687947556222556294034197;
	weights[34] 	= 0.0240220903472012983855394031280772032285600223896436438282511154867088503318840415097973236651850591988725;

	nodes[35] 	= -0.46289689186846016790004733121733617727798591029606666082664778483065783490260535970128712008831953994299922065080826871318882732;
	weights[35] 	= 0.023699691538073799155346870012758453939318660519324046364762352980312546905406974003947022326863403478697;

	nodes[36] 	= 0.46289689186846016790004733121733617727798591029606666082664778483065783490260535970128712008831953994299922065080826871318882732;
	weights[36] 	= 0.023699691538073799155346870012758453939318660519324046364762352980312546905406974003947022326863403478697;

	nodes[37] 	= -0.4864283152996357648334105107587312171965794783677612425552401262396560893057477787740988547038195032712674537190333252419707809;
	weights[37] 	= 0.02336035165920469509034564034168951978764450094885101675831435724202151548058493022142847673869400165852;

	nodes[38] 	= 0.4864283152996357648334105107587312171965794783677612425552401262396560893057477787740988547038195032712674537190333252419707809;
	weights[38] 	= 0.02336035165920469509034564034168951978764450094885101675831435724202151548058493022142847673869400165852;

	nodes[39] 	= -0.50961202888690198902939481305901318016234805121213833077929944038339992637347038047504513808318748524634624274753428822158248352;
	weights[39] 	= 0.0230043132783489292098221294557571141658134130833466389944293729864553285389476267237179952177406666519;

	nodes[40] 	= 0.50961202888690198902939481305901318016234805121213833077929944038339992637347038047504513808318748524634624274753428822158248352;
	weights[40] 	= 0.0230043132783489292098221294557571141658134130833466389944293729864553285389476267237179952177406666519;

	nodes[41] 	= -0.53243146039312775791001691339331373651664139393770620921382386125949837517881678748071840954454853822828491856805195663914470024;
	weights[41] 	= 0.022631830899726935796119243141377711501878926470023201277000777000738627131761967475357886403367435671;

	nodes[42] 	= 0.53243146039312775791001691339331373651664139393770620921382386125949837517881678748071840954454853822828491856805195663914470024;
	weights[42] 	= 0.022631830899726935796119243141377711501878926470023201277000777000738627131761967475357886403367435671;

	nodes[43] 	= -0.55487029797818528972172089737399958118626361418423560633341242704880279933598127967598725959553197493985651674446265851291444093;
	weights[43] 	= 0.02224317078209982095323527812581941022167380284639034221286789757503987038889603827942330901962271138;

	nodes[44] 	= 0.55487029797818528972172089737399958118626361418423560633341242704880279933598127967598725959553197493985651674446265851291444093;
	weights[44] 	= 0.02224317078209982095323527812581941022167380284639034221286789757503987038889603827942330901962271138;

	nodes[45] 	= -0.57691250185902183029262688719544374853164893427745884865468385775795941336486697487669807698685088616110938382665554275829491299;
	weights[45] 	= 0.0218386107484422475774370216956382218111956760630213118822623850458573699548820001551078755214663645;

	nodes[46] 	= 0.57691250185902183029262688719544374853164893427745884865468385775795941336486697487669807698685088616110938382665554275829491299;
	weights[46] 	= 0.0218386107484422475774370216956382218111956760630213118822623850458573699548820001551078755214663645;

	nodes[47] 	= -0.59854231577525956889548110126138943342272794063888173991209637128918238564304109386571343365129183752547874378757544128303909108;
	weights[47] 	= 0.021418439987349104713688109646319628335729850474664375235029824238347991106422701316761290532635862;

	nodes[48] 	= 0.59854231577525956889548110126138943342272794063888173991209637128918238564304109386571343365129183752547874378757544128303909108;
	weights[48] 	= 0.021418439987349104713688109646319628335729850474664375235029824238347991106422701316761290532635862;

	nodes[49] 	= -0.61974427825212803745633313150055090321135650999176061226162555631088331677443072697853242904536301529972159236696228615577003684;
	weights[49] 	= 0.02098295884631795923284023148938518197556139279527952816854957116242611559857452462172912930770656;

	nodes[50] 	= 0.61974427825212803745633313150055090321135650999176061226162555631088331677443072697853242904536301529972159236696228615577003684;
	weights[50] 	= 0.02098295884631795923284023148938518197556139279527952816854957116242611559857452462172912930770656;

	nodes[51] 	= -0.64050323365267820340615510245449676977582255826449361509075673022194448590491846802852153889252795258824220197527372165180870591;
	weights[51] 	= 0.0205324786170551073528833860141968493218799975444061511670772889691387738600446659814825259351755;

	nodes[52] 	= 0.64050323365267820340615510245449676977582255826449361509075673022194448590491846802852153889252795258824220197527372165180870591;
	weights[52] 	= 0.0205324786170551073528833860141968493218799975444061511670772889691387738600446659814825259351755;

	nodes[53] 	= -0.66080434301137815168315769919044991304402275900045664669462050694509199266482768849888861668903329082568792235283043502780846074;
	weights[53] 	= 0.020067321312958761799013111952084798457459011900003327689316466208310652191381250696077611265466;

	nodes[54] 	= 0.66080434301137815168315769919044991304402275900045664669462050694509199266482768849888861668903329082568792235283043502780846074;
	weights[54] 	= 0.020067321312958761799013111952084798457459011900003327689316466208310652191381250696077611265466;

	nodes[55] 	= -0.68063309464134660320987984283030012193688678770459846572160332005740068430474254916336798502452931249725902105917333567843852124;
	weights[55] 	= 0.01958781943893852500887922862005171111112918657006836536763902431325845769797981930575048495952;

	nodes[56] 	= 0.68063309464134660320987984283030012193688678770459846572160332005740068430474254916336798502452931249725902105917333567843852124;
	weights[56] 	= 0.01958781943893852500887922862005171111112918657006836536763902431325845769797981930575048495952;

	nodes[57] 	= -0.69997531450764243110392714172055489398533685647778288451628595660151319697267741035454555102060569356994040865421300649055449609;
	weights[57] 	= 0.019094315753735808257120255535503659133773437895322708093545923505853508117800078119281543228;

	nodes[58] 	= 0.69997531450764243110392714172055489398533685647778288451628595660151319697267741035454555102060569356994040865421300649055449609;
	weights[58] 	= 0.019094315753735808257120255535503659133773437895322708093545923505853508117800078119281543228;

	nodes[59] 	= -0.71881717635919570654968611437414518395561720760464264787112933785039392748997250425723907821298946241931378447343962784203664512;
	weights[59] 	= 0.0185871630249152606670547974297382691195184156830838791924275874254769775485816863257352044307;

	nodes[60] 	= 0.71881717635919570654968611437414518395561720760464264787112933785039392748997250425723907821298946241931378447343962784203664512;
	weights[60] 	= 0.0185871630249152606670547974297382691195184156830838791924275874254769775485816863257352044307;

	nodes[61] 	= -0.73714521161213852891604076948032424746501413983858142253406338515914130574164249061335115229764014867362189789952206088926116336;
	weights[61] 	= 0.018066723776702572434688514054517978090254851204497504997147959754910855401347932106299840101;

	nodes[62] 	= 0.73714521161213852891604076948032424746501413983858142253406338515914130574164249061335115229764014867362189789952206088926116336;
	weights[62] 	= 0.018066723776702572434688514054517978090254851204497504997147959754910855401347932106299840101;

	nodes[63] 	= -0.75494631897747186756233581469160951179003977388265230671158453660500005136055545791602238286331944944990736924229882045737778244;
	weights[63] 	= 0.017533370030849217683741195159547724640020165921271200457114381169955730465502712662554854;

	nodes[64] 	= 0.75494631897747186756233581469160951179003977388265230671158453660500005136055545791602238286331944944990736924229882045737778244;
	weights[64] 	= 0.017533370030849217683741195159547724640020165921271200457114381169955730465502712662554854;

	nodes[65] 	= -0.77220777382618777054484554799481930311714678412083868294357810011122432907290405399975607498845584547662268011100756466402006707;
	weights[65] 	= 0.01698748304070981305731364890660051742137180330231258768490269740958960990234041933418370321;

	nodes[66] 	= 0.77220777382618777054484554799481930311714678412083868294357810011122432907290405399975607498845584547662268011100756466402006707;
	weights[66] 	= 0.01698748304070981305731364890660051742137180330231258768490269740958960990234041933418370321;

	nodes[67] 	= -0.78891723728515449487604542608974201229280300988141849541190445387763700743620144966704862843749248398132183392421895290746456577;
	weights[67] 	= 0.016429453018722804193508226353446371108498073193908503165053062332450548340668782664787863;

	nodes[68] 	= 0.78891723728515449487604542608974201229280300988141849541190445387763700743620144966704862843749248398132183392421895290746456577;
	weights[68] 	= 0.016429453018722804193508226353446371108498073193908503165053062332450548340668782664787863;

	nodes[69] 	= -0.80506276505726532171196081374655737911610528533436143133625907841851112073176054312200676141277931116988495901873873942261044603;
	weights[69] 	= 0.015859678857490180463418220495970036441125486331244932124937667940683200295813907600252173;

	nodes[70] 	= 0.80506276505726532171196081374655737911610528533436143133625907841851112073176054312200676141277931116988495901873873942261044603;
	weights[70] 	= 0.015859678857490180463418220495970036441125486331244932124937667940683200295813907600252173;

	nodes[71] 	= -0.82063281595955001059281835084945987770364577230295873720536042273547481945399203318273132259994555201318162621833284280062862288;
	weights[71] 	= 0.015278567844656903700411060486871566262201741142219529083543594178815184000887742234364584;

	nodes[72] 	= 0.82063281595955001059281835084945987770364577230295873720536042273547481945399203318273132259994555201318162621833284280062862288;
	weights[72] 	= 0.015278567844656903700411060486871566262201741142219529083543594178815184000887742234364584;

	nodes[73] 	= -0.83561626017315105108865226107199167011927658686695257344226430987847012677112711881599018142749168512420991593088395682435180329;
	weights[73] 	= 0.01468653537179579420301072817322903245604470582620855238636050952399964133324299385594133;

	nodes[74] 	= 0.83561626017315105108865226107199167011927658686695257344226430987847012677112711881599018142749168512420991593088395682435180329;
	weights[74] 	= 0.01468653537179579420301072817322903245604470582620855238636050952399964133324299385594133;

	nodes[75] 	= -0.85000238719927521778072010737843792951137814687332737577146986858505736881273707170845588527649532486239146874706760445840662568;
	weights[75] 	= 0.01408400463750887342547955658849831337647553882656751921096728367343212419374671902009678;

	nodes[76] 	= 0.85000238719927521778072010737843792951137814687332737577146986858505736881273707170845588527649532486239146874706760445840662568;
	weights[76] 	= 0.01408400463750887342547955658849831337647553882656751921096728367343212419374671902009678;

	nodes[77] 	= -0.86378091351544472211697290484745775873263399806774650388198703020776005679894471286415922054639783839411593648868540728807535778;
	weights[77] 	= 0.0134714063449618330428614501163614361510010079513879904917952389558537985211831809760911;

	nodes[78] 	= 0.86378091351544472211697290484745775873263399806774650388198703020776005679894471286415922054639783839411593648868540728807535778;
	weights[78] 	= 0.0134714063449618330428614501163614361510010079513879904917952389558537985211831809760911;

	nodes[79] 	= -0.87694198992659206620377032049371417459063450992883773867590551639454282552832764244585999785743051604025094929608727590764221678;
	weights[79] 	= 0.0128491783940747588389866137044523865573411193934126649721324887119460336796448559051483;

	nodes[80] 	= 0.87694198992659206620377032049371417459063450992883773867590551639454282552832764244585999785743051604025094929608727590764221678;
	weights[80] 	= 0.0128491783940747588389866137044523865573411193934126649721324887119460336796448559051483;

	nodes[81] 	= -0.88947620860576962751387931622020482020594459031973016201486511994830201667642790353346576087645767284186931181474898354883049214;
	weights[81] 	= 0.012217765568600149492053058540038066326373802862105665785199712452174437114053801486221;

	nodes[82] 	= 0.88947620860576962751387931622020482020594459031973016201486511994830201667642790353346576087645767284186931181474898354883049214;
	weights[82] 	= 0.012217765568600149492053058540038066326373802862105665785199712452174437114053801486221;

	nodes[83] 	= -0.90137460981948103598401417319364472460318633927011076123749691007022657605874171306936835450080102098044902322798497725497185685;
	weights[83] 	= 0.011577619218329843936652638411356509307272236001824188100936441845881054199083929340498;

	nodes[84] 	= 0.90137460981948103598401417319364472460318633927011076123749691007022657605874171306936835450080102098044902322798497725497185685;
	weights[84] 	= 0.011577619218329843936652638411356509307272236001824188100936441845881054199083929340498;

	nodes[85] 	= -0.91262868833289021982868163928206221695484940111703282938348376255995963502518978633672181680420039375064435336748395636496054095;
	weights[85] 	= 0.010929196936687970637741532065327572697521520605317723357047600450100234136575207388585;

	nodes[86] 	= 0.91262868833289021982868163928206221695484940111703282938348376255995963502518978633672181680420039375064435336748395636496054095;
	weights[86] 	= 0.010929196936687970637741532065327572697521520605317723357047600450100234136575207388585;

	nodes[87] 	= -0.92323039949043246386813053176913601801431986904087845831113302962281644564567606018994382245733124432944667624009222485395279773;
	weights[87] 	= 0.01027296223399183519141225561328765787219832032114593156792482321014717691934811562978;

	nodes[88] 	= 0.92323039949043246386813053176913601801431986904087845831113302962281644564567606018994382245733124432944667624009222485395279773;
	weights[88] 	= 0.01027296223399183519141225561328765787219832032114593156792482321014717691934811562978;

	nodes[89] 	= -0.93317216496765311704159986965619601793374058917687107554417054555506985705699308486918627856520820874784406928223414903048338522;
	weights[89] 	= 0.00960938420670554176521769402390911590382287778641751451406558513822966139080556982557;

	nodes[90] 	= 0.93317216496765311704159986965619601793374058917687107554417054555506985705699308486918627856520820874784406928223414903048338522;
	weights[90] 	= 0.00960938420670554176521769402390911590382287778641751451406558513822966139080556982557;

	nodes[91] 	= -0.94244687819045979086799641412450811418794100031622288079024985678335513487040095058336724232331239808596037116641845863180232739;
	weights[91] 	= 0.00893893720309040439381107814659312055568710212604846926112273836093719119686027092544;

	nodes[92] 	= 0.94244687819045979086799641412450811418794100031622288079024985678335513487040095058336724232331239808596037116641845863180232739;
	weights[92] 	= 0.00893893720309040439381107814659312055568710212604846926112273836093719119686027092544;

	nodes[93] 	= -0.95104790941844672993414291890604688901578574642334760641647139122097384467587398637488063436717121818302003505747233786764950125;
	weights[93] 	= 0.0082621004858118273770346439301521231745422301875969439169739389744690171200286310271;

	nodes[94] 	= 0.95104790941844672993414291890604688901578574642334760641647139122097384467587398637488063436717121818302003505747233786764950125;
	weights[94] 	= 0.0082621004858118273770346439301521231745422301875969439169739389744690171200286310271;

	nodes[95] 	= -0.95896911048965135923228763999402813035248140865929325035149410484097940097486257363484245979846264851738138944732725738309020707;
	weights[95] 	= 0.0075793578923863061170860499987786156507556783474056702055556641390949403666159677749;

	nodes[96] 	= 0.95896911048965135923228763999402813035248140865929325035149410484097940097486257363484245979846264851738138944732725738309020707;
	weights[96] 	= 0.0075793578923863061170860499987786156507556783474056702055556641390949403666159677749;

	nodes[97] 	= -0.96620481922529647321872665446453364728791877579511648115589240080658301583927752140449105843703330259063615817556531742543471124;
	weights[97] 	= 0.0068911974950691996290601361759371477358599233816183802396271474900753454105514667731;

	nodes[98] 	= 0.96620481922529647321872665446453364728791877579511648115589240080658301583927752140449105843703330259063615817556531742543471124;
	weights[98] 	= 0.0068911974950691996290601361759371477358599233816183802396271474900753454105514667731;

	nodes[99] 	= -0.97274986349539622313453419177246745376858365061560103893169765373801206705117656158973844890689922855667578157552843258856643725;
	weights[99] 	= 0.0061981112634822835213838436824951787125126921834165632183539012027310274408199905672;

	nodes[100] 	= 0.97274986349539622313453419177246745376858365061560103893169765373801206705117656158973844890689922855667578157552843258856643725;
	weights[100] 	= 0.0061981112634822835213838436824951787125126921834165632183539012027310274408199905672;

	nodes[101] 	= -0.9785995649512291393125280913916128216171739968756102752485594411948965713961444471720464947344947081550077725694651294112307311;
	weights[101] 	= 0.0055005947376321869034194293018992624506634652893676391007346181928296620337346553659;

	nodes[102] 	= 0.9785995649512291393125280913916128216171739968756102752485594411948965713961444471720464947344947081550077725694651294112307311;
	weights[102] 	= 0.0055005947376321869034194293018992624506634652893676391007346181928296620337346553659;

	nodes[103] 	= -0.98374974244337450676139946016415820157510610933785047612971547974556858841839626749209064341295705118500340479903088844501516144;
	weights[103] 	= 0.0047991467312230520469596592927727136819434542702714153755037401860011850991540902949;

	nodes[104] 	= 0.98374974244337450676139946016415820157510610933785047612971547974556858841839626749209064341295705118500340479903088844501516144;
	weights[104] 	= 0.0047991467312230520469596592927727136819434542702714153755037401860011850991540902949;

	nodes[105] 	= -0.98819671517946472431321978981676205008823672134580212794947810070690296690199553388319673001446934960856658854395975312173285994;
	weights[105] 	= 0.0040942691238950557513422948437549475643233103910781116434817633712987998781026850548;

	nodes[106] 	= 0.98819671517946472431321978981676205008823672134580212794947810070690296690199553388319673001446934960856658854395975312173285994;
	weights[106] 	= 0.0040942691238950557513422948437549475643233103910781116434817633712987998781026850548;

	nodes[107] 	= -0.99193730578962082059471083306313247349730396892687986872124703140838878562229655156768527444610464291944591406358146159348513948;
	weights[107] 	= 0.0033864669428699211764172631237380454586696510968641619163308351517602259101844616987;

	nodes[108] 	= 0.99193730578962082059471083306313247349730396892687986872124703140838878562229655156768527444610464291944591406358146159348513948;
	weights[108] 	= 0.0033864669428699211764172631237380454586696510968641619163308351517602259101844616987;

	nodes[109] 	= -0.99496884390334613371613757714243168327000501288969375245185940501564009552726559966412271003381294852146749891272357484766019134;
	weights[109] 	= 0.0026762495662545579669254092711411108589733673178540792783634130828170306967885748382;

	nodes[110] 	= 0.99496884390334613371613757714243168327000501288969375245185940501564009552726559966412271003381294852146749891272357484766019134;
	weights[110] 	= 0.0026762495662545579669254092711411108589733673178540792783634130828170306967885748382;

	nodes[111] 	= -0.99728917297013835786287401960597065536097762552655687382575040105290639499536000391182161178584076487286813738955771569923181387;
	weights[111] 	= 0.0019641375889115190833635874263021991346083405595724632740080053397423228077083841986;

	nodes[112] 	= 0.99728917297013835786287401960597065536097762552655687382575040105290639499536000391182161178584076487286813738955771569923181387;
	weights[112] 	= 0.0019641375889115190833635874263021991346083405595724632740080053397423228077083841986;

	nodes[113] 	= -0.9988966781513892815203906094038242454309495646647993512111064005099649056707526683496788666152407520778527842478719449354456751;
	weights[113] 	= 0.00125071342622557003500637336449109031009217116426229309188689385965411052275203345768;

	nodes[114] 	= 0.9988966781513892815203906094038242454309495646647993512111064005099649056707526683496788666152407520778527842478719449354456751;
	weights[114] 	= 0.00125071342622557003500637336449109031009217116426229309188689385965411052275203345768;

	nodes[115] 	= -0.99979056770707531175105685826251809777498011508535701933648367366879709784971400515468969498004477437138911601116088388601497206;
	weights[115] 	= 0.000537452134027389199830205890735234465725592836640212259548447762569249022345350471344;

	nodes[116] 	= 0.99979056770707531175105685826251809777498011508535701933648367366879709784971400515468969498004477437138911601116088388601497206;
	weights[116] 	= 0.000537452134027389199830205890735234465725592836640212259548447762569249022345350471344;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_117_hpp__)*/