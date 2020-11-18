//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, CKDClientProxy, NSDate, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDQueuedFetch : NSObject
{
    BOOL _isFinished;
    BOOL _allowsCellularAccess;
    BOOL _allowsBackgroundNetworking;
    BOOL _useEncryption;
    CDUnknownBlockType _completionHandler;
    CKDQueuedFetch *_equivalentRunningFetch;
    NSMutableDictionary *_completionHandlersByItemID;
    unsigned long long _lastCompletionHandlerCount;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_deviceIdentifier;
    NSDate *_startDate;
    NSDate *_lastRequestDate;
    CKDClientContext *_context;
    CKDClientProxy *_proxy;
    NSOperationQueue *_operationQueue;
    long long _scope;
    long long _usesBackgroundSession;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _highestQOS;
    NSString *_runningOperationID;
    NSMutableSet *_dependentOperationIDs;
    NSMutableDictionary *_dependentOperationIDsByItemID;
}

@property (nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) NSMutableDictionary *completionHandlersByItemID; // @synthesize completionHandlersByItemID=_completionHandlersByItemID;
@property (weak, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (strong, nonatomic) NSMutableSet *dependentOperationIDs; // @synthesize dependentOperationIDs=_dependentOperationIDs;
@property (strong, nonatomic) NSMutableDictionary *dependentOperationIDsByItemID; // @synthesize dependentOperationIDsByItemID=_dependentOperationIDsByItemID;
@property (strong, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (weak, nonatomic) CKDQueuedFetch *equivalentRunningFetch; // @synthesize equivalentRunningFetch=_equivalentRunningFetch;
@property (nonatomic) long long highestQOS; // @synthesize highestQOS=_highestQOS;
@property (nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (nonatomic) unsigned long long lastCompletionHandlerCount; // @synthesize lastCompletionHandlerCount=_lastCompletionHandlerCount;
@property (strong, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property (weak, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (weak, nonatomic) CKDClientProxy *proxy; // @synthesize proxy=_proxy;
@property (strong, nonatomic) NSString *runningOperationID; // @synthesize runningOperationID=_runningOperationID;
@property (nonatomic) long long scope; // @synthesize scope=_scope;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) BOOL useEncryption; // @synthesize useEncryption=_useEncryption;
@property (nonatomic) long long usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)allItemIDs;
- (id)callbacksForItemWithID:(id)arg1;
- (BOOL)canBeUsedForOperation:(id)arg1;
- (BOOL)dependentOperationListContainsOperationID:(id)arg1;
- (BOOL)dependentOperationListContainsRunningFetch:(id)arg1;
- (id)description;
- (id)fetchOperationForItemIDs:(id)arg1;
- (void)finishFetchOperationWithError:(id)arg1;
- (id)init;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (BOOL)isEquivalentToQueuedFetch:(id)arg1;
- (int)numberOfCallbacks;
- (id)operationInfo;
- (Class)operationInfoClass;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (void)start;

@end

