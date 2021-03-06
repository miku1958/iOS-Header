//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/ISSingleton-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton>
{
    long long _biometricStyle;
    unsigned long long _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *deviceName;
@property (readonly) NSString *guid;
@property (readonly) NSString *hardwareName;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly) NSString *systemName;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
- (int)_deviceClass;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;
- (id)copyProtocolConditionalContext;
- (void)dealloc;
- (long long)deviceBiometricStyle;
- (id)init;
- (BOOL)releasePowerAssertion:(id)arg1;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)resetLocationAndPrivacy;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (BOOL)takePowerAssertion:(id)arg1;

@end

