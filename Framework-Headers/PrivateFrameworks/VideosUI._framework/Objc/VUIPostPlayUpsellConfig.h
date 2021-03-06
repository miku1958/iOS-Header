//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPostPlayUpsellConfig : NSObject
{
    BOOL _isUpsellOnPlaybackExitDisabled;
    BOOL _isUpsellOnPIPPlaybackExitEnabled;
    BOOL _isUpsellLimitedPerShow;
    BOOL _isUpsellLimitedPerChannel;
    double _minPlaybackProgressPercentage;
    unsigned long long _upsellMaxCountPerShow;
    double _upsellCountDurationPerShow;
    unsigned long long _upsellMaxCountPerChannel;
    double _upsellCountDurationPerChannel;
}

@property (nonatomic) BOOL isUpsellLimitedPerChannel; // @synthesize isUpsellLimitedPerChannel=_isUpsellLimitedPerChannel;
@property (nonatomic) BOOL isUpsellLimitedPerShow; // @synthesize isUpsellLimitedPerShow=_isUpsellLimitedPerShow;
@property (nonatomic) BOOL isUpsellOnPIPPlaybackExitEnabled; // @synthesize isUpsellOnPIPPlaybackExitEnabled=_isUpsellOnPIPPlaybackExitEnabled;
@property (nonatomic) BOOL isUpsellOnPlaybackExitDisabled; // @synthesize isUpsellOnPlaybackExitDisabled=_isUpsellOnPlaybackExitDisabled;
@property (nonatomic) double minPlaybackProgressPercentage; // @synthesize minPlaybackProgressPercentage=_minPlaybackProgressPercentage;
@property (nonatomic) double upsellCountDurationPerChannel; // @synthesize upsellCountDurationPerChannel=_upsellCountDurationPerChannel;
@property (nonatomic) double upsellCountDurationPerShow; // @synthesize upsellCountDurationPerShow=_upsellCountDurationPerShow;
@property (nonatomic) unsigned long long upsellMaxCountPerChannel; // @synthesize upsellMaxCountPerChannel=_upsellMaxCountPerChannel;
@property (nonatomic) unsigned long long upsellMaxCountPerShow; // @synthesize upsellMaxCountPerShow=_upsellMaxCountPerShow;

+ (id)sharedInstance;
- (id)_cleanupHistory:(id)arg1 atCurrentDate:(id)arg2 isShow:(BOOL)arg3;
- (BOOL)_isFullScreenPlaybackUIShown;
- (BOOL)_isHistoryArrayFull:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3;
- (void)_recordUpsellHistoryForShowId:(id)arg1 onChannelId:(id)arg2;
- (id)_trimHistoryArray:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3 atCurrentDate:(id)arg4;
- (BOOL)canShowUpsellForMediaItem:(id)arg1 withElapsedTime:(double)arg2;
- (void)configureUsingDictionary:(id)arg1;
- (void)disableUpsellOnPlaybackExit:(BOOL)arg1;
- (void)enableUpsellOnPIPPlaybackExit:(BOOL)arg1;
- (void)setChannelLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2;
- (void)setMinPlaybackProgressPercentageForUpsellOnExit:(double)arg1;
- (void)setShowLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2;

@end

