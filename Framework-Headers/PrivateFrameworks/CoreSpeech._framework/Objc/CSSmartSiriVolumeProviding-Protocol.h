//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@protocol CSSmartSiriVolumeProviding <NSObject>
- (float)getEstimatedTTSVolume;
- (void)updateAlarmState:(long long)arg1;
- (void)updateAlarmVolume:(float)arg1;
- (void)updateMusicVolume:(float)arg1;
- (void)updateTimerState:(long long)arg1;
@end
