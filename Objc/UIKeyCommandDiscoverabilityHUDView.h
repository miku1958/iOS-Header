//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDColumnViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIBlurEffect, UICollectionView, UICollectionViewFlowLayout, UIKeyCommandDiscoverabilityHUDVisualStyle, UIPageControl, UIVibrancyEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDView : UIView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *_keyCommands;
    UIView *_HUDOutlineView;
    NSLayoutConstraint *_HUDOutlineViewWidthConstraint;
    NSLayoutConstraint *_HUDOutlineViewHeightConstraint;
    UIBlurEffect *_blurEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_backdropView;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewTopConstraint;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    NSLayoutConstraint *_collectionViewLeadingConstraint;
    NSLayoutConstraint *_collectionViewTrailingConstraint;
    UIPageControl *_pageControl;
    NSLayoutConstraint *_pageControlYAnchor;
    double _fontScaleFactor;
    unsigned long long _pageCount;
    unsigned long long _cellsPerColumn;
    struct CGSize _columnSize;
    BOOL _twoColumnsPerPage;
    BOOL _shouldUseWordsNotSymbols;
    UIKeyCommandDiscoverabilityHUDVisualStyle *_visualStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_shouldUseWordsNotSymbols) BOOL shouldUseWordsNotSymbols; // @synthesize shouldUseWordsNotSymbols=_shouldUseWordsNotSymbols;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIKeyCommandDiscoverabilityHUDVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;

- (void).cxx_destruct;
- (struct CGSize)_bestColumnSizeWithCellsPerColumn:(unsigned long long)arg1 maxColumnSize:(struct CGSize)arg2 columnCount:(unsigned long long)arg3 usingColumnView:(id)arg4 getFontScaleFactor:(double *)arg5;
- (id)_columnViewForColumnIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (id)_discoverabilityTitleForKeyCommand:(id)arg1;
- (id)_displayInputAndModifierFlagsForInput:(id)arg1 modifierFlags:(long long)arg2;
- (id)_keyCommandsForColumnIndex:(unsigned long long)arg1 withCellsPerColumn:(unsigned long long)arg2;
- (void)_pageControlValueChanged:(id)arg1;
- (id)_stringForInput:(id)arg1 withModifierFlags:(long long)arg2;
- (id)_stringForModifierFlags:(long long)arg1;
- (void)animateIn;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 descriptionStringForKeyCommand:(id)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 inputStringForKeyCommand:(id)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 modifiersStringForKeyCommand:(id)arg2;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard *)arg2;
- (void)recalculatePages;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end
