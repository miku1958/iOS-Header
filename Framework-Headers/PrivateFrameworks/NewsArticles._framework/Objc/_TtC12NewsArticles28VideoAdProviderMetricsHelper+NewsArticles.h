//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/_TtC12NewsArticles28VideoAdProviderMetricsHelper.h>

#import <NewsArticles/SXVideoAdEventTracker-Protocol.h>
#import <NewsArticles/SXVideoEventTracker-Protocol.h>

@interface _TtC12NewsArticles28VideoAdProviderMetricsHelper (NewsArticles) <SXVideoEventTracker, SXVideoAdEventTracker>
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)muteStateChanged:(BOOL)arg1;
- (void)nextVideoStartedPlaying;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackPassedQuartile:(unsigned long long)arg1;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)skipped;
- (void)tappedToToggleControlVisibility:(BOOL)arg1;
@end

