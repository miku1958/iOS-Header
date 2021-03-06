//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject
{
    NSMutableDictionary *_deferredActions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_deferredSharedPaymentWebServiceContexts;
    NSMutableDictionary *_deferredAddedPaymentPasses;
}

@property (strong, nonatomic) NSMutableDictionary *deferredActions; // @synthesize deferredActions=_deferredActions;
@property (strong, nonatomic) NSMutableDictionary *deferredAddedPaymentPasses; // @synthesize deferredAddedPaymentPasses=_deferredAddedPaymentPasses;
@property (strong, nonatomic) NSMutableDictionary *deferredSharedPaymentWebServiceContexts; // @synthesize deferredSharedPaymentWebServiceContexts=_deferredSharedPaymentWebServiceContexts;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;

+ (id)sharedDeferredActionHandler;
- (void).cxx_destruct;
- (void)_cleanUpDeferredDataForPairingID:(id)arg1;
- (void)_handleCompanionAgentStarted;
- (void)_handleDeviceBecameActive:(id)arg1;
- (void)_handleDevicePaired:(id)arg1;
- (void)_handleDevicePairingFailure:(id)arg1;
- (void)_handleDeviceUnpaired:(id)arg1;
- (void)_performDeferredActions;
- (void)addDeferredPaymentPass:(id)arg1 forDevice:(id)arg2;
- (void)dealloc;
- (id)deferredPaymentPassUniqueIDsForDevice:(id)arg1;
- (id)deferredPaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2;
- (id)deferredPaymentPassesForDevice:(id)arg1;
- (id)deferredSharedPaymentWebServiceContextForDevice:(id)arg1;
- (id)init;
- (void)performActionWhenCompanionAgentIsAvailable:(CDUnknownBlockType)arg1 forDevice:(id)arg2;
- (void)setDeferredSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;

@end

