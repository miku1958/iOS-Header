//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUImageTileViewController.h>

#import <PhotosUI/ISPlayerViewDelegate-Protocol.h>
#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class ISPlayerView, NSString;
@protocol PUIrisImageTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUIrisImageTileViewController : PUImageTileViewController <ISPlayerViewDelegate, _UISettingsKeyObserver>
{
    struct {
        BOOL respondsToDidBeginPlaying;
        BOOL respondsToWillEndPlaying;
        BOOL respondsToDidEndPlaying;
    } _delegateFlags;
    BOOL _canLoadIrisContent;
    BOOL __needUpdateIrisContent;
    BOOL __needsUpdateIrisPlayerView;
    id<PUIrisImageTileViewControllerDelegate> _delegate;
    ISPlayerView *__irisPlayerView;
    ISPlayerView *__irisPlayerViewWithVitalityEnabled;
}

@property (strong, nonatomic, setter=_setIrisPlayerView:) ISPlayerView *_irisPlayerView; // @synthesize _irisPlayerView=__irisPlayerView;
@property (strong, nonatomic, setter=_setIrisPlayerViewWithVitalityEnabled:) ISPlayerView *_irisPlayerViewWithVitalityEnabled; // @synthesize _irisPlayerViewWithVitalityEnabled=__irisPlayerViewWithVitalityEnabled;
@property (nonatomic, setter=_setNeedsUpdateIrisContent:) BOOL _needUpdateIrisContent; // @synthesize _needUpdateIrisContent=__needUpdateIrisContent;
@property (nonatomic, setter=_setNeedsUpdateIrisPlayerView:) BOOL _needsUpdateIrisPlayerView; // @synthesize _needsUpdateIrisPlayerView=__needsUpdateIrisPlayerView;
@property (nonatomic) BOOL canLoadIrisContent; // @synthesize canLoadIrisContent=_canLoadIrisContent;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUIrisImageTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assetFocusValueDidChange;
- (void)_assetIsInFocusChanged;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_invalidateIrisContent;
- (void)_invalidateIrisPlayerView;
- (BOOL)_needsIrisUpdate;
- (void)_playerViewReadinessDidChange;
- (void)_updateIrisContentIfNeeded;
- (void)_updateIrisIfNeeded;
- (void)_updateIrisPlayerViewIfNeeded;
- (void)_updateIrisPlayerViewWithVitalityEnabled;
- (void)_updatePlayerViewScrubOffset;
- (void)assetViewModelDidChange;
- (void)becomeReusable;
- (void)dealloc;
- (id)irisPlayerView:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)irisPlayerViewViewHostingGestureRecognizers:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

