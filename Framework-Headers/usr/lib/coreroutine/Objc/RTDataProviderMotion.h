//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDataProvider.h>

#import <coreroutine/RTDataProviderProtocol-Protocol.h>

@class NSString;

@interface RTDataProviderMotion : RTDataProvider <RTDataProviderProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)providerName;
+ (id)sharedInstance;
- (void)_fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_processDominantMotionActivity:(id)arg1;
- (void)_registerForDominantActivityNotifications;
- (void)_unregisterForDominantActivityNotifications;
- (id)init;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)onDominantMotionActivityNotification:(id)arg1;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (id)supportedEventClasses;

@end
