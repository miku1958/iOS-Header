//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager;
@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject
{
    NPSManager *_npsManager;
    BOOL _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (BOOL)_isNotificationsIndicatorEnabledInPreferences;
- (void)_notifyClientsOfChange;
- (void)dealloc;
- (id)init;
- (BOOL)isNotificationsIndicatorEnabled;
- (void)setNotificationsIndicatorEnabled:(BOOL)arg1;

@end

