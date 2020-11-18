//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@class PUBrowsingAnimatedImagePlayerChange, PUBrowsingIrisPlayerChange, PUBrowsingVideoPlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange
{
    BOOL _assetChanged;
    BOOL _modelTileTransformChanged;
    BOOL _isUserTransformingTileDidChange;
    BOOL _focusValueChanged;
    BOOL _loadingStatusChanged;
    BOOL _saveProgressChanged;
    BOOL _saveStateChanged;
    BOOL _importStateChanged;
    BOOL _forceBadgesVisibleChanged;
    BOOL _badgeInfoChanged;
    BOOL _isUpdatingDisplayedContentChanged;
    BOOL _isFavoriteChanged;
    BOOL _accessoryViewVisibilityChanged;
    BOOL _contentOffsetChanged;
    BOOL _isInEditModeChanged;
    BOOL _toggleCTMChanged;
    BOOL _flippingFullSizeRenderStateChanged;
    PUBrowsingVideoPlayerChange *_videoPlayerChange;
    PUBrowsingIrisPlayerChange *_irisPlayerChange;
    PUBrowsingAnimatedImagePlayerChange *_animatedImageChange;
}

@property (nonatomic, setter=_setAccessoryViewVisibilityChanged:) BOOL accessoryViewVisibilityChanged; // @synthesize accessoryViewVisibilityChanged=_accessoryViewVisibilityChanged;
@property (strong, nonatomic, setter=_setAnimatedImageChange:) PUBrowsingAnimatedImagePlayerChange *animatedImageChange; // @synthesize animatedImageChange=_animatedImageChange;
@property (nonatomic, setter=_setAssetChanged:) BOOL assetChanged; // @synthesize assetChanged=_assetChanged;
@property (nonatomic, setter=_setBadgeInfoChanged:) BOOL badgeInfoChanged; // @synthesize badgeInfoChanged=_badgeInfoChanged;
@property (nonatomic, setter=_setContentOffsetChanged:) BOOL contentOffsetChanged; // @synthesize contentOffsetChanged=_contentOffsetChanged;
@property (nonatomic, setter=_setFlippingFullSizeRenderStateChanged:) BOOL flippingFullSizeRenderStateChanged; // @synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged;
@property (nonatomic, setter=_setFocusValueChanged:) BOOL focusValueChanged; // @synthesize focusValueChanged=_focusValueChanged;
@property (nonatomic, setter=_setForceBadgesVisibleChanged:) BOOL forceBadgesVisibleChanged; // @synthesize forceBadgesVisibleChanged=_forceBadgesVisibleChanged;
@property (nonatomic, setter=_setImportStateChanged:) BOOL importStateChanged; // @synthesize importStateChanged=_importStateChanged;
@property (strong, nonatomic, setter=_setIrisPlayerChange:) PUBrowsingIrisPlayerChange *irisPlayerChange; // @synthesize irisPlayerChange=_irisPlayerChange;
@property (nonatomic, setter=_setIsFavoriteChanged:) BOOL isFavoriteChanged; // @synthesize isFavoriteChanged=_isFavoriteChanged;
@property (nonatomic, setter=_setIsInEditModeChanged:) BOOL isInEditModeChanged; // @synthesize isInEditModeChanged=_isInEditModeChanged;
@property (nonatomic, setter=_setIsUpdatingDisplayedContentChanged:) BOOL isUpdatingDisplayedContentChanged; // @synthesize isUpdatingDisplayedContentChanged=_isUpdatingDisplayedContentChanged;
@property (nonatomic, setter=_setUserTransformingTileDidChange:) BOOL isUserTransformingTileDidChange; // @synthesize isUserTransformingTileDidChange=_isUserTransformingTileDidChange;
@property (nonatomic, setter=_setLoadingStatusChanged:) BOOL loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;
@property (nonatomic, setter=_setModelTileTransformChanged:) BOOL modelTileTransformChanged; // @synthesize modelTileTransformChanged=_modelTileTransformChanged;
@property (nonatomic, setter=_setSaveProgressChanged:) BOOL saveProgressChanged; // @synthesize saveProgressChanged=_saveProgressChanged;
@property (nonatomic, setter=_setSaveStateChanged:) BOOL saveStateChanged; // @synthesize saveStateChanged=_saveStateChanged;
@property (nonatomic, setter=_setToggleCTMChanged:) BOOL toggleCTMChanged; // @synthesize toggleCTMChanged=_toggleCTMChanged;
@property (strong, nonatomic, setter=_setVideoPlayerChange:) PUBrowsingVideoPlayerChange *videoPlayerChange; // @synthesize videoPlayerChange=_videoPlayerChange;

- (void).cxx_destruct;
- (BOOL)hasChanges;

@end
