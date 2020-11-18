//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAAccessoryManager, NSString;
@protocol OS_dispatch_queue;

@interface CUMFiDeviceDiscovery : NSObject
{
    EAAccessoryManager *_eaManager;
    struct LogCategory *_ucat;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;

- (void).cxx_destruct;
- (void)_activate;
- (void)_eaAccessoryDidConnect:(id)arg1;
- (void)_eaAccessoryDidDisconnect:(id)arg1;
- (void)_invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end

