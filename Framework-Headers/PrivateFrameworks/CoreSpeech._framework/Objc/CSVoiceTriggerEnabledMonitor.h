//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor
{
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (BOOL)isEnabled;

@end

