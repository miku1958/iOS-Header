//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/PUAdjustmentsModeBar.h>

#import <PhotosEditUI/UICollectionViewDataSource-Protocol.h>

@class NSArray, NSMapTable, NSString, PUAdjustmentsMode, PUSlidersCollectionView, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface PURegularAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource>
{
    NSMapTable *_supermodeButtonsByMode;
    NSMapTable *_supermodeLabelsByMode;
    NSMapTable *_supermodeTitleBackgroundByMode;
    UIView *_modeDetailView;
    PUSlidersCollectionView *_modeDetailSlidersCollectionView;
    UIButton *_expansionButton;
    NSArray *_supermodeButtonsConstraints;
    NSArray *_modeDetailViewConstraints;
    NSArray *_modeDetailSlidersCollectionViewConstraints;
    NSArray *_expansionButtonConstraints;
    NSArray *__availableSupermodes;
    NSArray *__visibleSliderModes;
}

@property (readonly, nonatomic) PUAdjustmentsMode *_expandedSupermode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableSupermodes;
- (void)_createNewModeDetailViewAndSubviews;
- (void)_handleModeButton:(id)arg1;
- (id)_layoutConstraintsForCollapsedModeDetailView:(id)arg1 mode:(id)arg2;
- (id)_layoutConstraintsForExpandedModeDetailView:(id)arg1 mode:(id)arg2;
- (double)_slidersViewLongSideLength;
- (void)_updateSupermodeButtons;
- (void)_updateViewsForExpandedSupermode:(id)arg1 fromOldSupermode:(id)arg2 animated:(BOOL)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)currentSlidersCollectionView;
- (id)newConstraintsForModePickerList:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSelectedMode:(id)arg1 animated:(BOOL)arg2;
- (void)setSlidersLongContentLength:(double)arg1;
- (void)updateConstraints;
- (void)updateEnabledForCurrentMode;
- (id)visibleSliderAdjustmentModes;
- (BOOL)wantsToHandleEventAtPoint:(struct CGPoint)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

