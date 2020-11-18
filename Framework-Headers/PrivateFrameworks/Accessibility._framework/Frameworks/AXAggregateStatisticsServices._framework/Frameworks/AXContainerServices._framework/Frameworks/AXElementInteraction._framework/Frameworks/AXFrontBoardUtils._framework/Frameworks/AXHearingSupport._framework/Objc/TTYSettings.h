//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface TTYSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

@property (nonatomic) BOOL TTYHardwareEnabled;
@property (nonatomic) BOOL TTYSoftwareEnabled;
@property (nonatomic) BOOL incomingCallsTTY;
@property (nonatomic) long long incomingTTYCallCount;
@property (nonatomic) BOOL internalOverrideTTYAvailability;
@property (nonatomic) double lastCallCountReset;
@property (nonatomic) long long outgoingTTYCallCount;
@property (strong, nonatomic) NSString *preferredRelayNumber;
@property (strong, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property (strong, nonatomic) NSMutableSet *synchronizePreferences; // @synthesize synchronizePreferences=_synchronizePreferences;
@property (nonatomic) BOOL ttyShouldBeRealtime;
@property (strong, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handlePreferenceChanged:(id)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (id)_selectorMap;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_synchronizeIfNecessary:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)notificationForSelector:(SEL)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (SEL)selectorForPreferenceKey:(id)arg1;

@end
