//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKVideoControllerDelegate-Protocol.h>
#import <OpusKit/OKViewControllerAudioSupport-Protocol.h>
#import <OpusKit/OKWidgetEditable-Protocol.h>
#import <OpusKit/OKWidgetMediaViewProxyExports-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class AVAsset, NSString, NSURL, OFUIButton, OFUIView, OKAudioDucker, OKVideoPlayerController, OKWidgetMediaVideoPlayerView, UIImageView;

@interface OKWidgetMediaViewProxy : OKWidgetView <OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate>
{
    OFUIButton *_videoPlayButton;
    UIImageView *_thumbnailView;
    struct UIEdgeInsets _mediaEdgeInsets;
    NSURL *_videoURL;
    OKWidgetMediaVideoPlayerView *_videoPlayerView;
    OKVideoPlayerController *_videoPlayerController;
    AVAsset *_videoAsset;
    BOOL _disablePlayButton;
    float _rate;
    double _seekToTime;
    NSString *_didFinishPlayingActionScript;
    OKAudioDucker *_audioDucker;
    BOOL _isVideoAssetLoaded;
    BOOL _autoplay;
    BOOL _loop;
    BOOL _didPlayInteractively;
    BOOL _shouldPlayVideoWhenAvailable;
    BOOL _readyForDisplayAndPlay;
    float _requiredDuckLevel;
    float _volume;
    NSString *_audioTrackID;
    struct CGPoint _offset;
    struct CGPoint _originalOffsetWhilePanning;
    double _scale;
    BOOL _editable;
    BOOL _isEditingPanning;
    BOOL _shouldFitRegionOfInterest;
    BOOL _needsReloadThumbnail;
    OFUIView *_faceRect;
    double _reloadThumbnailContentProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldPlayVideoWhenAvailable; // @synthesize shouldPlayVideoWhenAvailable=_shouldPlayVideoWhenAvailable;
@property (readonly) Class superclass;

+ (void)setupJavascriptContext:(id)arg1;
+ (BOOL)shouldDrawRegionOfInterest;
+ (id)supportedSettings;
- (void)_beginAudioDucking;
- (void)_cancelThumbnailOperations;
- (void)_cleanupVideo;
- (id)_contentViewToFocus;
- (void)_hideVideoButton;
- (double)_localReadyProgress;
- (void)_reloadThumbnailContent;
- (void)_reloadThumbnailContent:(BOOL)arg1 loadVideo:(BOOL)arg2;
- (void)_setVideoContentMode:(long long)arg1;
- (void)_setupVideo;
- (void)_setupVideoPlayButton;
- (void)_showVideoButton;
- (void)_showVideoButtonWithDelay;
- (void)_stopAudioDucking;
- (void)_unloadThumbnailContent;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)beginFadingWithDuration:(double)arg1;
- (void)calculateOffsetForRegionOfInterest;
- (BOOL)canPerformAction:(id)arg1;
- (float)contentAspectRatio;
- (double)currentTime;
- (void)dealloc;
- (void)drawRegionOfInterestContainerBounds;
- (double)duration;
- (BOOL)endAllEditing:(BOOL)arg1;
- (void)endDucking;
- (void)hideThumbnailAndPlayVideo;
- (id)initWithWidget:(id)arg1;
- (void)instantPause;
- (void)instantResume;
- (id)layoutSettingsKeys;
- (void)layoutSubviews;
- (void)networkStatusDidChange:(long long)arg1;
- (void)pauseVideo:(id)arg1;
- (void)play;
- (void)playVideo:(id)arg1;
- (BOOL)prepareForDisplay:(BOOL)arg1;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload:(BOOL)arg1;
- (BOOL)prepareForWarmup:(BOOL)arg1;
- (double)remainingPlayDuration;
- (double)requiredDuckLevel;
- (void)resetVideo;
- (void)seekToTime:(double)arg1;
- (void)setAntialiasing:(BOOL)arg1;
- (void)setPlaybackAudioVolume:(double)arg1;
- (void)setSettingAudioRequiredDuckLevel:(float)arg1;
- (void)setSettingAudioVolume:(float)arg1;
- (void)setSettingAutoplay:(BOOL)arg1;
- (void)setSettingContentMode:(long long)arg1;
- (void)setSettingDidFinishPlayingActionScript:(id)arg1;
- (void)setSettingDisablePlayButton:(BOOL)arg1;
- (void)setSettingEditable:(BOOL)arg1;
- (void)setSettingLoop:(BOOL)arg1;
- (void)setSettingMediaEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setSettingOffset:(struct CGPoint)arg1;
- (void)setSettingScale:(double)arg1;
- (void)setSettingSeekToTime:(double)arg1;
- (void)setSettingShouldFitRegionOfInterest:(BOOL)arg1;
- (void)setSettingUrl:(id)arg1;
- (void)setVideoAsset:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (long long)settingContentMode;
- (BOOL)settingEditable;
- (BOOL)settingLoop;
- (struct UIEdgeInsets)settingMediaEdgeInsets;
- (id)settingObjectForKey:(id)arg1;
- (struct CGPoint)settingOffset;
- (double)settingScale;
- (double)settingSeekToTime;
- (BOOL)settingShouldFitRegionOfInterest;
- (id)settingUrl;
- (BOOL)settingsAutoplay;
- (void)showVideoActivityIndicator:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)supportsReadiness;
- (struct CGRect)thumbnailRect;
- (void)updateOffset;
- (id)valueForUndefinedKey:(id)arg1;
- (void)videoBecomesReady;
- (void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;
- (void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;

@end
