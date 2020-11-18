//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NEAppProxyProviderContainerDelegate-Protocol.h>
#import <NetworkServiceProxy/NPTunnelDelegate-Protocol.h>

@class NPKeyBag, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSPAppRule, NSPConfiguration, NSPFlowDivert, NSString, NWPathEvaluator;
@protocol NSPManagerDelegate, OS_nw_endpoint;

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate>
{
    struct os_unfair_lock_s lock;
    BOOL _disableIdleTimeout;
    BOOL _isObserving;
    BOOL _testFetchDaypass;
    unsigned int _nextFlowID;
    unsigned int _tunnelCount;
    NWPathEvaluator *_pathEvaluator;
    CDUnknownBlockType _changeHandler;
    CDUnknownBlockType _connectionInfoSetHandler;
    CDUnknownBlockType _tunnelConnectedHandler;
    NPKeyBag *_keybag;
    NWPathEvaluator *_policyEvaluator;
    NSDictionary *_appRules;
    NPKeyBag *_inUseKeybag;
    NSPConfiguration *_configuration;
    NSPFlowDivert *_flowDivert;
    NSMutableDictionary *_flowInfoMap;
    NSArray *_currentAgents;
    NSMutableDictionary *_fallbackCounts;
    id<NSPManagerDelegate> _delegate;
    NSString *_signingIdentifier;
    NSPAppRule *_matchingAppRule;
    NSMutableArray *_knownFlows;
    CDUnknownBlockType _pendingCancellationHandler;
    NSArray *_testLatencyMap;
    unsigned long long _testLatencyMapIndex;
    NSObject<OS_nw_endpoint> *_currentTunnelEndpoint;
}

@property (strong) NSDictionary *appRules; // @synthesize appRules=_appRules;
@property (copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property (strong) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
@property (copy, nonatomic) CDUnknownBlockType connectionInfoSetHandler; // @synthesize connectionInfoSetHandler=_connectionInfoSetHandler;
@property (strong, nonatomic) NSArray *currentAgents; // @synthesize currentAgents=_currentAgents;
@property (readonly, nonatomic) BOOL currentNetworkHasProxies;
@property (strong, nonatomic) NSObject<OS_nw_endpoint> *currentTunnelEndpoint; // @synthesize currentTunnelEndpoint=_currentTunnelEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NSPManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property BOOL disableIdleTimeout; // @synthesize disableIdleTimeout=_disableIdleTimeout;
@property (readonly, nonatomic) NSMutableDictionary *fallbackCounts; // @synthesize fallbackCounts=_fallbackCounts;
@property (strong) NSPFlowDivert *flowDivert; // @synthesize flowDivert=_flowDivert;
@property (strong, nonatomic) NSMutableDictionary *flowInfoMap; // @synthesize flowInfoMap=_flowInfoMap;
@property (readonly) unsigned long long hash;
@property (strong) NPKeyBag *inUseKeybag; // @synthesize inUseKeybag=_inUseKeybag;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly) BOOL isFirstTunnel;
@property (nonatomic) BOOL isObserving; // @synthesize isObserving=_isObserving;
@property (strong) NPKeyBag *keybag; // @synthesize keybag=_keybag;
@property (readonly, nonatomic) NSMutableArray *knownFlows; // @synthesize knownFlows=_knownFlows;
@property (strong) NSPAppRule *matchingAppRule; // @synthesize matchingAppRule=_matchingAppRule;
@property (nonatomic) unsigned int nextFlowID; // @synthesize nextFlowID=_nextFlowID;
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property (copy, nonatomic) CDUnknownBlockType pendingCancellationHandler; // @synthesize pendingCancellationHandler=_pendingCancellationHandler;
@property (readonly, nonatomic) NWPathEvaluator *policyEvaluator; // @synthesize policyEvaluator=_policyEvaluator;
@property (readonly, nonatomic) NSString *signingIdentifier; // @synthesize signingIdentifier=_signingIdentifier;
@property (readonly) Class superclass;
@property BOOL testFetchDaypass; // @synthesize testFetchDaypass=_testFetchDaypass;
@property (strong) NSArray *testLatencyMap; // @synthesize testLatencyMap=_testLatencyMap;
@property unsigned long long testLatencyMapIndex; // @synthesize testLatencyMapIndex=_testLatencyMapIndex;
@property (readonly) double timeIntervalSinceLastUsage;
@property (copy, nonatomic) CDUnknownBlockType tunnelConnectedHandler; // @synthesize tunnelConnectedHandler=_tunnelConnectedHandler;
@property (nonatomic) unsigned int tunnelCount; // @synthesize tunnelCount=_tunnelCount;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)buildTestLatencyMap:(id)arg1;
- (void)container:(id)arg1 didFailWithError:(id)arg2;
- (void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)container:(id)arg1 didStartWithError:(id)arg2;
- (id)createAppRuleMapWithRules:(id)arg1;
- (id)createReplacementEndpointForEndpoint:(id)arg1 properties:(id)arg2;
- (id)createTransformsForEndpoint:(id)arg1 parameters:(id)arg2;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getAppRuleMatchingParameters:(id)arg1 flowProperties:(id)arg2;
- (id)getConnectionInfoForIdentifier:(id)arg1;
- (unsigned long long)getTestLatencyRTT:(id)arg1 parameters:(struct networkParameters *)arg2;
- (void)handlePolicyUpdate;
- (void)ingestTestLatencyMap:(id)arg1 local:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)instantiateFlowWithTunnel:(id)arg1 inputProtocol:(struct nw_protocol *)arg2;
- (id)instantiateTunnelWithEndpoint:(id)arg1 parameters:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetTestLatencyMapIndex:(unsigned long long)arg1;
- (void)sendUsageReport:(id)arg1;
- (void)setConnectionInfo:(id)arg1 forIdentifier:(id)arg2;
- (BOOL)shouldSetConfigurationToAppRule:(id)arg1 edgeSet:(id)arg2;
- (void)start;
- (void)startWithConfiguration:(id)arg1 appRules:(id)arg2 delegate:(id)arg3;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
- (void)tunnelDidCancel:(id)arg1;
- (void)tunnelDidConnect:(id)arg1;
- (void)tunnelIsReady:(id)arg1;
- (BOOL)useTestDaypass;
- (BOOL)useTestLatencyMap;
- (void)waitForTunnelsToCancelWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
