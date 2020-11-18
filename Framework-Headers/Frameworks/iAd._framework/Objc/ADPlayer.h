//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADBannerViewInternalDelegate-Protocol.h>

@class ADBannerView, AVPlayer, AVPlayerItem, NSString;
@protocol ADPlayerDelegate;

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate>
{
    id<ADPlayerDelegate> _delegate;
    BOOL _playbackHasBegun;
    ADBannerView *_videoAd;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    unsigned long long _playbackState;
    id _timeObserver;
}

@property (strong, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property (strong, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ADPlayerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL playbackHasBegun; // @synthesize playbackHasBegun=_playbackHasBegun;
@property (readonly, nonatomic) float playbackRate;
@property (nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property (readonly) Class superclass;
@property (strong, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property (strong, nonatomic) ADBannerView *videoAd; // @synthesize videoAd=_videoAd;

- (id)_networkOptimalVideoURLForAd:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewShouldPauseMedia:(id)arg1;
- (void)bannerViewShouldResumeMedia:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)performAction;
- (void)play;
- (void)playerDidPause;
- (void)playerDidStart;
- (void)playerItemDidFailedToPlayToEnd:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)playerItemEncounteredPlaybackStall:(id)arg1;
- (BOOL)prepareForPlayback;
- (void)shutdown;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end

