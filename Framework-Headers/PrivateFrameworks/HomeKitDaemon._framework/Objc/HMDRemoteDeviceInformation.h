//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMFTimer, NSMutableArray, NSMutableSet;

@interface HMDRemoteDeviceInformation : HMFObject
{
    BOOL _pinging;
    BOOL _pingConfirmed;
    BOOL _shouldConfirm;
    BOOL _reachable;
    HMDDevice *_device;
    NSMutableSet *_pendingPingIdentifiers;
    HMFTimer *_retryTimer;
    NSMutableArray *_confirmationHandlers;
}

@property (readonly, nonatomic) NSMutableArray *confirmationHandlers; // @synthesize confirmationHandlers=_confirmationHandlers;
@property (readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) NSMutableSet *pendingPingIdentifiers; // @synthesize pendingPingIdentifiers=_pendingPingIdentifiers;
@property (nonatomic, getter=isPingConfirmed) BOOL pingConfirmed; // @synthesize pingConfirmed=_pingConfirmed;
@property (nonatomic, getter=isPinging) BOOL pinging; // @synthesize pinging=_pinging;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (strong, nonatomic) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property (nonatomic) BOOL shouldConfirm; // @synthesize shouldConfirm=_shouldConfirm;

- (void).cxx_destruct;
- (void)completeConfirmationsWithError:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (void)queueConfirmationHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;

@end

