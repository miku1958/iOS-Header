//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NPKeyBag, NPLocation, NPTuscanyEdge, NPWaldoLocationManager, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSPNetworkAgent, NSString, NSURL, NSUUID, NWNetworkAgentRegistration;
@protocol NPWaldoDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NPWaldo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_currentNetworkCharacteristics;
    NSArray *_edges;
    NSArray *_allOnRamps;
    BOOL _shouldSave;
    BOOL _reprocessPending;
    BOOL _daypassRefreshInProgress;
    BOOL _reprocessCancelled;
    unsigned int _generation;
    NSString *_identifier;
    long long _source;
    NSNumber *_timestamp;
    NSNumber *_version;
    NSString *_dayPassHostname;
    NSNumber *_dayPassHostnamePrependLabel;
    NSNumber *_dayPassPort;
    NSNumber *_dayPassRequestTimeout;
    NSString *_dayPassLeafOID;
    NSNumber *_dayPassRevocationFailClosed;
    NSNumber *_dayPassExtendedValidation;
    NSNumber *_dayPassEnableSessionTicket;
    NSArray *_dayPassSoftExpiry;
    NSNumber *_enableLatencyDerivation;
    NSNumber *_latencyFactorA;
    NSNumber *_latencyFactorB;
    NSNumber *_latencyFactorX;
    NSNumber *_edgeFairnessFactor;
    NSNumber *_locationCheckInterval;
    NSNumber *_locationTTL;
    NSNumber *_locationToleranceDistance;
    NSNumber *_viewSize;
    NSNumber *_probePause;
    NSNumber *_probeTFO;
    NSNumber *_probeNoTFOCookie;
    NSNumber *_probeTimeout;
    NSNumber *_retryPause;
    NSNumber *_signatureLimit;
    NSNumber *_observedRTTSampleSize;
    NSNumber *_reprocessSamplingInterval;
    NSNumber *_reprocessSampleSize;
    NSNumber *_connectionIdleTimeoutMaximum;
    NSString *_tag;
    NSURL *_telemetryURL;
    NSString *_telemetryService;
    NSNumber *_useGeohashFromServer;
    NSNumber *_edgeSelectionEnabled;
    NSNumber *_edgeSelectionAlpha;
    NSNumber *_edgeSelectionWindowSize;
    NSNumber *_enableIPv6;
    NSNumber *_requireTFO;
    NSNumber *_TFOLeeway;
    NSNumber *_edgesGeneration;
    NSNumber *_usedEdgesGeneration;
    long long _currentEdgeIndex;
    NSString *_hostname;
    id<NPWaldoDelegate> _delegate;
    NPLocation *_cachedLocation;
    NSDate *_locationCheckTimestamp;
    NSDate *_locationExpiration;
    NPWaldo *_defaults;
    NSPNetworkAgent *_agent;
    NPKeyBag *_keybag;
    NPWaldoLocationManager *_locationManager;
    NSMutableDictionary *_networkInformation;
    NSArray *_currentEdges;
    NPTuscanyEdge *_nextEdge;
    NSObject<OS_dispatch_source> *_reprocessSamplingTimer;
    NWNetworkAgentRegistration *_agentRegistration;
    NSUUID *_configurationIdentifier;
    NSObject<OS_dispatch_queue> *_reprocessQueue;
    NSData *_updateHash;
}

