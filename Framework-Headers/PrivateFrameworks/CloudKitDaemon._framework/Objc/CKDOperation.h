//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <CloudKitDaemon/CKDFlowControllable-Protocol.h>
#import <CloudKitDaemon/CKDURLRequestAuthRetryDelegate-Protocol.h>
#import <CloudKitDaemon/CKDURLRequestMetricsDelegate-Protocol.h>

@class CKDClientContext, CKDClientProxy, CKDOperationMetrics, CKDURLRequest, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationResult, CKTimeLogger, NSDate, NSError, NSMutableArray, NSNumber, NSObject, NSString;
@protocol NSObject, OS_dispatch_group, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKDFlowControllable>
{
    unsigned long long _state;
    NSObject<OS_os_activity> *_osActivity;
    BOOL _isFinished;
    BOOL _isExecuting;
    BOOL _useEncryption;
    BOOL _useClearAssetEncryption;
    BOOL _isProxyOperation;
    BOOL _shouldPipelineFetchAllChangesRequests;
    _Atomic int _pcsWaitCount;
    CKDURLRequest *_request;
    CKTimeLogger *_timeLogger;
    NSDate *_startDate;
    CKDOperation *_parentOperation;
    CKDClientContext *_context;
    CKDClientProxy *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSError *_error;
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
    NSDate *_metricExecuteStartDate;
    CDUnknownBlockType _requestCompletedBlock;
    CKOperationInfo *_operationInfo;
    NSObject<OS_dispatch_group> *_stateTransitionGroup;
    NSMutableArray *_requestUUIDs;
    NSMutableArray *_childOperations;
    NSMutableArray *_finishedChildOperationIDs;
    id<NSObject> _powerAssertion;
    NSObject<OS_dispatch_group> *_childOperationsGroup;
    NSString *_clientSuppliedDeviceIdentifier;
}

@property (strong, nonatomic) CKDOperationMetrics *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property (readonly, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (readonly, nonatomic) unsigned int QOSClass;
@property (readonly, nonatomic) BOOL allowsBackgroundNetworking;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) NSMutableArray *childOperations; // @synthesize childOperations=_childOperations;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup; // @synthesize childOperationsGroup=_childOperationsGroup;
@property (strong, nonatomic) NSString *clientSuppliedDeviceIdentifier; // @synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier;
@property (strong, nonatomic) CKDOperationMetrics *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
@property (strong, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (strong) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableArray *finishedChildOperationIDs; // @synthesize finishedChildOperationIDs=_finishedChildOperationIDs;
@property (readonly, nonatomic) NSString *flowControlKey;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property (nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (readonly, nonatomic) BOOL isLongLived;
@property (readonly, nonatomic) BOOL isProxyOperation; // @synthesize isProxyOperation=_isProxyOperation;
@property (strong, nonatomic) NSDate *metricExecuteStartDate; // @synthesize metricExecuteStartDate=_metricExecuteStartDate;
@property (readonly, nonatomic) unsigned long long networkServiceType;
@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) NSNumber *operationGroupQuantityNumber;
@property (readonly, nonatomic) NSString *operationID;
@property (strong, nonatomic) CKOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property (readonly, nonatomic) CKOperationResult *operationResult;
@property (weak, nonatomic) CKDOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property (nonatomic) _Atomic int pcsWaitCount; // @synthesize pcsWaitCount=_pcsWaitCount;
@property (strong, nonatomic) id<NSObject> powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (weak, nonatomic) CKDClientProxy *proxy; // @synthesize proxy=_proxy;
@property (strong, nonatomic) CKDURLRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType requestCompletedBlock; // @synthesize requestCompletedBlock=_requestCompletedBlock;
@property (strong, nonatomic) NSMutableArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property (readonly, nonatomic) BOOL shouldCheckAppVersion;
@property (nonatomic) BOOL shouldPipelineFetchAllChangesRequests; // @synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests;
@property (readonly, nonatomic) BOOL shouldSkipZonePCSUpdate;
@property (readonly, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) unsigned long long state;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup; // @synthesize stateTransitionGroup=_stateTransitionGroup;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property (readonly, nonatomic) double timeoutIntervalForRequest;
@property (readonly, nonatomic) double timeoutIntervalForResource;
@property (readonly, weak, nonatomic) CKDOperation *topmostParentOperation;
@property (nonatomic) BOOL useClearAssetEncryption; // @synthesize useClearAssetEncryption=_useClearAssetEncryption;
@property (nonatomic) BOOL useEncryption; // @synthesize useEncryption=_useEncryption;
@property (readonly, nonatomic) BOOL usesBackgroundSession;

+ (id)_globalOperationCallbackQueueForQOS:(long long)arg1;
+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)CKStatusReportLogGroups;
- (id)CKStatusReportProperties;
- (void)_acquirePowerAssertion;
- (void)_acquirePowerAssertionsForSelfAndParent;
- (BOOL)_checkAppVersion;
- (void)_continueOperationStart;
- (void)_determineNetworkServiceType;
- (void)_dropPowerAssertion;
- (void)_dropPowerAssertionsForSelfAndParent;
- (void)_ensureOperationGroup;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_reallyStart;
- (void)_registerAttemptForOperation;
- (id)_runDurationString;
- (void)_setIsExecuting:(BOOL)arg1;
- (void)_setIsFinished:(BOOL)arg1;
- (id)_startDateString;
- (id)_stateFlags;
- (id)activityCreate;
- (id)additionalRequestHTTPHeaders;
- (void)cancel;
- (id)ckShortDescription;
- (void)combineMetricsWithOperation:(id)arg1;
- (void)configureRequest:(id)arg1;
- (id)createConcurrentQueue;
- (id)createInactiveConcurrentQueue;
- (id)createInactiveSerialQueue;
- (id)createSerialQueue;
- (void)dealloc;
- (void)fillOutOperationResult:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isWaitingOnPCS;
- (void)main;
- (BOOL)makeStateTransition;
- (void)makeStateTransition:(BOOL)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (void)noteOperationDidFinishWaitingOnPCS;
- (void)noteOperationWillWaitOnPCS;
- (Class)operationResultClass;
- (BOOL)operationShouldBeFlowControlled;
- (void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (void)start;
- (id)statusReportWithIndent:(unsigned long long)arg1;

@end
