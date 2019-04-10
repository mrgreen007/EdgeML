/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT license.
 *
 * This file has ProtoNN weight matrices 
 * This file is autogenerated during training the model.
 * Please do not edit/modify..! 
 *
 */
namespace protoNNParam {

/* Gamma for gaussian kernel */
const float gamma = 0.001213;
/* Low Dimensional Projection Matrix */
const unsigned int featDim = 124;
const unsigned int ldDim = 10;

/*
* Projectino Matrix (W)
* d_cap x d flattened (dimension of 2D array)
* ldDim x featDim
*/
const  float ldProjectionMatrix[]  = {
    1.15711,3.91637,3.56443,-0.553326,-1.41949,0.560244,-0.0170852,0.275141,-0.0791636,-0.0903261,-0.072102,0.174361,-0.155652,-0.12881,-0.102549,-0.259271,-0.364692,0.179317,-0.161546,-0.0625418,0.874296,0.950903,1.01093,1.02281,1.24341,-1.02521,0.43935,-4.59871,0.386878,0.300929,-0.0149552,-0.0196523,0.0135593,0.420218,0.288151,1.01433,0.464269,0.0330118,0.494361,0.507459,0.284509,0.344288,-0.270794,-0.836469,-0.175416,0.324376,1.46517,-0.839215,-0.229149,-0.397275,-0.123104,-0.482977,-0.343936,-0.0466033,-0.108046,-0.45146,-0.496777,-0.225165,-0.0690763,-0.381938,0.976046,0.609833,0.888037,2.02558,-1.4483,0.175989,0.524771,0.172894,-0.515055,0.0688119,2.06014,0.984642,0.696206,0.917622,0.939053,0.463805,-0.111754,-0.158968,0.26223,-0.181596,0.00836409,-0.146651,0.079733,-1.22161,0.538818,-0.0475722,-1.02294,1.51891,2.34697,0.768787,2.40233,3.15351,-0.979278,-1.03105,-1.10585,-2.31637,1.8197,-0.137049,2.06012,0.60625,-0.478338,0.330412,-0.753328,0.959738,-0.852124,1.3385,1.14339,1.03899,-0.366307,1.3748,-0.512086,2.50639,0.355285,0.675681,0.700939,0.413897,1.0201,-0.627343,-0.506351,2.3177,-1.07126,0.663972,-1.20026,1.20214,
    1.83194,-0.986275,0.271643,-0.0236275,-1.5157,-0.857895,-2.03419,-1.03274,0.694382,0.70258,0.875977,-0.268149,1.07679,0.667229,0.833982,1.16984,1.2572,0.810672,0.959379,0.703778,0.182873,-1.92961,-1.29544,-0.605977,-0.704685,-4.07475,1.39232,1.43903,-0.494064,-0.187383,-0.632672,0.189864,-0.120483,-0.0571114,0.686621,0.742115,-0.211682,0.0773025,-0.0704597,-0.0710819,-0.194786,-1.01827,0.181936,0.00844172,-0.314331,-1.02737,-2.08966,-1.64406,0.345811,1.10545,1.13622,1.93272,1.65712,-0.616545,-0.614819,1.45617,2.34011,1.8985,1.36159,0.522075,-2.55503,-2.58619,-1.78912,0.405336,-1.27533,-0.362806,2.06788,1.35632,1.48839,-1.0454,-0.25909,-1.42481,-1.23098,-1.07721,-0.9318,-0.811023,0.259697,0.473354,-0.818706,-0.507978,0.0508645,1.52634,1.1007,1.70463,-0.0454132,1.08482,0.285371,1.34704,-0.169319,1.25655,0.980788,2.14344,-1.40421,-0.674365,-0.807557,-0.48015,1.64362,-1.04819,1.54318,0.197259,-0.894128,1.0203,0.553128,-1.76573,0.584976,-1.07504,-1.23817,-0.0904195,-0.263997,-1.0203,-0.128535,-0.525949,-1.19086,-1.84814,-1.29244,-2.71927,-1.31948,0.293234,0.152182,0.0537903,1.02953,1.33058,-0.724573,-0.612486,
    -2.7128,-4.62484,-1.588,1.87583,-0.924955,-2.12122,-2.05756,-1.10582,-2.03019,-0.29523,0.514105,1.52883,1.60984,2.53481,2.90579,2.40524,2.35114,0.608354,0.16011,-0.159271,-1.79813,-1.52216,-3.32398,-3.20653,-4.30688,-7.76667,-1.31304,5.49982,-0.644969,-0.598591,1.97229,2.55903,3.23191,2.4457,2.53052,2.4653,1.63051,0.592415,-0.891098,-1.60956,-0.42399,1.02512,-1.02584,-0.00865057,-2.05718,-2.71305,-0.972308,-0.372797,-1.03174,-0.27778,-0.141659,1.09591,1.31864,2.1296,2.10296,2.23612,1.74329,0.143142,-0.261787,-0.588012,-3.46801,-1.12075,-4.06623,-2.17341,-0.248844,1.19969,-2.2933,-1.03745,-0.128458,-0.0812591,-0.0962674,-2.08961,-1.61756,-1.75983,-1.96927,-2.25089,-0.694657,0.636092,-0.0366628,0.517515,0.259593,0.263502,-0.580537,0.093247,-0.252301,-0.255786,0.783229,-1.20691,-1.16078,-0.183238,-2.02937,-0.0329737,-1.89798,-1.50355,-1.20239,-1.23325,-0.691091,0.0886446,-2.19771,0.257605,0.500783,-0.408612,-1.0425,0.758122,-0.0979312,-1.2489,0.256405,0.673863,-1.51472,0.0798992,-0.51292,-0.268795,-2.40973,-2.24515,-1.92309,-0.970646,-2.34143,-0.0255154,-1.04506,-0.397832,-0.764413,0.318635,0.601633,-0.316584,
    -0.553094,-0.814544,2.02298,1.38157,-0.00235218,-0.625325,-2.3726,-1.17469,3.55323,0.745413,0.248211,0.833562,0.229006,-0.318217,-0.245777,-0.113309,-0.0467945,0.293016,0.447654,0.344378,-0.109795,-0.151891,-0.507259,1.48634,-0.558446,-1.51947,-0.193449,0.821115,1.20826,1.03901,-0.244477,-0.405235,-0.288203,-0.284779,-0.0502329,0.16616,-0.44539,0.0931547,-0.164787,-0.290363,-0.757161,-1.02844,-0.731294,-0.300385,2.11099,-1.25768,1.24305,-0.662177,0.857168,-0.149671,-0.202094,-0.433379,-0.731072,0.277042,0.423887,-0.698668,-0.417659,-0.38786,-0.0805836,0.0855019,1.69188,-0.442987,1.08303,0.3285,-0.585897,1.18469,0.381413,1.03761,-0.245886,-0.812737,-0.203838,0.645001,-0.241135,0.224076,0.277203,-0.478514,-0.526715,0.619796,0.37142,-1.04846,-1.58565,1.40611,0.571999,-1.09905,0.199534,0.883863,1.55557,0.985451,2.09054,-0.0889442,3.4361,5.10463,-1.78603,-0.412825,-0.395512,-1.8953,1.58356,-0.510838,-0.519959,-0.524195,-1.73252,-0.0441147,-0.218711,0.178347,0.279115,-1.48789,-1.05374,0.612825,-0.603395,-0.583123,0.434272,1.3104,-0.265622,-0.184275,-0.195443,-0.846836,-0.37933,0.516003,-1.0203,0.181165,-1.03695,2.04059,1.0425,-1.33616,
    1.31408,1.66844,1.96237,1.31773,-1.54346,0.197118,0.127887,0.8257,-0.44262,-0.258932,-0.360255,0.406174,0.954831,-1.01975,-0.917869,-0.748998,-0.763878,-0.125465,0.0925684,-0.157026,0.20369,1.03667,0.668961,0.450977,2.05109,2.04452,-0.974747,0.877218,-1.02046,-1.01901,-0.584794,-0.932782,-0.677503,-0.389356,-0.85444,-1.00546,-0.775136,-0.268626,-0.373917,0.191068,-0.0105378,-1.09327,-0.291847,0.833752,-0.692464,-0.059985,0.417975,-0.453451,-0.111231,-0.12205,0.116396,-0.227907,-0.669904,-0.748395,-0.668667,-0.757229,-0.233983,0.513825,0.120572,0.278052,-0.275775,0.77593,1.2821,-1.0643,-0.925485,-0.51008,0.680713,-0.607195,-1.17344,0.0168058,1.36928,0.440717,0.338562,0.194554,0.160419,1.22987,0.612367,-1.21225,-2.10778,-1.75023,-1.08333,0.520965,-0.865356,0.059606,-0.0458548,0.180972,0.127198,-0.0803491,-0.0198406,0.713339,-0.221506,0.202346,0.160903,-0.622981,-0.533471,0.663825,-0.0828279,0.662806,1.66853,1.86819,0.38608,2.08117,-0.862782,-1.02221,-0.154863,-0.790956,1.23318,0.0947992,-0.538539,0.694173,0.487855,-0.090014,0.867294,0.0535255,0.0782793,0.373748,0.260701,-0.128557,-0.537499,0.51128,1.18717,0.700068,2.65133,0.80463,
    -2.78802,0.739082,0.189399,1.90134,-0.989192,0.42105,-0.500313,0.436145,0.935512,-0.864389,-0.130971,-0.069113,-1.10412,0.642694,0.793578,0.495481,0.747344,-0.281554,-0.736404,-0.644826,-1.14501,-0.308992,-1.49735,-2.92691,-3.89477,-3.88953,-1.20694,2.02896,-0.26343,-0.537319,0.708172,0.37648,0.769828,0.490451,0.283841,-0.092516,0.731595,-0.573865,-1.05073,-2.05406,-1.05389,1.35246,-0.698241,-0.619362,-0.61885,-1.16055,0.752997,0.765613,-0.951693,-1.47381,-1.59338,-1.25139,-0.806517,0.883545,0.727307,-0.589097,-0.888122,-2.21102,-1.56371,-1.48012,-0.563234,-0.209075,-1.86484,-0.360645,0.31086,0.0328529,0.522701,0.272996,0.09082,0.424529,1.02512,-2.0572,-1.16735,-0.652321,-0.465629,-1.139,-0.454869,0.526411,1.51359,-1.33868,-0.683684,-1.02504,-0.0938756,-0.698222,0.679343,-0.516265,0.202378,-0.417117,2.41335,1.2186,-0.553751,0.0621522,-3.67163,-0.764504,-1.20168,-2.0167,-0.661236,-1.92753,0.488205,0.675839,-2.44756,-0.296316,0.517402,-2.04699,-0.244625,0.573481,-0.586204,1.52606,0.754184,0.363456,-1.01454,-1.01254,-1.4775,-0.47641,-0.316556,-0.158988,-1.05,0.753751,-0.0471709,2.04053,0.604035,-0.763705,-0.254442,-0.603482,
    1.45956,3.95243,3.27519,1.79713,2.27839,3.43661,2.04812,2.08856,1.58442,-1.15373,-0.859074,-1.4127,-1.69039,-0.910636,-0.968581,-0.762415,-0.588963,-1.1072,-1.09665,-1.09203,0.828873,2.62899,1.54245,-0.79242,-0.93113,-2.93864,-0.231022,2.56802,0.134441,-0.0955274,0.11394,0.230207,0.231324,0.105073,-0.255957,-0.989392,0.526838,0.17326,-0.552258,0.355191,-0.563039,-0.27107,1.02417,0.262386,-0.0830086,3.02226,4.13439,0.363253,-0.129421,-0.65132,-0.624927,-0.42752,-0.15614,-0.625588,-0.44968,-0.338258,-0.190118,-0.46515,-0.596791,-0.346233,2.06642,3.70449,3.12818,0.996603,-0.86431,-0.329528,0.676045,0.160602,-0.758496,0.659305,1.69823,-0.97531,0.648278,0.624279,0.722983,0.240348,-1.02637,1.02795,1.09278,-1.03644,-0.663801,0.606892,-0.428878,1.91346,0.253488,0.326607,-0.270898,-1.10892,0.865051,2.07797,-0.00909024,0.801396,-0.661388,0.113704,0.0491236,-0.459852,-0.637781,0.812113,-0.223595,2.48726,-0.504955,-0.188372,-0.173702,-0.211227,-1.21422,-0.754835,1.19239,-0.658991,-1.02512,-0.200587,-0.255074,-1.31512,0.589649,0.532742,0.752767,0.364141,-0.397714,-1.47808,0.00681162,-0.680002,-0.166359,0.19069,-0.214216,-0.310965,
    -0.765843,-0.204028,1.23928,-1.72018,-0.257681,-1.41329,-3.72662,-0.089482,0.247998,-0.272371,0.22498,1.59196,1.78294,1.25347,1.04011,0.834478,0.615505,0.156796,-0.600527,-0.523498,-0.577579,-0.944208,-1.36255,-2.27036,-1.18672,-4.1083,-1.53175,-3.91491,0.444019,0.237778,1.05064,1.87677,1.26709,1.46894,2.61988,3.97335,1.42641,1.08724,0.923796,-0.522493,-0.0351388,-0.849058,-1.03683,-0.516568,-0.867435,-1.42346,-0.519452,-2.07536,-0.469635,-0.0593428,0.299489,0.321588,1.42039,1.53839,1.44779,1.07737,0.468917,0.314579,-0.176681,-0.243418,-0.0424182,-0.638698,-2.36272,-1.17615,1.03934,-0.160146,-0.836866,-0.570338,-0.808443,-1.07198,-0.0829507,-0.526712,-1.42049,-0.764833,-0.715585,-1.97697,0.716055,0.698008,1.03366,-0.742382,1.02779,-2.04032,-0.155102,0.258196,-1.56613,2.08703,-0.423355,0.990989,-0.876027,0.377921,-0.306095,-0.249548,-1.85954,-1.78871,-1.96821,-0.952022,-0.911113,0.911009,0.346758,0.972013,0.617338,-0.504305,0.0720747,-2.19797,-1.02214,0.34514,-0.567284,0.517624,-1.1886,-0.607195,-0.610214,-1.51666,-1.16207,-0.897923,-0.806333,-1.09912,-0.906451,0.78004,0.535989,-0.295523,-0.0251677,0.455189,0.82618,0.257778,
    3.24614,1.64418,-0.0806098,-0.669134,-0.954415,-2.09036,-4.23247,-1.51598,-1.5588,1.55088,1.74877,0.505391,2.22638,1.55738,1.18256,1.17341,1.31879,1.73396,1.70496,1.2179,0.179081,-1.25087,-1.96582,1.31335,-0.369294,-0.637282,0.769794,4.02245,-0.17811,0.159152,-0.879234,-0.279704,-0.572788,-0.587601,0.197388,1.67596,-0.23593,0.617643,0.546079,-0.614017,-0.128685,1.25697,0.611641,0.685198,-1.0544,-2.67951,-2.52244,-0.788791,0.282224,1.17397,1.39117,1.84233,1.68423,-0.829286,-0.723451,1.46392,1.82227,1.87286,1.48383,0.625673,-1.75669,-2.51769,-2.08028,-2.72227,-0.0178842,-1.18148,0.107936,1.24783,-2.2398,-1.27041,-0.0244979,1.86048,-0.207629,-0.249058,-0.223291,-0.298203,-0.0449118,-1.20615,0.875116,0.806938,0.0912104,0.55126,-0.257858,1.75021,0.505189,-0.823757,-0.508209,0.332957,1.55478,-0.0502995,0.482804,1.62936,-0.763572,-0.359642,-0.26023,-1.14176,0.43251,1.76899,0.713453,0.43097,0.847949,-0.142799,0.562317,-1.08153,-0.581901,-0.334438,1.01912,-1.04257,-0.0762015,-0.519234,-0.550349,-0.124661,-0.257198,-0.185707,-0.083048,-0.348321,-0.344114,-0.0968216,1.27071,1.0245,1.08499,1.07589,-0.538036,0.134811,
    1.13895,1.42838,0.0128673,-0.382761,2.26783,3.30068,1.33097,3.72273,0.522466,0.971609,0.285212,-0.831843,-0.434935,-2.06348,-2.42217,-2.12944,-1.85479,0.321661,1.09044,1.04507,4.06184,0.717115,3.93392,6.21805,4.86765,8.25734,0.860641,-8.00141,-0.0699632,-0.0480243,-3.16507,-3.96257,-3.95814,-3.41385,-4.19807,-4.1304,-2.82935,-1.23943,-0.591112,1.15271,-1.17129,0.434792,-0.807152,-0.181471,2.15876,3.05574,0.877067,1.62576,1.08136,0.00623665,-0.225711,-1.05103,-2.09421,-2.77737,-2.7644,-2.82226,-1.59959,-0.236113,0.229317,0.991259,3.70356,2.10121,5.11119,1.98363,1.24765,-1.02795,-0.0378027,-0.188974,-0.660345,-0.411192,0.0469898,0.822377,0.316789,0.38104,0.641587,1.26663,0.255387,-0.835534,0.66447,-1.31678,0.257496,-0.707711,1.02077,-1.45939,-1.42655,1.10354,-1.54926,-0.665819,0.728381,1.21638,0.141711,1.02743,1.4394,1.73307,1.50093,2.22372,-1.66099,1.03282,-1.18397,1.11128,-0.239851,2.10435,-1.07524,0.48697,-1.34803,-0.336196,-0.138764,1.46106,1.02584,-1.74968,-0.329819,1.02573,0.483138,0.821193,0.718485,0.0599285,2.07116,-0.368394,0.303452,0.513833,-1.21378,0.408735,-0.146479,-0.712796,
};

/*
 * Prototypes (B)
 * m x d_cap flattened (dimension of 2D array)
 * numPrototypes x d_cap
 */
const float prototypeMatrix[] = {
    -330.386000,-1615.020000,693.686000,484.176000,-1307.280000,-26.218500,41.156100,-1291.300000,-105.100000,-2178.800000,
    100.312000,-902.741000,-139.711000,-356.868000,-516.514000,-812.688000,9.256520,-163.671000,192.823000,-1344.450000,
    102.665000,-113.138000,-146.391000,-333.050000,-776.828000,-1090.260000,-3.533630,-298.814000,1075.100000,-1246.340000,
    384.619000,-1494.710000,-70.711300,369.546000,-1154.210000,-174.236000,42.941900,30.636800,-418.067000,-933.614000,
    -52.377600,-1180.740000,541.131000,740.382000,-1412.660000,116.622000,135.307000,709.383000,482.481000,-2365.480000,
    -322.845000,-1650.910000,-521.738000,-703.870000,-692.635000,-639.186000,-109.080000,-369.459000,1918.510000,-169.983000,
    324.057000,-813.343000,-770.959000,79.641400,-2271.550000,56.498000,658.285000,-761.845000,650.880000,-1608.720000,
    733.788000,-410.605000,-1656.590000,-15.111500,-124.253000,-1842.610000,240.517000,-874.106000,1260.370000,54.730100,
    1024.420000,-1262.880000,-1449.630000,252.691000,-1186.480000,-1005.240000,462.492000,-222.872000,1016.390000,-1024.630000,
    -23.527200,-1503.100000,349.936000,408.975000,-1340.980000,-565.953000,805.421000,-302.102000,482.695000,490.083000,
    717.538000,-1104.580000,-268.187000,787.814000,-51.920200,320.793000,492.588000,-880.837000,809.624000,-17.925400,
    1108.770000,-1723.070000,-304.007000,-25.893300,-518.216000,-854.932000,-118.312000,39.291400,-93.890100,41.042000,
    -462.749000,-1988.410000,364.195000,139.510000,-542.942000,238.870000,510.326000,-1328.170000,170.095000,-207.380000,
    1130.530000,-884.233000,-855.547000,1605.240000,-1432.910000,-1249.380000,437.496000,-173.472000,1175.910000,-667.878000,
    435.860000,-818.196000,-731.899000,31.340600,-280.091000,-1661.420000,-315.519000,255.906000,969.064000,-469.603000,
    398.564000,-1750.910000,-294.197000,509.296000,-1110.220000,-1342.950000,-595.994000,-81.516300,1368.190000,-6.367640,
    304.291000,-610.347000,-687.798000,368.341000,-2175.380000,-449.685000,235.530000,-724.772000,546.771000,-658.318000,
    117.474000,-521.524000,-633.824000,1255.420000,-1802.770000,-1122.060000,-544.040000,-172.080000,837.924000,-85.833600,
    -278.044000,-780.931000,-1372.350000,1191.920000,-1157.180000,-761.016000,-691.698000,-694.965000,695.674000,-419.235000,
    1295.730000,-419.545000,-1196.800000,1088.590000,-1079.370000,-937.503000,823.876000,-570.782000,489.635000,-1048.170000,
    -93.619900,-633.303000,-578.890000,-180.719000,111.997000,-1100.110000,1015.990000,-1529.230000,525.254000,-419.125000,
    180.994000,88.083400,-776.479000,244.061000,-1591.690000,-1389.240000,-445.491000,-529.860000,1379.260000,-225.751000,
    219.712000,-1567.670000,-148.775000,-512.351000,-1126.870000,-1983.160000,89.497400,491.923000,1292.650000,122.785000,
    -319.320000,-1219.440000,-549.506000,604.923000,-1442.240000,-1292.040000,640.673000,-645.968000,69.374800,371.546000,
};
/* Number of prototypes (m) */
const unsigned int numPrototypes = 24;

/*
 * Prototype Lables (Z)
 * m x L (dimension of 2D array)
 * numLabels x numPrototypes
 */
const float prototypeLabelMatrix[] = {
    0.000000,75.955600,0.000000,-64.100500,2.236570,-1.455860,0.000000,-5.572600,0.000000,-1.493340,
    0.000000,0.910927,0.000000,-0.013878,0.008996,-0.002169,0.000000,-0.002570,0.000000,0.003475,
    0.000000,0.818721,0.000000,0.001895,-0.003210,-0.002276,0.000000,0.005009,0.000000,-0.001664,
    0.000000,1.108750,0.000000,-0.145419,0.025456,-0.018585,0.000000,-0.036601,0.000000,0.035254,
    0.000000,-198.676000,0.000000,216.610000,-2.658930,0.972147,0.000000,-7.049510,0.000000,-3.424200,
    0.000000,-0.453358,0.000000,-0.155180,-0.442656,2.521980,0.000000,10.782700,0.000000,0.803204,
    0.000000,-20.556300,0.000000,-8.744730,-1.140450,2.190350,0.000000,32.563400,0.000000,8.587490,
    0.000000,2.761300,0.000000,0.005832,-0.005249,0.026091,0.000000,0.010515,0.000000,0.034346,
    0.000000,4.027730,0.000000,-0.016404,-0.031655,-2.279030,0.000000,0.160121,0.000000,-0.044455,
    0.000000,7.024220,0.000000,-6.085280,-8.016010,4.704050,0.000000,3.714550,0.000000,-19.756300,
    0.000000,-2.224390,0.000000,-0.070755,19.650600,-12.292400,0.000000,-0.202986,0.000000,0.315483,
    0.000000,7.354980,0.000000,0.292836,-0.048260,0.134323,0.000000,0.489468,0.000000,-0.474110,
    0.000000,23.402100,0.000000,25.010000,-10.100000,6.067790,0.000000,2.079920,0.000000,1.781880,
    0.000000,-76.009900,0.000000,0.115805,68.125800,-11.704700,0.000000,-7.652510,0.000000,2.731880,
    0.000000,1.538190,0.000000,-0.020722,0.001557,-0.017411,0.000000,0.175616,0.000000,0.047383,
    0.000000,19.391700,0.000000,-0.321323,-1.218460,0.700491,0.000000,-16.169300,0.000000,2.735580,
    0.000000,11.548100,0.000000,0.790433,0.532947,-0.654553,0.000000,-7.498140,0.000000,-0.737583,
    0.000000,-65.949000,0.000000,-1.019490,-5.271600,1.263700,0.000000,51.868600,0.000000,8.284870,
    0.000000,16.733000,0.000000,0.445306,-0.122911,-0.327576,0.000000,5.142760,0.000000,-15.093300,
    0.000000,0.577766,0.000000,0.083908,-16.512000,21.471900,0.000000,0.696132,0.000000,-0.398278,
    0.000000,14.230100,0.000000,0.037301,0.010807,-0.103009,0.000000,0.250566,0.000000,-0.200047,
    0.000000,4.854080,0.000000,-0.036892,0.113464,-0.100647,0.000000,-1.640540,0.000000,-0.025206,
    0.000000,-1.702660,0.000000,2.128400,1.180090,0.938087,0.000000,-11.714700,0.000000,-6.792340,
    0.000000,-7.930510,0.000000,0.077904,0.208950,-0.181139,0.000000,-1.537090,0.000000,16.528900,
};
/* Number of output labels, (L). */
const unsigned int numLabels = 10; // 0,1,3,4,5,7,9
    
};
    