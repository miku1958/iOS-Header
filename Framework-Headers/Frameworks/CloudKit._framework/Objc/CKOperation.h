//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKContainer, CKOperationInfo, CKOperationMetrics, CKPlaceholderOperation, CKTimeLogger, NSArray, NSDictionary, NSError, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, OS_os_transaction, OS_voucher;

@interface CKOperation : NSOperation
{
    NSObject<OS_os_transaction> *_isExecuting;
    NSObject<OS_voucher> *_clientVoucher;
    NSObject<OS_os_activity> *_osActivity;
    BOOL _allowsCellularAccess;
    BOOL _longLived;
    BOOL _isOutstandingOperation;
    BOOL _isFinished;
    BOOL _isDiscretionary;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    CKContainer *_container;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_operationID;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    CDUnknownBlockType _longLivedOperationWasPersistedBlock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    long long _usesBackgroundSessionOverride;
    CKPlaceholderOperation *_placeholderOperation;
    NSError *_error;
    NSString *_sectionID;
    NSString *_parentSectionID;
    id _context;
    CKTimeLogger *_timeLogger;
    NSArray *_requestUUIDs;
    NSDictionary *_additionalRequestHTTPHeaders;
    CKOperationMetrics *_metrics;
    NSDictionary *_w3cNavigationTimingByRequestUUID;
    NSDictionary *_responseHTTPHeadersByRequestUUID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    NSString *_deviceIdentifier;
    NSDictionary *_MMCSRequestOptions;
}

@property (strong, nonatomic) NSDictionary *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property (strong, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property (nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (strong, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL isDiscretionary; // @synthesize isDiscretionary=_isDiscretionary;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (nonatomic) BOOL isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property (nonatomic, getter=isLongLived) BOOL longLived; // @synthesize longLived=_longLived;
@property (copy, nonatomic) CDUnknownBlockType longLivedOperationWasPersistedBlock; // @synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock;
@property (strong, nonatomic) CKOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property (copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property (readonly, nonatomic) CKOperationInfo *operationInfo;
@property (readonly, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property (strong, nonatomic) CKPlaceholderOperation *placeholderOperation; // @synthesize placeholderOperation=_placeholderOperation;
@property (nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property (strong, nonatomic) NSArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property (strong, nonatomic) NSDictionary *responseHTTPHeadersByRequestUUID; // @synthesize responseHTTPHeadersByRequestUUID=_responseHTTPHeadersByRequestUUID;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property (strong, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property (nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property (nonatomic) BOOL usesBackgroundSession;
@property (nonatomic) long long usesBackgroundSessionOverride; // @synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride;
@property (strong, nonatomic) NSDictionary *w3cNavigationTimingByRequestUUID; // @synthesize w3cNavigationTimingByRequestUUID=_w3cNavigationTimingByRequestUUID;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (id)CKPropertiesDescription;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_installTimeoutSource;
- (void)_start;
- (void)_uninstallTimeoutSource;
- (id)activityCreate;
- (void)cancel;
- (id)daemon;
- (void)dealloc;
- (id)description;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (BOOL)isConcurrent;
- (void)main;
- (Class)operationClass;
- (Class)operationInfoClass;
- (id)osActivity;
- (void)performCKOperation;
- (void)processOperationResult:(id)arg1;
- (void)start;

@end
