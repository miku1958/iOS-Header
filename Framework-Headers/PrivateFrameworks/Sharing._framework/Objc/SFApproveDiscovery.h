//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SFApproveDiscovery : NSObject
{
    BOOL _activateCalled;
    CDUnknownBlockType _activateHandler;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFDeviceDiscovery *_deviceDiscovery;
    NSMutableDictionary *_deviceDictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_devices;
}

@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property (strong, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activatedWithError:(id)arg1;
- (void)_discoveryDeviceChanged:(id)arg1;
- (void)_discoveryEnsureStarted;
- (void)_discoveryEnsureStopped;
- (void)_discoveryFoundDevice:(id)arg1;
- (void)_discoveryLostDevice:(id)arg1;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;

@end

