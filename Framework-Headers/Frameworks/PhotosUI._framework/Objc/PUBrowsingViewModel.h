//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSDate, NSMutableSet, NSString, PUAssetReference, PUAssetsDataSource, PUCachedMapTable, PUMediaProvider;

@interface PUBrowsingViewModel : PUViewModel <PUAssetViewModelChangeObserver, PUAssetSharedViewModelChangeObserver>
{
    PUAssetReference *_currentAssetReference;
    NSDate *_currentAssetReferenceChangedDate;
    double _lastAssetWasCurrentForDuration;
    BOOL _browsingSpeedRegimeIsValid;
    BOOL _isBrowsingSpeedRegimeInvalidationScheduled;
    PUCachedMapTable *_viewModelByAssetReference;
    NSMutableSet *_invalidAssetViewModels;
    BOOL _allAssetViewModelsAreInvalid;
    PUCachedMapTable *_assetSharedViewModelByAsset;
    _Atomic int _ongoingEnumerations;
    BOOL _isScrubbing;
    BOOL _isScrolling;
    BOOL _isAnimatingAnyTransition;
    BOOL _accessoryViewsDefaultVisibility;
    BOOL _isChromeVisible;
    BOOL _presentingOverOneUp;
    BOOL _videoContentAllowed;
    PUAssetsDataSource *_assetsDataSource;
    double _currentAssetTransitionProgress;
    NSString *_transitionDriverIdentifier;
    long long _browsingSpeedRegime;
    long long _lastChromeVisibilityChangeReason;
    id _lastChromeVisibilityChangeContext;
    long long __userNavigationDistance;
    long long __scrubbingSessionDistance;
    NSMutableSet *__animatingTransitionIdentifiers;
    PUAssetReference *__trailingAssetReference;
    PUAssetReference *__leadingAssetReference;
    PUMediaProvider *_mediaProvider;
    struct CGSize _secondScreenSize;
}

@property (strong, nonatomic, setter=_setAnimatingTransitionIdentifiers:) NSMutableSet *_animatingTransitionIdentifiers; // @synthesize _animatingTransitionIdentifiers=__animatingTransitionIdentifiers;
@property (strong, nonatomic, setter=_setLeadingAssetReference:) PUAssetReference *_leadingAssetReference; // @synthesize _leadingAssetReference=__leadingAssetReference;
@property (nonatomic, setter=_setScrubbingSessionDistance:) long long _scrubbingSessionDistance; // @synthesize _scrubbingSessionDistance=__scrubbingSessionDistance;
@property (strong, nonatomic, setter=_setTrailingAssetReference:) PUAssetReference *_trailingAssetReference; // @synthesize _trailingAssetReference=__trailingAssetReference;
@property (nonatomic, setter=_setUserNavigationDistance:) long long _userNavigationDistance; // @synthesize _userNavigationDistance=__userNavigationDistance;
@property (nonatomic) BOOL accessoryViewsDefaultVisibility; // @synthesize accessoryViewsDefaultVisibility=_accessoryViewsDefaultVisibility;
@property (strong, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property (nonatomic, setter=_setBrowsingSpeedRegime:) long long browsingSpeedRegime; // @synthesize browsingSpeedRegime=_browsingSpeedRegime;
@property (strong, nonatomic) PUAssetReference *currentAssetReference;
@property (readonly, nonatomic) double currentAssetTransitionProgress; // @synthesize currentAssetTransitionProgress=_currentAssetTransitionProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, setter=_setAnimatingAnyTransition:) BOOL isAnimatingAnyTransition; // @synthesize isAnimatingAnyTransition=_isAnimatingAnyTransition;
@property (nonatomic, setter=setChromeVisible:) BOOL isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
@property (nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property (nonatomic) BOOL isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property (strong, nonatomic, setter=_setLastChromeVisibilityChangeContext:) id lastChromeVisibilityChangeContext; // @synthesize lastChromeVisibilityChangeContext=_lastChromeVisibilityChangeContext;
@property (nonatomic, setter=_setLastChromeVisibilityChangeReason:) long long lastChromeVisibilityChangeReason; // @synthesize lastChromeVisibilityChangeReason=_lastChromeVisibilityChangeReason;
@property (strong, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (nonatomic, getter=isPresentingOverOneUp) BOOL presentingOverOneUp; // @synthesize presentingOverOneUp=_presentingOverOneUp;
@property (nonatomic) struct CGSize secondScreenSize; // @synthesize secondScreenSize=_secondScreenSize;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transitionDriverIdentifier; // @synthesize transitionDriverIdentifier=_transitionDriverIdentifier;
@property (nonatomic) BOOL videoContentAllowed; // @synthesize videoContentAllowed=_videoContentAllowed;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_assetSharedViewModelForAsset:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_badgeInfoPromiseForAssetReference:(id)arg1;
- (double)_focusValueForAsset:(id)arg1;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAsyncBrowsingSpeedRegimeInvalidation;
- (void)_invalidateAllAssetViewModels;
- (void)_invalidateAssetViewModel:(id)arg1;
- (void)_invalidateBrowsingSpeedRegime;
- (void)_invalidateBrowsingSpeedRegimeAfterMaximumDelay:(double)arg1;
- (void)_invalidateNeighboringAssetViewModels;
- (BOOL)_isAssetInFocus:(id)arg1;
- (BOOL)_needsUpdate;
- (void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(long long)arg1;
- (void)_setCurrentAssetTransitionProgress:(double)arg1;
- (void)_setTransitionDriverIdentifier:(id)arg1;
- (void)_updateAssetViewModel:(id)arg1;
- (void)_updateAssetViewModelsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateNeighboringAssetReferences;
- (void)_updateScrubSpeedRegimeIfNeeded;
- (id)activeAssetReferences;
- (id)assetSharedViewModelForAsset:(id)arg1;
- (id)assetViewModelForAssetReference:(id)arg1;
- (id)currentChange;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (id)init;
- (id)newViewModelChange;
- (void)registerChangeObserver:(id)arg1;
- (void)setAccessoryViewsDefaultVisibility:(BOOL)arg1 changeReason:(long long)arg2;
- (void)setAnimating:(BOOL)arg1 transitionWithIdentifier:(id)arg2;
- (void)setChromeVisible:(BOOL)arg1 changeReason:(long long)arg2;
- (void)setChromeVisible:(BOOL)arg1 changeReason:(long long)arg2 context:(id)arg3;
- (void)setCurrentAssetReference:(id)arg1 transitionProgress:(double)arg2 transitionDriverIdentifier:(id)arg3;
- (void)unregisterChangeObserver:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

