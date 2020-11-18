//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface PUBrowsingViewModelChange : PUViewModelChange
{
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
    BOOL _assetsDataSourceDidChange;
    BOOL _currentAssetDidChange;
    BOOL _currentAssetTransitionProgressDidChange;
    BOOL _transitionDriverIdentifierDidChange;
    BOOL _browsingSpeedRegimeDidChange;
    BOOL _isScrubbingDidChange;
    BOOL _isScrollingDidChange;
    BOOL _isAnimatingAnyTransitionDidChange;
    BOOL _secondScreenSizeDidChange;
    BOOL _chromeVisibilityDidChange;
    BOOL _commentsVisibilityDidChange;
    BOOL _presentingOverOneUpDidChange;
}

@property (readonly, nonatomic) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property (readonly, nonatomic) NSMutableDictionary *_mutableViewModelChangesByAssetReference;
@property (readonly, nonatomic) NSMapTable *assetSharedViewModelChangesByAsset;
@property (readonly, nonatomic) NSDictionary *assetViewModelChangesByAssetReference;
@property (nonatomic) BOOL assetsDataSourceDidChange; // @synthesize assetsDataSourceDidChange=_assetsDataSourceDidChange;
@property (nonatomic) BOOL browsingSpeedRegimeDidChange; // @synthesize browsingSpeedRegimeDidChange=_browsingSpeedRegimeDidChange;
@property (nonatomic) BOOL chromeVisibilityDidChange; // @synthesize chromeVisibilityDidChange=_chromeVisibilityDidChange;
@property (nonatomic) BOOL commentsVisibilityDidChange; // @synthesize commentsVisibilityDidChange=_commentsVisibilityDidChange;
@property (nonatomic) BOOL currentAssetDidChange; // @synthesize currentAssetDidChange=_currentAssetDidChange;
@property (nonatomic) BOOL currentAssetTransitionProgressDidChange; // @synthesize currentAssetTransitionProgressDidChange=_currentAssetTransitionProgressDidChange;
@property (nonatomic) BOOL isAnimatingAnyTransitionDidChange; // @synthesize isAnimatingAnyTransitionDidChange=_isAnimatingAnyTransitionDidChange;
@property (nonatomic) BOOL isScrollingDidChange; // @synthesize isScrollingDidChange=_isScrollingDidChange;
@property (nonatomic) BOOL isScrubbingDidChange; // @synthesize isScrubbingDidChange=_isScrubbingDidChange;
@property (nonatomic) BOOL presentingOverOneUpDidChange; // @synthesize presentingOverOneUpDidChange=_presentingOverOneUpDidChange;
@property (nonatomic) BOOL secondScreenSizeDidChange; // @synthesize secondScreenSizeDidChange=_secondScreenSizeDidChange;
@property (nonatomic) BOOL transitionDriverIdentifierDidChange; // @synthesize transitionDriverIdentifierDidChange=_transitionDriverIdentifierDidChange;

- (void).cxx_destruct;
- (void)_setAnimatingAnyTransitionDidChange:(BOOL)arg1;
- (void)_setAssetsDataSourceDidChange:(BOOL)arg1;
- (void)_setBrowsingSpeedRegimeDidChange:(BOOL)arg1;
- (void)_setChromeVisibilityDidChange:(BOOL)arg1;
- (void)_setCommentsVisibilityDidChange:(BOOL)arg1;
- (void)_setCurrentAssetDidChange:(BOOL)arg1;
- (void)_setCurrentAssetTransitionProgressDidChange:(BOOL)arg1;
- (void)_setIsScrollingDidChange:(BOOL)arg1;
- (void)_setIsScrubbingDidChange:(BOOL)arg1;
- (void)_setPresentingOverOneUpDidChange:(BOOL)arg1;
- (void)_setSecondScreenSizeDidChange:(BOOL)arg1;
- (void)_setTransitionDriverIdentifierDidChange:(BOOL)arg1;
- (BOOL)hasChanges;

@end
