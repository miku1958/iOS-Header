//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAssetCollectionReference, PXCuratedLibraryViewModel, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject
{
    PXCuratedLibraryViewModel *_viewModel;
    long long _zoomLevel;
    long long _skimmingZoomLevel;
    id _dataSourcePauseToken;
    BOOL _hintsVisible;
    BOOL _isPlayingSlideshow;
    BOOL _isInteractionInProgress;
    PXAssetCollectionReference *_containingAssetCollectionReference;
    PXIndexPathSet *_indexPathSetForSkimming;
    struct PXSimpleIndexPath _initialIndexPath;
    struct PXSimpleIndexPath _skimmedIndexPath;
}

@property (readonly, nonatomic) BOOL canStartSkimming;
@property (readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference; // @synthesize containingAssetCollectionReference=_containingAssetCollectionReference;
@property (readonly, nonatomic) BOOL hintsVisible; // @synthesize hintsVisible=_hintsVisible;
@property (readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming; // @synthesize indexPathSetForSkimming=_indexPathSetForSkimming;
@property (readonly, nonatomic) struct PXSimpleIndexPath initialIndexPath; // @synthesize initialIndexPath=_initialIndexPath;
@property (readonly, nonatomic) BOOL isInteractionInProgress; // @synthesize isInteractionInProgress=_isInteractionInProgress;
@property (readonly, nonatomic) BOOL isPlayingSlideshow; // @synthesize isPlayingSlideshow=_isPlayingSlideshow;
@property (nonatomic) struct PXSimpleIndexPath skimmedIndexPath; // @synthesize skimmedIndexPath=_skimmedIndexPath;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_prepareIndexesForAssetCollectionReference:(id)arg1 willStartSkimming:(BOOL)arg2 willStartSlideshow:(BOOL)arg3;
- (void)_updateViewModel;
- (id)initWithViewModel:(id)arg1;
- (void)persistSkimmingState;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)arg1;
- (void)prepareForSkimmingInAssetCollectionReference:(id)arg1;
- (void)prepareForSlideshowForAssetCollectionReference:(id)arg1;
- (void)tearDownAfterSkimmingShowHints:(BOOL)arg1 persistState:(BOOL)arg2;
- (void)transitionToSkimming;
- (void)transitionToSlideshow;
- (id)validatedAssetCollectionReference:(id)arg1;

@end
