//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingSystemControllerLifecycle;
- (float)alarmVolume;
- (void)dealloc;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)arg1;
- (id)init;
- (float)musicVolume;
- (void)startObservingSystemVolumes;
- (void)systemControllerDied:(id)arg1;
- (void)systemVolumeDidChange:(id)arg1;

@end

