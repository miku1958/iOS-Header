//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/PARSessionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, PARSession, PRSFeedbackProxy, SSPlistDataReader;
@protocol OS_dispatch_queue, OS_dispatch_source, PRSSessionController, SFFeedbackListener;

@interface PRSSearchSession : NSObject <PARSessionDelegate>
{
    NSMutableArray *_feedback;
    id<PRSSessionController> _client;
    double _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    NSString *_userAgent;
    BOOL _parsecFeedbackAllowed;
    PRSFeedbackProxy *_listener;
    BOOL _isClientOnlyExperiment;
    BOOL _isInReservedAllocationForExperiment;
    BOOL _configuredSession;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    NSArray *_supportedServices;
    NSString *_modelL2Version;
    NSString *_experimentNamespaceId;
    NSString *_experimentId;
    NSString *_treatmentId;
    PARSession *_session;
    NSObject<OS_dispatch_source> *_quiescenceTimer;
    double _retryAfter;
}

@property (readonly, nonatomic) NSSet *appBlocklist;
@property (readonly, nonatomic) SSPlistDataReader *cannedCEPValues;
@property (readonly, nonatomic) SSPlistDataReader *cepDictionary;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property BOOL configuredSession; // @synthesize configuredSession=_configuredSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property (readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property (readonly, nonatomic) NSString *experimentNamespaceId; // @synthesize experimentNamespaceId=_experimentNamespaceId;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isClientOnlyExperiment; // @synthesize isClientOnlyExperiment=_isClientOnlyExperiment;
@property (readonly, nonatomic) BOOL isInReservedAllocationForExperiment; // @synthesize isInReservedAllocationForExperiment=_isInReservedAllocationForExperiment;
@property (readonly, nonatomic) id<SFFeedbackListener> listener;
@property (readonly, nonatomic) NSString *modelL2Version; // @synthesize modelL2Version=_modelL2Version;
@property (strong) NSObject<OS_dispatch_source> *quiescenceTimer; // @synthesize quiescenceTimer=_quiescenceTimer;
@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property (readonly, nonatomic) double searchRenderTimeout;
@property (strong) PARSession *session; // @synthesize session=_session;
@property (nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property (readonly, nonatomic) double suggestionsRenderTimeout;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedServices; // @synthesize supportedServices=_supportedServices;
@property (readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property (strong) NSString *userAgent; // @synthesize userAgent=_userAgent;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (id)feedbackListener;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2 webSearch:(BOOL)arg3;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2 whyQuery:(unsigned long long)arg3;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2 config:(id)arg3 session:(id)arg4;
- (void)queryCompleted:(id)arg1;
- (id)queryTaskWithEngagedSuggestion:(id)arg1 externalId:(unsigned int)arg2 handler:(id)arg3 queryContext:(id)arg4 queryIdent:(unsigned long long)arg5;
- (id)queryTaskWithString:(id)arg1 externalId:(unsigned int)arg2 handler:(id)arg3 queryContext:(id)arg4 queryIdent:(unsigned long long)arg5;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)setFeedbackStartTime;
- (void)setParsecFeedbackAllowed:(BOOL)arg1;
- (void)setQueryLanguage:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (void)shrinkCaches;
- (void)warmup;

@end

