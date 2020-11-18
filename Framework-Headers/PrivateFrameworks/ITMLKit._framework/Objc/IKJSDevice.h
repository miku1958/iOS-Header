//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDevice-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSNumber, NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDevice : IKJSObject <IKJSDevice, JSExport>
{
    id _isNetworkTypeChangedToken;
    id<IKAppDeviceConfig> _deviceConfig;
}

@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *appVersion;
@property (weak, nonatomic) id<IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
@property (readonly, nonatomic) BOOL isInRetailDemoMode;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSNumber *pixelRatio;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *vendorID;
@property (readonly, nonatomic) NSString *vendorIdentifier;

+ (id)getMobileGestaltString:(struct __CFString *)arg1;
- (void).cxx_destruct;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)advertisingIdentifier;
- (id)capacity:(id)arg1;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (BOOL)isAdvertisingTrackingEnabled;

@end

