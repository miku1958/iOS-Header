//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDeviceAccessManager : NSObject
{
    struct sqlite3 *_externalMediaAccessDB;
    NSObject<OS_dispatch_queue> *_deviceAccessQueue;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue; // @synthesize deviceAccessQueue=_deviceAccessQueue;

+ (id)sharedAccessManager;
- (void)addApplicationWithBundleIdentifier:(id)arg1 whitelist:(BOOL)arg2;
- (void)addControlApplicationWithBundleIdentifier:(id)arg1 whitelisted:(BOOL)arg2;
- (BOOL)applicationWithBundleIdentifierHasAccess:(id)arg1 enabled:(BOOL *)arg2;
- (id)bundleIdentifiersAccessingExternalCameras;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (id)bundleIdentifiersControllingExternalCameras;
- (BOOL)controlApplicationWithBundleIdentifierHasAccess:(id)arg1;
- (void)dealloc;
- (void)displayAlertForApplication:(id)arg1 notificationDict:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (BOOL)internalApplicationWithBundleIdentifierHasAccess:(id)arg1;
- (void)revokeApplicationWithBundleIdentifier:(id)arg1;
- (void)revokeControlApplicationWithBundleIdentifier:(id)arg1;
- (void)updateApplicationWithBundleIdentifier:(id)arg1 withStatus:(BOOL)arg2;
- (BOOL)validateBundleIdentifier:(id)arg1 withNotification:(id)arg2;
- (BOOL)validateBundleIdentifierInstalled:(id)arg1 control:(BOOL)arg2;
- (BOOL)validateControlApplicationBundleIdentifier:(id)arg1 withNotification:(id)arg2;

@end
