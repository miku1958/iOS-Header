//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUVideoPlayerViewDelegate-Protocol.h>

@class AVPlayer, NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUMediaProvider, PUVideoPlayerView;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUVideoTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUVideoPlayerViewDelegate, PUBrowsingVideoPlayerChangeObserver>
{
    id _playerObserver;
    BOOL _canPlayVideo;
    BOOL __isDisplayingFullQualityImage;
    int __currentImageRequestID;
    PUAssetViewModel *_assetViewModel;
    PUMediaProvider *_mediaProvider;
    PUVideoPlayerView *__playerView;
    id<PUDisplayAsset> _asset;
    PUBrowsingVideoPlayer *__browsingVideoPlayer;
    AVPlayer *__player;
    long long __thumbnailRequestNumber;
    CDUnknownBlockType __readyForDisplayCompletionHandler;
    struct CGSize __targetSize;
}

@property (strong, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer; // @synthesize _browsingVideoPlayer=__browsingVideoPlayer;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID; // @synthesize _currentImageRequestID=__currentImageRequestID;
@property (nonatomic, setter=_setDisplayingFullQualityImage:) BOOL _isDisplayingFullQualityImage; // @synthesize _isDisplayingFullQualityImage=__isDisplayingFullQualityImage;
@property (readonly, nonatomic) BOOL _isDisplayingVideo;
@property (strong, nonatomic, setter=_setPlayer:) AVPlayer *_player; // @synthesize _player=__player;
@property (strong, nonatomic, setter=_setPlayerView:) PUVideoPlayerView *_playerView; // @synthesize _playerView=__playerView;
@property (copy, nonatomic, setter=_setReadyForDisplayCompletionHandler:) CDUnknownBlockType _readyForDisplayCompletionHandler; // @synthesize _readyForDisplayCompletionHandler=__readyForDisplayCompletionHandler;
@property (nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property (nonatomic, setter=_setThumbnailRequestNumber:) long long _thumbnailRequestNumber; // @synthesize _thumbnailRequestNumber=__thumbnailRequestNumber;
@property (strong, nonatomic, setter=_setAsset:) id<PUDisplayAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property (nonatomic) BOOL canPlayVideo; // @synthesize canPlayVideo=_canPlayVideo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_updateImage;
- (void)_updateReadyForDisplay;
- (void)_updateVideo;
- (BOOL)adoptAssetTransitionInfo:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)dealloc;
- (void)didChangeAnimating;
- (id)generateAssetTransitionInfo;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)loadView;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(BOOL)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

