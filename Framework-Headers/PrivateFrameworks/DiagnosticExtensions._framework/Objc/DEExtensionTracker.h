//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEExtensionTracker : NSObject
{
}

+ (void)_updateExtensionExpirationDateWithIdentifier:(id)arg1 expirationDate:(id)arg2;
+ (void)_updateXPCActivityDate;
+ (void)checkIn;
+ (id)criteria:(id)arg1;
+ (id)currentLoggingExtensions;
+ (void)decreaseRetainCountWithIdentifier:(id)arg1 session:(id)arg2;
+ (void)extensionTrackerCleanup;
+ (BOOL)hasInactiveLoggingSession:(id)arg1;
+ (void)increaseRetainCountWithIdentifier:(id)arg1 session:(id)arg2;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)arg1;
+ (void)scheduleXPCActivity;
+ (id)sharedSerialQueue;
+ (BOOL)shouldSetupWithIdentifier:(id)arg1 session:(id)arg2 expirationDate:(id)arg3;
+ (BOOL)shouldTeardownWithIdentifier:(id)arg1 session:(id)arg2;
+ (void)updateExpirationDateWithIdentifier:(id)arg1 expirationDate:(id)arg2;
+ (void)updateRetainCountWithIdentifier:(id)arg1 session:(id)arg2 offsetBy:(int)arg3;
+ (id)userDefaults;
+ (double)xpcActivityTimeinterval;

@end
