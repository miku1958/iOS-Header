//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FTEntitlementSupport : NSObject
{
}

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, strong, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;
- (void)_cleanupMachInfo;
- (BOOL)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (id)_rawEntitlementValue;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_registrationStateChanged;
- (BOOL)_setupCTServerConnection;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary *)arg1;
- (id)init;

@end

