//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class NSString;
@protocol MPVolumeControllerDataSource;

@protocol MPVolumeControllerDataSourceDelegate <NSObject>
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeEUVolumeLimit:(float)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeMuted:(BOOL)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeVolume:(float)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeVolumeAudioCategory:(NSString *)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeVolumeControlAvailability:(BOOL)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeVolumeLabel:(NSString *)arg2;
- (void)volumeControllerDataSource:(id<MPVolumeControllerDataSource>)arg1 didChangeVolumeWarning:(long long)arg2;
@end

