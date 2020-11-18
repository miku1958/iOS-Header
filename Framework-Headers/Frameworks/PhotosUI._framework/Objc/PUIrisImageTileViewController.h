//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUImageTileViewController.h>

#import <PhotosUI/PHLivePhotoViewDelegate-Protocol.h>
#import <PhotosUI/PHLivePhotoViewDelegatePrivate-Protocol.h>

@class NSString, PHLivePhotoView;
@protocol PUIrisImageTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate>
{
    struct {
        BOOL respondsToDidBeginPlaying;
        BOOL respondsToWillEndPlaying;
        BOOL respondsToDidEndPlaying;
        BOOL respondsToDidEndVitality;
        BOOL respondsToDidBeginHinting;
        BOOL respondsToViewHostingGestureRecognizers;
        BOOL respondsToDelegateForGestureRecognizer;
    } _delegateFlags;
    CDUnknownBlockType _ppt_didEndPlayingHandler;
    id<PUIrisImageTileViewControllerDelegate> _delegate;
    PHLivePhotoView *__livePhotoView;
}

@property (readonly, nonatomic) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUIrisImageTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assetFocusValueDidChange;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_playVitalityHintIfNeeded;
- (void)_setLivePhotoView:(id)arg1;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)_updatePlaybackGestureRecognizer;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)addToTilingView:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetViewModelDidChange;
- (id)generateAssetTransitionInfo;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoViewDidBeginHinting:(id)arg1;
- (void)livePhotoViewDidEndPlayingVitality:(id)arg1;
- (id)loadView;
- (void)ppt_playLivePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllAnimations;
- (void)setAssetViewModel:(id)arg1;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