@property (copy) NSNumber *TFOLeeway; // @synthesize TFOLeeway=_TFOLeeway;
@property (strong, nonatomic) NSPNetworkAgent *agent; // @synthesize agent=_agent;
@property (strong) NWNetworkAgentRegistration *agentRegistration; // @synthesize agentRegistration=_agentRegistration;
@property (strong) NSArray *allOnRamps;
@property (strong, nonatomic) NPLocation *cachedLocation; // @synthesize cachedLocation=_cachedLocation;
@property (strong) NSUUID *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
@property (copy) NSNumber *connectionIdleTimeoutMaximum; // @synthesize connectionIdleTimeoutMaximum=_connectionIdleTimeoutMaximum;
@property (readonly) NPTuscanyEdge *currentEdge;
@property long long currentEdgeIndex; // @synthesize currentEdgeIndex=_currentEdgeIndex;
@property (readonly) NSArray *currentEdgeList;
@property (readonly) NSArray *currentEdges; // @synthesize currentEdges=_currentEdges;
@property (readonly) NSDate *currentNetworkLastUsed;
@property (copy) NSNumber *dayPassEnableSessionTicket; // @synthesize dayPassEnableSessionTicket=_dayPassEnableSessionTicket;
@property (copy) NSNumber *dayPassExtendedValidation; // @synthesize dayPassExtendedValidation=_dayPassExtendedValidation;
@property (readonly) long long dayPassFetchCount;
@property (copy) NSString *dayPassHostname; // @synthesize dayPassHostname=_dayPassHostname;
@property (copy) NSNumber *dayPassHostnamePrependLabel; // @synthesize dayPassHostnamePrependLabel=_dayPassHostnamePrependLabel;
@property (copy) NSString *dayPassLeafOID; // @synthesize dayPassLeafOID=_dayPassLeafOID;
@property (copy) NSNumber *dayPassPort; // @synthesize dayPassPort=_dayPassPort;
@property (copy) NSNumber *dayPassRequestTimeout; // @synthesize dayPassRequestTimeout=_dayPassRequestTimeout;
@property (copy) NSNumber *dayPassRevocationFailClosed; // @synthesize dayPassRevocationFailClosed=_dayPassRevocationFailClosed;
@property (copy) NSArray *dayPassSoftExpiry; // @synthesize dayPassSoftExpiry=_dayPassSoftExpiry;
@property BOOL daypassRefreshInProgress; // @synthesize daypassRefreshInProgress=_daypassRefreshInProgress;
@property (strong, nonatomic) NPWaldo *defaults; // @synthesize defaults=_defaults;
@property (weak) id<NPWaldoDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) unsigned long long edgeCount;
@property (copy) NSNumber *edgeFairnessFactor; // @synthesize edgeFairnessFactor=_edgeFairnessFactor;
@property (copy) NSNumber *edgeSelectionAlpha; // @synthesize edgeSelectionAlpha=_edgeSelectionAlpha;
@property (copy) NSNumber *edgeSelectionEnabled; // @synthesize edgeSelectionEnabled=_edgeSelectionEnabled;
@property (copy) NSNumber *edgeSelectionWindowSize; // @synthesize edgeSelectionWindowSize=_edgeSelectionWindowSize;
@property (copy) NSArray *edges;
@property (copy) NSNumber *edgesGeneration; // @synthesize edgesGeneration=_edgesGeneration;
@property (copy) NSNumber *enableIPv6; // @synthesize enableIPv6=_enableIPv6;
@property (copy) NSNumber *enableLatencyDerivation; // @synthesize enableLatencyDerivation=_enableLatencyDerivation;
@property (readonly) NSDate *expirationDate;
@property unsigned int generation; // @synthesize generation=_generation;
@property (readonly) BOOL hasEdges;
@property (strong, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) BOOL isIPv6Enabled;
@property (strong, nonatomic) NPKeyBag *keybag; // @synthesize keybag=_keybag;
@property (readonly) CDUnknownBlockType latencyComparator;
@property (copy) NSNumber *latencyFactorA; // @synthesize latencyFactorA=_latencyFactorA;
@property (copy) NSNumber *latencyFactorB; // @synthesize latencyFactorB=_latencyFactorB;
@property (copy) NSNumber *latencyFactorX; // @synthesize latencyFactorX=_latencyFactorX;
@property (copy) NSNumber *locationCheckInterval; // @synthesize locationCheckInterval=_locationCheckInterval;
@property (strong, nonatomic) NSDate *locationCheckTimestamp; // @synthesize locationCheckTimestamp=_locationCheckTimestamp;
@property (strong, nonatomic) NSDate *locationExpiration; // @synthesize locationExpiration=_locationExpiration;
@property (strong, nonatomic) NPWaldoLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (copy) NSNumber *locationTTL; // @synthesize locationTTL=_locationTTL;
@property (copy) NSNumber *locationToleranceDistance; // @synthesize locationToleranceDistance=_locationToleranceDistance;
@property (strong) NSMutableDictionary *networkInformation; // @synthesize networkInformation=_networkInformation;
@property (readonly) NPTuscanyEdge *nextEdge; // @synthesize nextEdge=_nextEdge;
@property (copy) NSNumber *observedRTTSampleSize; // @synthesize observedRTTSampleSize=_observedRTTSampleSize;
@property (copy) NSNumber *probeNoTFOCookie; // @synthesize probeNoTFOCookie=_probeNoTFOCookie;
@property (copy) NSNumber *probePause; // @synthesize probePause=_probePause;
@property (readonly) unsigned long long probeSize;
@property (copy) NSNumber *probeTFO; // @synthesize probeTFO=_probeTFO;
@property (copy) NSNumber *probeTimeout; // @synthesize probeTimeout=_probeTimeout;
@property BOOL reResolve;
@property BOOL reprocessCancelled; // @synthesize reprocessCancelled=_reprocessCancelled;
@property BOOL reprocessPending; // @synthesize reprocessPending=_reprocessPending;
@property (readonly) NSObject<OS_dispatch_queue> *reprocessQueue; // @synthesize reprocessQueue=_reprocessQueue;
@property (copy) NSNumber *reprocessSampleSize; // @synthesize reprocessSampleSize=_reprocessSampleSize;
@property (copy) NSNumber *reprocessSamplingInterval; // @synthesize reprocessSamplingInterval=_reprocessSamplingInterval;
@property (strong) NSObject<OS_dispatch_source> *reprocessSamplingTimer; // @synthesize reprocessSamplingTimer=_reprocessSamplingTimer;
@property (copy) NSNumber *requireTFO; // @synthesize requireTFO=_requireTFO;
@property (copy) NSNumber *retryPause; // @synthesize retryPause=_retryPause;
@property BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property (copy) NSNumber *signatureLimit; // @synthesize signatureLimit=_signatureLimit;
@property (readonly) long long source; // @synthesize source=_source;
@property (copy) NSString *tag; // @synthesize tag=_tag;
@property (copy) NSString *telemetryService; // @synthesize telemetryService=_telemetryService;
@property (copy) NSURL *telemetryURL; // @synthesize telemetryURL=_telemetryURL;
@property (copy) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property (strong) NSData *updateHash; // @synthesize updateHash=_updateHash;
@property (copy) NSNumber *useGeohashFromServer; // @synthesize useGeohashFromServer=_useGeohashFromServer;
@property (copy) NSNumber *usedEdgesGeneration; // @synthesize usedEdgesGeneration=_usedEdgesGeneration;
@property (copy) NSNumber *version; // @synthesize version=_version;
@property (copy) NSNumber *viewSize; // @synthesize viewSize=_viewSize;

