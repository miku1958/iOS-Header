//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_availabilityChanged;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg1;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(BOOL)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (BOOL)isAvailable;

@end

