//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>

@class NSString, PLRoundProgressView, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>
{
    BOOL __needsUpdateProgressViewStyle;
    BOOL __needsUpdateStatus;
    BOOL __needsUpdateStatusViews;
    BOOL __isProgressViewVisible;
    PUAssetSharedViewModel *_assetSharedViewModel;
    PUBrowsingVideoPlayer *_videoPlayer;
    long long __progressViewStyle;
    PUOperationStatus *__status;
    PLRoundProgressView *__progressView;
    UIButton *__errorButton;
    UILabel *__debugProgressLabel;
}

@property (strong, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel; // @synthesize _debugProgressLabel=__debugProgressLabel;
@property (strong, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // @synthesize _errorButton=__errorButton;
@property (nonatomic, setter=_setProgressViewVisible:) BOOL _isProgressViewVisible; // @synthesize _isProgressViewVisible=__isProgressViewVisible;
@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) BOOL _needsUpdateProgressViewStyle; // @synthesize _needsUpdateProgressViewStyle=__needsUpdateProgressViewStyle;
@property (nonatomic, setter=_setNeedsUpdateStatus:) BOOL _needsUpdateStatus; // @synthesize _needsUpdateStatus=__needsUpdateStatus;
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) BOOL _needsUpdateStatusViews; // @synthesize _needsUpdateStatusViews=__needsUpdateStatusViews;
@property (strong, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView; // @synthesize _progressView=__progressView;
@property (nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle; // @synthesize _progressViewStyle=__progressViewStyle;
@property (copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status; // @synthesize _status=__status;
@property (strong, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;

+ (id)_loadErrorIcon;
+ (struct CGSize)progressIndicatorTileSize;
- (void).cxx_destruct;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleErrorButtonTap:(id)arg1;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_invalidateProgressViewStyle;
- (void)_invalidateStatus;
- (void)_invalidateStatusViews;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_setProgressViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateIfNeeded;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateStatusViewsIfNeeded;
- (void)_updateSubviewOrdering;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
