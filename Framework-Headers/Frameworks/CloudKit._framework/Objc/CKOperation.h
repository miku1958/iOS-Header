//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKOperationConfiguration, CKOperationGroup, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationMetrics, CKPlaceholderOperation, CKTimeLogger, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, OS_os_transaction, OS_voucher;

@interface CKOperation : NSOperation
{
    NSObject<OS_os_transaction> *_isExecuting;
    NSObject<OS_voucher> *_clientVoucher;
    NSObject<OS_os_activity> *_osActivity;
    BOOL _isOutstandingOperation;
    BOOL _isFinished;
    BOOL _clouddConnectionInterrupted;
    BOOL _queueHasStarted;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKOperationConfiguration *_resolvedConfiguration;
    CDUnknownBlockType _longLivedOperationWasPersistedBlock;
    CDUnknownBlockType _requestCompletedBlock;
    CKOperationConfiguration *_configuration;
    CKOperationGroup *_group;
    NSString *_operationID;
    NSObject<OS_dispatch_source> *_timeoutSource;
    long long _usesBackgroundSessionOverride;
    NSError *_cancelError;
    NSMutableArray *_savedRequestUUIDs;
    NSMutableDictionary *_savedResponseHTTPHeadersByRequestUUID;
    NSMutableDictionary *_savedW3CNavigationTimingByRequestUUID;
    CKPlaceholderOperation *_placeholderOperation;
    NSError *_error;
    NSString *_sectionID;
    NSString *_parentSectionID;
    id _context;
    CKTimeLogger *_timeLogger;
    CKOperationMetrics *_metrics;
    NSString *_deviceIdentifier;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
}

@property (strong, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property (strong, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) BOOL allowsBackgroundNetworking;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property (strong, nonatomic) id clientVoucher; // @synthesize clientVoucher=_clientVoucher;
@property (nonatomic) BOOL clouddConnectionInterrupted; // @synthesize clouddConnectionInterrupted=_clouddConnectionInterrupted;
@property (copy, nonatomic) CKOperationConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) CKOperationGroup *group; // @synthesize group=_group;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (nonatomic) BOOL isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property (copy, nonatomic) CDUnknownBlockType longLivedOperationWasPersistedBlock; // @synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock;
@property (strong, nonatomic) CKOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property (copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property (readonly, nonatomic) CKOperationInfo *operationInfo;
@property (strong, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property (readonly, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property (strong) CKPlaceholderOperation *placeholderOperation; // @synthesize placeholderOperation=_placeholderOperation;
@property (nonatomic) BOOL preferAnonymousRequests;
@property BOOL queueHasStarted; // @synthesize queueHasStarted=_queueHasStarted;
@property (copy, nonatomic) CDUnknownBlockType requestCompletedBlock; // @synthesize requestCompletedBlock=_requestCompletedBlock;
@property (readonly, nonatomic) NSArray *requestUUIDs;
@property (readonly, nonatomic) CKOperationConfiguration *resolvedConfiguration; // @synthesize resolvedConfiguration=_resolvedConfiguration;
@property (readonly, nonatomic) NSDictionary *responseHTTPHeadersByRequestUUID;
@property (strong, nonatomic) NSMutableArray *savedRequestUUIDs; // @synthesize savedRequestUUIDs=_savedRequestUUIDs;
@property (strong, nonatomic) NSMutableDictionary *savedResponseHTTPHeadersByRequestUUID; // @synthesize savedResponseHTTPHeadersByRequestUUID=_savedResponseHTTPHeadersByRequestUUID;
@property (strong, nonatomic) NSMutableDictionary *savedW3CNavigationTimingByRequestUUID; // @synthesize savedW3CNavigationTimingByRequestUUID=_savedW3CNavigationTimingByRequestUUID;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (strong, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property (nonatomic) BOOL usesBackgroundSession;
@property (nonatomic) long long usesBackgroundSessionOverride; // @synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride;
@property (readonly, nonatomic) NSDictionary *w3cNavigationTimingByRequestUUID;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (id)_findBestThrottleError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (void)_handleStatisticsCallback:(id)arg1;
- (void)_installTimeoutSource;
- (void)_setIsExecuting:(BOOL)arg1;
- (void)_setIsFinished:(BOOL)arg1;
- (void)_start;
- (void)_uninstallTimeoutSource;
- (BOOL)_wantsFlowControl;
- (id)activityCreate;
- (BOOL)allowsCellularAccess;
- (void)cancel;
- (void)cancelWithUnderlyingError:(id)arg1;
- (id)container;
- (id)daemon;
- (void)dealloc;
- (id)description;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (BOOL)isConcurrent;
- (BOOL)isLongLived;
- (void)main;
- (Class)operationClass;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)processOperationResult:(id)arg1;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setContainer:(id)arg1;
- (void)setLongLived:(BOOL)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)start;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end

