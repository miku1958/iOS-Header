//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class MPVolumeController;

@protocol MPVolumeControllerDelegate <NSObject>

@optional
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(MPVolumeController *)arg1 mutedStateDidChange:(BOOL)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeWarningStateDidChange:(long long)arg2;
@end

