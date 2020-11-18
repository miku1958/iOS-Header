//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDCloudSettings : HMFObject <HMFLogging>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isHomeEnabled) BOOL homeEnabled;
@property (getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedSettings;
+ (id)shortDescription;
+ (BOOL)supportsCloudSettings;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__synchronize;
- (void)__updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_notifyClientsOfUpdatedHomeState:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)arg1;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)enableHome:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (id)init;
- (id)shortDescription;
- (void)synchronize;
- (void)updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

