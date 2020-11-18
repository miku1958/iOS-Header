//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject
{
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (readonly, nonatomic) float currentVideoFrameRate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_transferCachedValuesToFig;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferEnabledToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (id)_weakReferenceToPlayerItem;
- (void)dealloc;
- (id)description;
- (BOOL)disableColorMatching;
- (id)fallbackTrack;
- (void)finalize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)loudnessInfo;
- (void)setDisableColorMatching:(BOOL)arg1;
- (void)setLoudnessInfo:(id)arg1;
- (void)setVideoEnhancementFilterOptions:(id)arg1;
- (int)trackID;
- (id)videoEnhancementFilterOptions;

@end

