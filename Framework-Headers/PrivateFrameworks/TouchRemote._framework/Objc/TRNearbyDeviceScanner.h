//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFDeviceDiscovery;
@protocol OS_dispatch_queue, TRNearbyDeviceScannerDelegate;

@interface TRNearbyDeviceScanner : NSObject
{
    id<TRNearbyDeviceScannerDelegate> _delegate;
    unsigned long long _state;
    SFDeviceDiscovery *_deviceDiscovery;
    NSObject<OS_dispatch_queue> *_scannerQ;
    unsigned long long _requestedService;
}

@property (weak) id<TRNearbyDeviceScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property unsigned long long requestedService; // @synthesize requestedService=_requestedService;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *scannerQ; // @synthesize scannerQ=_scannerQ;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_deviceChanged:(id)arg1;
- (void)_deviceFound:(id)arg1;
- (void)_handleActivationWithError:(id)arg1;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (id)init;
- (void)openSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startScanningForDevicesWithService:(unsigned long long)arg1;
- (void)stopScanning;

@end