+ (id)createEndpointFromHostList:(id)arg1 defaultPortString:(id)arg2 allowIPv6:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)ageOutLatencyMap;
- (void)cancelProbes;
- (void)cleanupStaleKeys;
- (id)copyEdgeList:(id)arg1;
- (id)copyEdgeListRTTAverage:(id)arg1 observed:(BOOL)arg2 shortDescription:(BOOL)arg3;
- (id)copyEdgeSelectionTelemetry;
- (id)copyLatencyInfoDictionary:(BOOL)arg1 copyAll:(BOOL)arg2;
- (id)copyStateIncludeDistance:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createEdgeLatenciesToProbeWithEdgeIndex:(unsigned long long)arg1 startSampleCount:(unsigned long long *)arg2;
- (id)currentNetworkInfo;
- (id)description;
- (id)edgeAtIndex:(long long)arg1;
- (id)edgeContainingOnRamp:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)establishTrustWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)getCurrentNetworkInterfaceType;
- (void)getDayPassRTT;
- (long long)getFallbackReasonForLatencies:(id)arg1;
- (void)handleUsageReport:(id)arg1;
- (void)incrementSessionCounters;
- (long long)indexOfBestEdge;
- (id)init;
- (id)initFromKeychainWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timestamp:(id)arg2 fromDictionary:(id)arg3 source:(long long)arg4;
- (void)initializeEdgeSelection;
- (BOOL)isEndpointProbed:(id)arg1 parameters:(struct networkParameters *)arg2 latencies:(id)arg3 checkSampleSize:(BOOL)arg4 incompleteLatency:(id *)arg5;
- (BOOL)isLatenciesCompleteForNetwork:(id)arg1;
- (void)link;
- (void)linkAllSignatures:(BOOL)arg1;
- (void)linkLatenciesAllSignatures:(BOOL)arg1;
- (void)loadObservedRTTSamples:(id)arg1;
- (void)logEdgeList:(id)arg1 debug:(BOOL)arg2 toStdout:(BOOL)arg3;
- (void)logLatencyInfoToStdout:(BOOL)arg1 logAll:(BOOL)arg2 logEdgeSelection:(BOOL)arg3;
- (void)merge:(id)arg1 missingSettingsOnly:(BOOL)arg2;
- (void)mergeEdgeList:(id)arg1 forNetworkSignature:(id)arg2;
- (id)onRampForIndex:(id)arg1;
- (void)pushKeybagToKernel;
- (void)pushKeybagToKernelCanReuse:(BOOL)arg1;
- (void)pushKeybagToKernelUpdateGeneration:(BOOL)arg1;
- (void)rebuildLatencyMapAllSignatures:(BOOL)arg1;
- (void)refreshDayPassesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDayPassesFromKernel;
- (void)removeFromKeychain;
- (void)reprocessAdHocWithEdgeIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reprocessEdgeAtIndex:(unsigned long long)arg1 networkSignature:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reprocessLatencies:(id)arg1 sampleCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reprocessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)reprocessWithNewRTT:(unsigned long long)arg1 reProbe:(BOOL *)arg2;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resortEdgeListForCurrentNetworkSignature;
- (void)saveToKeychain;
- (void)setCurrentNetworkCharacteristics:(id)arg1;
- (BOOL)shouldFetchWaldo;
- (BOOL)shouldPerformDayPassRefresh;
- (void)startProbingEdges:(id)arg1 atIndex:(unsigned long long)arg2 doneCount:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)teardownNetworkAgent;
- (void)timestampNetworkSignature:(id)arg1;
- (void)updateEdgeSelection:(unsigned long long)arg1;
- (void)updateMetaDataNeedProbe:(BOOL)arg1 refresh:(BOOL)arg2 push:(BOOL)arg3 minRTT:(unsigned long long)arg4;
- (void)updateNetworkAgentWithKeybag:(id)arg1 networkInfo:(id)arg2;
- (BOOL)validateEdgeList:(id)arg1;

@end
