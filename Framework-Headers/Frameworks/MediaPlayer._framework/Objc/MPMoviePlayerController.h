//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPMediaPlayback-Protocol.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback>
{
    id _implementation;
}

@property (readonly, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) NSURL *contentURL;
@property (nonatomic) long long controlStyle;
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (readonly, nonatomic) unsigned long long loadState;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) BOOL readyForDisplay;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long scalingMode;
@property (nonatomic) BOOL shouldAutoplay;
@property (readonly, nonatomic) UIView *view;

+ (void)allInstancesResignActive;
- (void).cxx_destruct;
- (BOOL)_isReadyForDisplay;
- (void)_resignActive;
- (BOOL)allowsAirPlay;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (double)initialPlaybackTime;
- (BOOL)isAirPlayVideoActive;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long long)movieMediaTypes;
- (long long)movieSourceType;
- (struct CGSize)naturalSize;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (void)prepareToPlay;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(long long)arg1;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;

@end

