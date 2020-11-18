//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPaymentWebServiceContext;
@protocol OS_dispatch_queue;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject
{
    PKPaymentWebServiceContext *_deferredSharedPaymentWebServiceContext;
    NSMutableArray *_deferredActions;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (strong, nonatomic) NSMutableArray *deferredActions; // @synthesize deferredActions=_deferredActions;
@property (strong, nonatomic) PKPaymentWebServiceContext *deferredSharedPaymentWebServiceContext; // @synthesize deferredSharedPaymentWebServiceContext=_deferredSharedPaymentWebServiceContext;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;

+ (id)sharedDeferredActionHandler;
- (void).cxx_destruct;
- (void)_handleDevicePaired;
- (void)_handleDevicePairingFailure;
- (void)_handleDeviceUnpaired;
- (id)init;
- (void)performActionWhenCompanionAgentIsAvailable:(CDUnknownBlockType)arg1;

@end

