//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingAnimatedImagePlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingIrisPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>

@class NSNumber, NSObject, NSProgress, NSString, PUAssetReference, PUAssetSharedViewModel, PUAssetViewModelChange, PUBadgeInfoPromise, PUBrowsingAnimatedImagePlayer, PUBrowsingIrisPlayer, PUBrowsingVideoPlayer, PUMediaProvider, PUModelTileTransform, PUOperationStatus;
@protocol OS_dispatch_group, PUDisplayAsset;

@interface PUAssetViewModel : PUViewModel <PUBrowsingIrisPlayerChangeObserver, PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingAnimatedImagePlayerChangeObserver>
{
    PUBrowsingVideoPlayer *_videoPlayer;
    PUBrowsingIrisPlayer *_irisPlayer;
    PUBrowsingAnimatedImagePlayer *_animatedImagePlayer;
    struct {
        BOOL videoPlayersLoadingAllowed;
    } _isValid;
    BOOL _isUserTransformingTile;
    BOOL _forceBadgesVisible;
    BOOL _isUpdatingDisplayedContent;
    BOOL _isFavorite;
    BOOL _accessoryViewVisible;
    BOOL _lowMemoryMode;
    BOOL _toggleCTM;
    BOOL _revealsGainMapImage;
    BOOL __needsUpdateVideoPlayers;
    id<PUDisplayAsset> _asset;
    PUModelTileTransform *_modelTileTransform;
    double _focusValue;
    PUOperationStatus *_loadingStatus;
    NSProgress *_saveProgress;
    long long _saveState;
    long long _importState;
    NSObject<OS_dispatch_group> *_displayedContentUpdateGroup;
    PUBadgeInfoPromise *_badgeInfoPromise;
    long long _lastAccessoryViewVisibilityChangeReason;
    long long _lastContentOffsetChangeReason;
    double _contentOffsetOverrideFactor;
    long long _editStyle;
    long long _lastEditStyleChangeReason;
    long long _flippingFullSizeRenderState;
    long long __currentFavoriteOverrideRequest;
    long long _displayedContentUpdateCount;
    PUMediaProvider *_mediaProvider;
    NSNumber *_isFavoriteOverride;
    PUAssetReference *_assetReference;
    PUAssetSharedViewModel *_assetSharedViewModel;
    struct CGPoint _preferredContentOffset;
    struct CGPoint _overridingContentOffset;
}

@property (nonatomic, setter=_setCurrentFavoriteOverrideRequest:) long long _currentFavoriteOverrideRequest; // @synthesize _currentFavoriteOverrideRequest=__currentFavoriteOverrideRequest;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayers:) BOOL _needsUpdateVideoPlayers; // @synthesize _needsUpdateVideoPlayers=__needsUpdateVideoPlayers;
@property (nonatomic, getter=isAccessoryViewVisible) BOOL accessoryViewVisible; // @synthesize accessoryViewVisible=_accessoryViewVisible;
@property (readonly, nonatomic) PUBrowsingAnimatedImagePlayer *animatedImagePlayer;
@property (strong, nonatomic) id<PUDisplayAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property (strong, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
@property (copy, nonatomic) PUBadgeInfoPromise *badgeInfoPromise; // @synthesize badgeInfoPromise=_badgeInfoPromise;
@property (readonly, nonatomic) struct CGPoint contentOffset;
@property (nonatomic) double contentOffsetOverrideFactor; // @synthesize contentOffsetOverrideFactor=_contentOffsetOverrideFactor;
@property (readonly, nonatomic) PUAssetViewModelChange *currentChange;
@property (readonly, nonatomic) PUAssetViewModelChange *currentChangeIfExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayedContentUpdateCount; // @synthesize displayedContentUpdateCount=_displayedContentUpdateCount;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup; // @synthesize displayedContentUpdateGroup=_displayedContentUpdateGroup;
@property (readonly, nonatomic) long long editStyle; // @synthesize editStyle=_editStyle;
@property (nonatomic) long long flippingFullSizeRenderState; // @synthesize flippingFullSizeRenderState=_flippingFullSizeRenderState;
@property (nonatomic) double focusValue; // @synthesize focusValue=_focusValue;
@property (nonatomic) BOOL forceBadgesVisible; // @synthesize forceBadgesVisible=_forceBadgesVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long importState; // @synthesize importState=_importState;
@property (readonly, nonatomic) PUBrowsingIrisPlayer *irisPlayer;
@property (nonatomic, setter=_setFavorite:) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property (copy, nonatomic) NSNumber *isFavoriteOverride; // @synthesize isFavoriteOverride=_isFavoriteOverride;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL isUpdatingDisplayedContent; // @synthesize isUpdatingDisplayedContent=_isUpdatingDisplayedContent;
@property (nonatomic, setter=setUserTransformingTile:) BOOL isUserTransformingTile; // @synthesize isUserTransformingTile=_isUserTransformingTile;
@property (nonatomic, setter=_setLastAccessoryViewVisibilityChangeReason:) long long lastAccessoryViewVisibilityChangeReason; // @synthesize lastAccessoryViewVisibilityChangeReason=_lastAccessoryViewVisibilityChangeReason;
@property (nonatomic, setter=_setLastContentOffsetChangeReason:) long long lastContentOffsetChangeReason; // @synthesize lastContentOffsetChangeReason=_lastContentOffsetChangeReason;
@property (readonly, nonatomic) long long lastEditStyleChangeReason; // @synthesize lastEditStyleChangeReason=_lastEditStyleChangeReason;
@property (copy, nonatomic) PUOperationStatus *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property (readonly, nonatomic) BOOL lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property (strong, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (copy, nonatomic) PUModelTileTransform *modelTileTransform; // @synthesize modelTileTransform=_modelTileTransform;
@property (nonatomic) struct CGPoint overridingContentOffset; // @synthesize overridingContentOffset=_overridingContentOffset;
@property (nonatomic) struct CGPoint preferredContentOffset; // @synthesize preferredContentOffset=_preferredContentOffset;
@property (nonatomic) BOOL revealsGainMapImage; // @synthesize revealsGainMapImage=_revealsGainMapImage;
@property (strong, nonatomic) NSProgress *saveProgress; // @synthesize saveProgress=_saveProgress;
@property (readonly, nonatomic) long long saveState; // @synthesize saveState=_saveState;
@property (readonly) Class superclass;
@property (nonatomic) BOOL toggleCTM; // @synthesize toggleCTM=_toggleCTM;
@property (readonly, nonatomic) PUBrowsingVideoPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingAnimatedImage:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_invalidateVideoPlayers;
- (void)_pauseAndRewindVideoIfNeeded;
- (BOOL)_shouldPauseAndRewindVideo;
- (void)_updateFavoriteState;
- (void)_updatePropertiesFromAssetSharedViewModel;
- (void)_updateVideoPlayersIfNeeded;
- (void)_updateVideoPlayersLoadingAllowedIfNeeded;
- (void)dealloc;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (void)didUpdateDisplayedContent;
- (id)init;
- (id)initWithLowMemoryMode:(BOOL)arg1;
- (id)newViewModelChange;
- (void)registerChangeObserver:(id)arg1;
- (void)resetContentOffset;
- (void)setAccessoryViewVisible:(BOOL)arg1 changeReason:(long long)arg2;
- (void)setEditStyle:(long long)arg1 changeReason:(long long)arg2;
- (void)setPreferredContentOffset:(struct CGPoint)arg1 changeReason:(long long)arg2;
- (void)setSaveState:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)willUpdateDisplayedContent;

@end

