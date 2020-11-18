//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>
#import <UIKit/UIKeyboardCandidateListDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, TIKeyboardCandidateResultSet, UIImageView, UIKBCandidateCollectionView, UIKBThemedView, UIKeyboardCandidatePocketShadow;
@protocol UIKeyboardCandidateBarDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource>
{
    BOOL _canExtend;
    BOOL _forceReloadInitiallyHiddenCandidates;
    BOOL _shouldSkipLayoutUntilScrollViewAnimationEnds;
    BOOL _didSkipLayout;
    NSString *_inlineText;
    UIImageView *_candidateMaskView;
    id<UIKeyboardCandidateBarDelegate> _delegate;
    double _upArrowWidth;
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    NSArray *_candidateViews;
    unsigned long long _currentCandidateViewIndex;
    UIKBThemedView *_secondaryCandidatesViewEdgeGradient;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    NSArray *_filteredCandidates;
    UIKeyboardCandidatePocketShadow *_leftBorder;
    UIKeyboardCandidatePocketShadow *_rightBorder;
    NSIndexPath *_dragStartNextPageIndexPath;
    NSIndexPath *_dragStartPreviousPageIndexPath;
    CDUnknownBlockType _skippedSetCandidatesBlock;
    struct CGPoint _dragStartOffset;
}

@property (nonatomic) BOOL canExtend; // @synthesize canExtend=_canExtend;
@property (nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property (strong, nonatomic) UIImageView *candidateMaskView; // @synthesize candidateMaskView=_candidateMaskView;
@property (strong, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property (strong, nonatomic) NSArray *candidateViews; // @synthesize candidateViews=_candidateViews;
@property (readonly, nonatomic) TIKeyboardCandidateResultSet *candidates;
@property (readonly, nonatomic) UIKBCandidateCollectionView *currentCandidateView;
@property (nonatomic) unsigned long long currentCandidateViewIndex; // @synthesize currentCandidateViewIndex=_currentCandidateViewIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<UIKeyboardCandidateBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSkipLayout; // @synthesize didSkipLayout=_didSkipLayout;
@property (copy, nonatomic) NSIndexPath *dragStartNextPageIndexPath; // @synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath;
@property (nonatomic) struct CGPoint dragStartOffset; // @synthesize dragStartOffset=_dragStartOffset;
@property (copy, nonatomic) NSIndexPath *dragStartPreviousPageIndexPath; // @synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath;
@property (strong, nonatomic) NSArray *filteredCandidates; // @synthesize filteredCandidates=_filteredCandidates;
@property (nonatomic) BOOL forceReloadInitiallyHiddenCandidates; // @synthesize forceReloadInitiallyHiddenCandidates=_forceReloadInitiallyHiddenCandidates;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property (strong, nonatomic) UIKeyboardCandidatePocketShadow *leftBorder; // @synthesize leftBorder=_leftBorder;
@property (strong, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder; // @synthesize rightBorder=_rightBorder;
@property (strong, nonatomic) UIKBThemedView *secondaryCandidatesViewEdgeGradient; // @synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient;
@property (nonatomic) BOOL shouldSkipLayoutUntilScrollViewAnimationEnds; // @synthesize shouldSkipLayoutUntilScrollViewAnimationEnds=_shouldSkipLayoutUntilScrollViewAnimationEnds;
@property (copy, nonatomic) CDUnknownBlockType skippedSetCandidatesBlock; // @synthesize skippedSetCandidatesBlock=_skippedSetCandidatesBlock;
@property (readonly) Class superclass;
@property (nonatomic) double upArrowWidth; // @synthesize upArrowWidth=_upArrowWidth;

+ (double)defaultCandidateWidth;
+ (double)defaultPagingDistanceThreshold;
+ (double)defaultPagingVelocityThreshold;
+ (double)height;
+ (double)heightForInterfaceOrientation:(long long)arg1;
+ (double)heightForLastRow;
+ (double)heightForRowAtIndex:(unsigned long long)arg1;
+ (double)heightForRowAtIndex:(unsigned long long)arg1 interfaceOrientation:(long long)arg2;
+ (double)interRowOverlap;
+ (unsigned long long)numberOfRows;
+ (unsigned long long)numberOfRowsForInterfaceOrientation:(long long)arg1;
+ (void)setScreenTraits:(id)arg1;
+ (double)widthForCurrentScreenTraits;
- (Class)_barCellClassForSection:(long long)arg1;
- (id)_candidateViewForSection:(long long)arg1;
- (void)_clearData;
- (unsigned long long)_countOfItemsInSection:(long long)arg1;
- (double)_emptySpaceForItemsToIndex:(unsigned long long)arg1 inSection:(long long)arg2;
- (id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2;
- (id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1;
- (id)_indexPathForFirstVisibleItem;
- (id)_indexPathForLastVisibleItem;
- (id)_itemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2;
- (id)_nextPageIndexPath;
- (void)_performSkippedLayoutIfNeeded;
- (id)_previousPageIndexPath;
- (void)_reloadData;
- (void)_reloadDataByAppendingAtEnd:(BOOL)arg1 initiallyHiddenCandidatesChanged:(BOOL)arg2;
- (void)_scrollToFirstCandidateInSection:(long long)arg1 withAnimation:(BOOL)arg2;
- (long long)_sectionForSectionIndex:(unsigned long long)arg1 candidateView:(id)arg2;
- (unsigned long long)_sectionIndexForSection:(long long)arg1;
- (void)_showCandidateAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 scrollCellToVisible:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_showPageAtIndexPath:(id)arg1;
- (BOOL)_showingInitiallyHiddenCandidates;
- (void)_stepSelectedCandidateInDirection:(BOOL)arg1;
- (void)_stepSelectedCandidateInDirection:(BOOL)arg1 candidateView:(id)arg2 section:(long long)arg3;
- (void)_updateBorders;
- (void)_updateCanExtendState;
- (void)_updateCandidateViews;
- (double)_widthOfItemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2;
- (void)adjustSelectionToNearestVisibleCandidate;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateBarLayoutDidFinishPreparingLayout;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidatesDidChange;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)count;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (BOOL)hasCandidates;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)revealHiddenCandidates;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (struct CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;
- (id)statisticsIdentifier;
- (unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
- (id)visibleCandidates;

@end
