//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class NSString;
@protocol MPVolumeControllerDataSourceDelegate;

@protocol MPVolumeControllerDataSource <NSObject>

@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;

- (void)adjustVolumeValue:(float)arg1;
- (void)getVolumeValueWithCompletion:(void (^)(float))arg1;
- (void)initializeVolume;
- (void)reload;
- (void)reloadWarning;
@end

