//
//        Gauss_Laguerre_Nodes_and_Weights_93.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 93.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_93_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_93_hpp__

void Gauss_Laguerre_Nodes_and_Weights_93(long double*& nodes, long double*& weights) {
	nodes	= new long double[93];
	weights	= new long double[93];

	nodes[0] 	= 0.015463203482722711418963433531982363904869120494301769706305204464809731010055957680627301635452421650578010716831084694701822107;
	weights[0] 	= 0.039075197039129627656866568035711879604396352394605203086618560763463391763264832450347488357411266322731909175056041682322466;

	nodes[1] 	= 0.081479492190812411209685549092344559351147814690148025362796049426849192905056808298492169061750702021139379124404808019941043384;
	weights[1] 	= 0.0851587429383379459522429008954084184725028181370480421727742462943617558103508806942702053286834199996334715083459587765364;

	nodes[2] 	= 0.20026743083928331777182650182153645902124889029984966644606603676103805788879532943573658609086459267607227632851680773931861959;
	weights[2] 	= 0.11884455719211370177128695891703665509459030403971101676045764431598537635036283879662651099264360582796086419559657170551;

	nodes[3] 	= 0.3718869624930020564038513386091882696582021575634343454152599312738906264047331666235263499589642234331905358482701948047108135;
	weights[3] 	= 0.1365431883546693692637382171609365943926099399186467918576862614345700411265277130970005711392056372262103501643984300186;

	nodes[4] 	= 0.59638987147034640549703851467123343559017340688504917213547766097435017275643643810419552242469151431540363947939549824714807336;
	weights[4] 	= 0.138230568051916293444842556542752057297134636571136559201411284622779590911868104478002354296520363825023838344232690871;

	nodes[5] 	= 0.87384054584959383977833115083036298238708666675760314584822276657329960536063295201446238294340809185090230975149794299698641091;
	weights[5] 	= 0.12685205928045674838719816465658847937464576778522725706407630417826767295250233242011002349961083524443326124711206124;

	nodes[6] 	= 1.2043180217626263935346005036228673345859037220750758804199202998152451398790409340611171140902742461674055508777178653504175068;
	weights[6] 	= 0.1070693290711790346043354889228173968281486934145344823273582131935114094858922232460334954343846244263465261261477371;

	nodes[7] 	= 1.5879164694313337580835180477271682635232777586679842245281204817850624629071599663884347558613576752794725270124839738925177873;
	weights[7] 	= 0.083823561728348713858003441207035181983030492412540120080356357093719747219186430227905331555061713243831221690095472;

	nodes[8] 	= 2.0247454376871707973792496520649322971145187754741593042618833219478828118140186010089907040022631151233902833769456597200886507;
	weights[8] 	= 0.06119269301207609276188037432318215434077616939552561441444473598412935133415401156631387645318369529356574077875462;

	nodes[9] 	= 2.5149300593765402650798104177041345005115651532771543723664948768702835471332134636410646767055306288394095644079057493272382047;
	weights[9] 	= 0.0418016176037868931632595576180776245287794656130132147766247542613646504603516097640439728064262719991468468907034;

	nodes[10] 	= 3.0586112630340176836593047822665826606887617021163764237287130101434543280535084069223836574280854348351851837722814692755654358;
	weights[10] 	= 0.026785686637239253461664018395167266462552495680103688175565221104940666744532674179766634334770354196579263467957;

	nodes[11] 	= 3.6559460041555497236790660307160963824963260055134055627401976287359503562630300724974474318051697755728374928727884201453102054;
	weights[11] 	= 0.01612794495008599287637421766169703791179981176593376892585561872969291160849469892892076802432092159651168003968;

	nodes[12] 	= 4.3071075211312022402448669724621154695295968801141048743949750768066940156176971347589844842981163219803366521063941644057592403;
	weights[12] 	= 0.0091361720341782129286575840769423066903421297402255742011834121474003730242034513849271712265627632603690185079;

	nodes[13] 	= 5.0122856184157501207439358788181604597007244880863498178495592636939001670579760084636249602383923939655459990821169866205822216;
	weights[13] 	= 0.004873642658759463741389606422569322396949053830497492491254678999476890842843451151345688147350476263712510675;

	nodes[14] 	= 5.7716869787219027647861595387054799777608849182674994204469386446735310441495669082730410091550756473197438238093511143590342119;
	weights[14] 	= 0.00244982183887688769048003728101202029184575191598433178417773142507767541982218423075483224983073316068377128;

	nodes[15] 	= 6.5855355057944499352374828575988885131007498243067653960257231336363741133721490029971320437166748744980519433660330818597792116;
	weights[15] 	= 0.00116094674744964361013737540732489574161405762957376893788278920220343368043157940233150765988117163749018812;

	nodes[16] 	= 7.4540726993132384688070487623003530480020731055421342325596430003367319915904770161188459748299378396873283647541263350669996061;
	weights[16] 	= 0.0005188348427471846678037524375499232524603053093718314537416800462694825907375889956075903455564057774810335;

	nodes[17] 	= 8.3775580635566635296943163859131032492603316869471723481720368432066501218419019973183679152570923809858267604927138697951426438;
	weights[17] 	= 0.00021871388629744308709934210479262544345409115547685239810357169304276911816469998850397157453942396222676;

	nodes[18] 	= 9.3562695515894728360766463332898087948457840599452589392628825136359675478082707033645325655928283360831235783908700938637424916;
	weights[18] 	= 0.000086976883978845302771894407084948869364893932934289144064453996216598509611237986178153030927534516551525;

	nodes[19] 	= 10.390504046901206076488589862238856508609864188932232252582821313594522556375837950305072189593235154588319977832649940475283652;
	weights[19] 	= 0.00003263072727674121480115524114309717611895067636735472212175130644980377564168458541866309354638360504266;

	nodes[20] 	= 11.480577884607682651787384112136094266109828312541828948588650890245304420656745432397512614724459555437988737613867474970142725;
	weights[20] 	= 0.00001154863216444161552599428517561037785226026154460851800543738122414100283596762274384727317439782542752;

	nodes[21] 	= 12.626827414535559375763565419518500538320463196554102621314136366045012096926175346509032106694801063327979107688079422828090744;
	weights[21] 	= 3.855447282661678918290316763986053120420232143384499813148933404649594230044041570290986547148231227e-6;

	nodes[22] 	= 13.829609608739332973843104785355826685285504382304158197010232223997980189240924991232033722867921839974812487211086126216043504;
	weights[22] 	= 1.2139362292251574930841838907889244223894750491515199589672134677578077608939482248839491191927051726e-6;

	nodes[23] 	= 15.089302716252712761855909485003441449996276718811209710568133431940659988375674835093814574085196754768091439050258992966535657;
	weights[23] 	= 3.60420425294790887606068987751151348180787808027985847816172743423744184626279038732647709210605567e-7;

	nodes[24] 	= 16.406306968154268070365797227199645721733260106057498646221953031233747452689211249377332389224792235325045088659936779358901571;
	weights[24] 	= 1.00881510847881259209246661761343136154416801147611703929984959782218150509592447344085919297873267e-7;

	nodes[25] 	= 17.781045336333491446201053827956274614169083860073024597867721389107221146673225546458486274043199147022540271916841508706878326;
	weights[25] 	= 2.6612188897521193032179654376986503520652057519481437941313329351706641035623112598429793380124992e-8;

	nodes[26] 	= 19.213964349681282133940693388771828702755151634209612381078135785402959542247459596541303531219901550759806178280972736038505132;
	weights[26] 	= 6.614202180062238404974267101335428478451480166537636394082932480182314291377401982180703434315882e-9;

	nodes[27] 	= 20.70553497180226403447773277257297492642398309552014319848542125846013274279626984594048185679507457805227339200778519579684189;
	weights[27] 	= 1.54826993159435821719096819558814851056997573203028280868427349288124713230630427904379909119459e-9;

	nodes[28] 	= 22.256253544759823606399166236456872044495349006159621521214592481887074107323364769672934879159859084940313066752817185078697344;
	weights[28] 	= 3.41205995803861648541102370931150797296882892536499717701457358797448262890552404192072862643811e-10;

	nodes[29] 	= 23.866642803823471123064256747106186542890233889355193315343205997819841593361655782744989203915258553987688229372239362547770109;
	weights[29] 	= 7.076198190001420464687702790170962920384251304913486971377522511942870821070508364487240209962e-11;

	nodes[30] 	= 25.537252968698044803676812989250470624452678568579070899901644543162342325226672362142012852664901271262074595210498591747837765;
	weights[30] 	= 1.380363843269969733582377259281304768215544190223229174695213252823581065821642926848468821892e-11;

	nodes[31] 	= 27.268662917282228880461334787730887066408312233421762203790191174417204932769587944692666916539141799658095094892660047306446492;
	weights[31] 	= 2.5315038235488392540233577050999139753371197158812520991069774939761103616303891788906749415e-12;

	nodes[32] 	= 29.061481448637711016919693917669232386042315098122941930801225853945551069011712882543242113440348370210438781728086885929661589;
	weights[32] 	= 4.36234840041999763103741234036775072109532388581109722924413321386358870238379607980745091783e-13;

	nodes[33] 	= 30.916348642559131967537822133075818931457256680380955386005884884600952586195494629779427835583811117417907972609784170831052175;
	weights[33] 	= 7.059404884805777609901106655744520225310662731059450117079154659319761053350132468024817006e-14;

	nodes[34] 	= 32.833937323929260782426966028759500992393272195965683510050583346323528091588833265046454513758832246898374964659109805576153121;
	weights[34] 	= 1.0721477470853417727167246689636358516157715451830546680015906149157039489980124271491593083e-14;

	nodes[35] 	= 34.814954640935698441887028563390061604239723342477469532503308743956737553503160036772756734309111956401097751624503850320853657;
	weights[35] 	= 1.527200179663484703176705273535270359573489217208635579435186431504732290653245934785335623e-15;

	nodes[36] 	= 36.860143767228959839492413143797451306495959109476678353008083344320165122932838044780397726054704979500597976039158256528246426;
	weights[36] 	= 2.03887550200792806231224003102529829735997072402069936754130121973472622353780965897442077e-16;

	nodes[37] 	= 38.970285739233403656408809694485679930624443110178009804200667303407429238615213148985206840732925699935555308154886933037765622;
	weights[37] 	= 2.54929174253640886170442517252326957505956383581668936149336230254746194655049316503667256e-17;

	nodes[38] 	= 41.146201441101300840500098817062255974702937045095152981089439438885806601477674175406631873424813814267629914182404776334351656;
	weights[38] 	= 2.9829398791048995690034684298330483076503254730785277839341785474537181552209886546267225e-18;

	nodes[39] 	= 43.388753751248733218902753095802785034778395677854791215670507261328406978949197542877327656751842043038696660563049998430109153;
	weights[39] 	= 3.263684816790346942623271185691869108550615801703329841889413323577958434303411308713155e-19;

	nodes[40] 	= 45.698849866056245393306852045850383758432386175280916164144732575316845183022887911969062120747938914066975006390082224799182979;
	weights[40] 	= 3.336053442245955665997254036848972825985195826240084148057030831887811905172314257770495e-20;

	nodes[41] 	= 48.077443818188117607950390788262519145630386435127856049125906539619554838276312570621758248884989449627618112865408628135656765;
	weights[41] 	= 3.18287751782521430947447876127376129051263062884040363821731539028416919205490915883257e-21;

	nodes[42] 	= 50.525539209118221582307872802328223845580886450765131501926331483380247032077908912947658126384040871440130812079215754662499219;
	weights[42] 	= 2.83170306146811438301709837433032592788974050132480799741787746647628698765610857446694e-22;

	nodes[43] 	= 53.044192177890786895360813484683306652556511678493050678469508444713579702108586615390153765212224562966961358526699199199781192;
	weights[43] 	= 2.3467754222283337391710253233883968397463526690041509425518505281270511544963708172075e-23;

	nodes[44] 	= 55.634514630942235896824230754119862296268142454231096356286457632842212543868417966165681055004607164496083589051324835896084238;
	weights[44] 	= 1.8097630596821731080045777555028330476302775002961636487763460896414645809629576271932e-24;

	nodes[45] 	= 58.297677761026515480307368157969312490013036685520581550478980313980184245985289542780140017024661838706649197976465824550537468;
	weights[45] 	= 1.2971861613094278829672943545437033570552014263605597508387838299000776291955498609436e-25;

	nodes[46] 	= 61.034915886993936691565808364966063193921249835033461010459241407353580122486051449789244906648029434856425375334346029936166539;
	weights[46] 	= 8.631562820613147300273249803307423860265158710647904530479859529904303135174824012733e-27;

	nodes[47] 	= 63.847530650459825798529466435357689895326261404971055749570629005718963662084697134915811318767947512798355785043440052342864869;
	weights[47] 	= 5.32512251541951721833254425198628446640867212544541096982407932571403488811637168928e-28;

	nodes[48] 	= 66.73689561036949578057081018807626321407461885144311302670144006479834137709766261448491170942860831991847194659633943565696864;
	weights[48] 	= 3.04184960048729632217594483746228638473215338424753229520354079078070587576049669303e-29;

	nodes[49] 	= 69.70446128224728310530990076634842601021256814604168434099184638353377832872142196755003052890244664883548861421734146703225861;
	weights[49] 	= 1.60655301401970932406313674484305603622703216911519708926093159572885150513331521998e-30;

	nodes[50] 	= 72.751760675663869873994058442706370691368380589438691516654995116169161944590435554376833161178294912769159640654506142757900332;
	weights[50] 	= 7.8333360507354465833977717792599202181755024405021103369946922906248177408965332139e-32;

	nodes[51] 	= 75.880415391355673988437882972663884632974421570603693264699569246896902306990454098511547327470349486780794250611702746840099184;
	weights[51] 	= 3.5204596989024242050706429977538757561189876285845314855124765132037138683010355266e-33;

	nodes[52] 	= 79.092142348712554873525724304877274166955014931029969706962476120214536917156453407822554957690785910605168698203881058061253428;
	weights[52] 	= 1.4558544874428101920594518159425211869510297523555959606329475235009617104637055794e-34;

	nodes[53] 	= 82.388761225297877145514287913847598816711526775980006485781924396317593742975105562074937642123597073182000853771681894923142775;
	weights[53] 	= 5.529971806570534078646329173902804067988283669856071057938537181737320515274724256e-36;

	nodes[54] 	= 85.772202703026824386142479570918021103961673669743888632021446917571521251558347587124238436336429592914324962732277739285587273;
	weights[54] 	= 1.9256901510823166615138604182210699962451718079030653167258813286805921190173045962e-37;

	nodes[55] 	= 89.244517631037474279526378162517484344839722937901737857865694447686085496742657074821440350769883233643248566882507533333689165;
	weights[55] 	= 6.135197153380192897611963350236155545563020621676840899812460554199282128462924937e-39;

	nodes[56] 	= 92.807887233684250489100085700694867278372725790091773938635647467442748900820695887338884642277181141103274709065953824989369599;
	weights[56] 	= 1.784484809231636814347107431236870885567698620452306402119480050074161719210875913e-40;

	nodes[57] 	= 96.464634514141793368579150673652442840450500760787494582579071485725340329247368783234262991551574838528735260840481671822192468;
	weights[57] 	= 4.72760990662501368098454049439407971644466793471975983462425742936876608523241636e-42;

	nodes[58] 	= 100.21723703068268809198110842375428659896175820625311056267101457787876087467298524850783849319509635948058336815834572734533693;
	weights[58] 	= 1.138020915142072820151198934273018792010982128757119852470866215005526079725149341e-43;

	nodes[59] 	= 104.06834125486797113867106643267326115177350352360271019098180661411267841538994245542017529647564235141945556255833782319214407;
	weights[59] 	= 2.482567505981204391390254923340209092377718706137960378933000947586655582739392248e-45;

	nodes[60] 	= 108.02077876004787392650000555569219564477312265217956003623152665848583984318659767284733637330733044632636134396486160607351585;
	weights[60] 	= 4.89414167411096389157861828191110301304672221588963589962850618783001509616195096e-47;

	nodes[61] 	= 112.0775845364894848746530232196246863721870698074461177639897915739387628073689665177790038960001720314373005369353654923467473;
	weights[61] 	= 8.69303208325003692427690550598791667425981011296931700481151868183614849939171472e-49;

	nodes[62] 	= 116.24201778842895248646219966137555147495474777378443650413059852531506591990804988647489155177712850705491746910703895761980825;
	weights[62] 	= 1.386702179419987990606195571455287535627226677653402026315998464921664780492070958e-50;

	nodes[63] 	= 120.51758564138929892747492914521064993167135763287713541978533113658760640997282623287989287785052102153726671422699727004526316;
	weights[63] 	= 1.97971772420817326855255873151956098243581250262730718289028729850406373504354251e-52;

	nodes[64] 	= 124.90807027915516666321883705313935696314886631393220227724217462028735478953627119947985893764884497603471126388575375617569501;
	weights[64] 	= 2.52001969102800276401792559764811899669469052796157229970633296029609532211157458e-54;

	nodes[65] 	= 129.41756014408091226646595751274900772842197283760184944789175183665026167250852263823049597824190099538787238714206320623799492;
	weights[65] 	= 2.84856198268629922893953047444941053351190948093833075160586405668622255012834081e-56;

	nodes[66] 	= 134.05048597891989617926408475753376051177779635171629448749906724630877841835523944490445075221370989638183548531290058832585886;
	weights[66] 	= 2.84683019898655700969941784196556925192602302775434895908255343901915444821777726e-58;

	nodes[67] 	= 138.81166267253948356470644915056670287757246748616682151037610725098707401624547934929558822400641402304147072542468655780646962;
	weights[67] 	= 2.50345224996998069488046241560298467357379338979161819812328937075625009140484336e-60;

	nodes[68] 	= 143.70633810860083826381774217812448551615430737880863577597104293790368022812318663814872797761290508363751490590088797042859404;
	weights[68] 	= 1.927082475902066876667814976038084626501123190046605705747726907445969041240887985e-62;

	nodes[69] 	= 148.74025052328199507233817157255171381088302798131034226378465558077991031949820740096195812332279295850630775241216875310992374;
	weights[69] 	= 1.291144931211503443395065694955441856983002797253138426423689924719235173863912259e-64;

	nodes[70] 	= 153.91969628015999647967010588571908158485569091999300318005923559453781650325535205936343891355678355854387384349552550830035835;
	weights[70] 	= 7.48262303457489394186856140989346341321011183664998135954005380911025710771857526e-67;

	nodes[71] 	= 159.25161050240283884506613413238941971327194877206904551107250647409313498853399338808048213732630593366490224996605731186948684;
	weights[71] 	= 3.725227905533072141328089996640770283118046367526911267196965790866958635291029414e-69;

	nodes[72] 	= 164.74366371450078305864690814093625502007175323111902574306604519520058317563248798575878794361545328303506847261649058035337284;
	weights[72] 	= 1.581145761793673453674847418651607396327649793894933507074777315641765578339166613e-71;

	nodes[73] 	= 170.40437861058673677355343315321197327190308907350299412853299518228105398563604436746416014768247934466451863913706233797874593;
	weights[73] 	= 5.673421397639790371944196225888875952709518786271849141428247918238792654644275598e-74;

	nodes[74] 	= 176.24327239124691762997283960265701507188200915367174807090992188242345818598845815273148434644924932836179415046114663574397622;
	weights[74] 	= 1.7048231002144364707702224255416192019643599170769026710357796361518804498000296597e-76;

	nodes[75] 	= 182.27103195671160220485678773253637215991003084774578989812841002902841329268546223488726705036280077204726149173449285225219537;
	weights[75] 	= 4.2450217128074947035323123150130987523104058876364879919514678593048904987990927232e-79;

	nodes[76] 	= 188.49973185797965890549509869814622404458846545557864621642805106013660902106998220379605187411013986259197478760052800657688179;
	weights[76] 	= 8.6547965361718762971300079869138872557364056992398297975032014812896605172099293328e-82;

	nodes[77] 	= 194.94310867397833000977125536888623670063743942851340328509207353089172417248654737048336820782888341165021655408368104110161599;
	weights[77] 	= 1.42530483684398190056590734246943214675629163395187871979567727243614426032586395005e-84;

	nodes[78] 	= 201.61691101816834791050348827710922685912277855306461079947967811806954104661996460744086820047511792230415125323208495909555732;
	weights[78] 	= 1.86667286864886627619003988183556995046990769189261264175890255607113565298253939179e-87;

	nodes[79] 	= 208.53935269222651426115853383212282603374730076284901258147047903675173845974547694300091357715117076760306862417956660524738276;
	weights[79] 	= 1.909494291289656119306298240891632321838298023449670326931302202582222995452791290513e-90;

	nodes[80] 	= 215.73170930241485229839730754658952209596606382385829923253386237006952511217326034991996464877141064292527756954570637459802281;
	weights[80] 	= 1.493923320441460494790989615695104151763556337632263142427472400600422530373054950402e-93;

	nodes[81] 	= 223.21911890728285268546704441942818561326476110774199947224511118199224670785690105998334207835045783433084128547585305290900147;
	weights[81] 	= 8.720006132512117239008358147550665688386308453268887052573559073373177146488930750215e-97;

	nodes[82] 	= 231.03168034455810521252385913932207249734420112502660157164294680454060264273525450309211407275004859712974375615469404718133768;
	weights[82] 	= 3.6862385274105944974953660578061525396097515501308950785337092971308932941840433987069e-100;

	nodes[83] 	= 239.20599891434132762601437734308014295558443702424747102558843961575415777857725856856157557861934474409146563640830812237433089;
	weights[83] 	= 1.08855690448985165326560712762317281066457122926793334541282956637393133860518748171735e-103;

	nodes[84] 	= 247.78742810487138249007689648553528985238086970635261360176540655807279337197181663662425887055628952040102918518835920152255901;
	weights[84] 	= 2.147403029843755699411837375513519561944930591650556292509364612123572264678727607381414e-107;

	nodes[85] 	= 256.83343998483141263145336804886014563119564915706087339392772010190381855310690624216636381540705948010065423051003492329348552;
	weights[85] 	= 2.6742693050061331023618593328047321205362274997011107371651642523622380051346056424842211e-111;

	nodes[86] 	= 266.41891977687440424540567499448872919432106846229516535387447489024565287724134778903502066358055779262459468738949262598844757;
	weights[86] 	= 1.95325342430283193346450495989585449485884718250547125441504676359562493284857941618288006e-115;

	nodes[87] 	= 276.64495087552079456787804028300856408427614554898311977486611426992399183042875247362829068323108504739033143871463438713977263;
	weights[87] 	= 7.57690742017460352753651365406600870364812955365013495210275757322574927350401199530938974e-120;

	nodes[88] 	= 287.65445308212395100471772607185497453350581633459294814808734086129145776716271875666518659788529634713991646136876321496509789;
	weights[88] 	= 1.3571150882513265320131353258810756653090134077624956519530840656720256865715261253563418015e-124;

	nodes[89] 	= 299.66276570800570325489402816421022985524252657384363256122876310518304787883372158766559673685063910365325575024019329670108706;
	weights[89] 	= 9.0947290763458548206909564922757245532898491844358467038652899348151392724420180768829795102e-130;

	nodes[90] 	= 313.02598823511256541265885976355776348117295000478570893591490030966336271930025636671762267088828994216945293287500976083131298;
	weights[90] 	= 1.612647351343773641595028431105770997450586243489616050562243471547755496211649531309630859204e-135;

	nodes[91] 	= 328.42886486212921845848226989468929142148100278706160299985610910172039565743814768369626394557026805395883740135055593960726041;
	weights[91] 	= 3.90174364040814883961884994679184802712809955673704823577083543119630645502670400688615436465987e-142;

	nodes[92] 	= 347.64476588253291297944213714173782049092647146878329773135089130886337726019220909511808144024475611907203447077737228022497165;
	weights[92] 	= 2.3642235048885964839051826060123718943620357822387459977700136276382287536976734048734372656178336e-150;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_93_hpp__)*/