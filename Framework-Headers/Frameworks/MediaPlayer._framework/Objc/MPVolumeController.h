//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPVolumeControllerDataSourceDelegate-Protocol.h>

@class NSString;
@protocol MPVolumeControllerDataSource, MPVolumeControllerDelegate;

@interface MPVolumeController : NSObject <MPVolumeControllerDataSourceDelegate>
{
    id<MPVolumeControllerDataSource> _dataSource;
    int _volumeChangeCoalescingCount;
    unsigned int _volumeCapabilities;
    id<MPVolumeControllerDelegate> _delegate;
}

@property (readonly, nonatomic) float EUVolumeLimit;
@property (strong, nonatomic) id<MPVolumeControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) unsigned int volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (nonatomic) float volumeValue;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;

+ (id)descriptionForWarningState:(long long)arg1;
- (void).cxx_destruct;
- (void)_updateVolumeControlAvailability;
- (void)adjustVolumeValue:(float)arg1;
- (void)beginDecreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)endDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (BOOL)muted;
- (void)setVolume:(float)arg1 withNoticationDelay:(float)arg2;
- (void)updateVolumeValue;
- (void)updateVolumeWarningState;
- (void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned int)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;

@end

