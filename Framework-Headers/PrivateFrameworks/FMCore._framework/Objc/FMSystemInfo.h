//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMSystemInfo : NSObject
{
}

+ (id)sharedInstance;
- (void)authTokenOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)deviceClass;
- (id)deviceModelName;
- (id)deviceName;
- (id)deviceUDID;
- (id)imei;
- (BOOL)isDeviceSecured;
- (BOOL)isInternalBuild;
- (id)meid;
- (id)osBuildVersion;
- (id)osVersion;
- (id)ownerAccount;
- (id)productName;
- (id)productType;
- (id)serialNumber;

@end
