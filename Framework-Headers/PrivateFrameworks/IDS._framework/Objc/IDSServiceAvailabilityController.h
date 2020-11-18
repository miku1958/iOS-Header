//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject
{
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (BOOL)_isValidServiceType:(id)arg1;
- (void)_postNotificationForService:(id)arg1 availability:(long long)arg2;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_stopListeningToMonitor:(id)arg1;
- (BOOL)addListenerID:(id)arg1 forService:(id)arg2;
- (long long)availabilityForListenerID:(id)arg1 forService:(id)arg2;
- (id)containerForService:(id)arg1 create:(BOOL)arg2;
- (void)dealloc;
- (BOOL)hasListenerID:(id)arg1 forService:(id)arg2;
- (id)init;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;

@end
