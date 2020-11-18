//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>

@class NSArray, NSString, TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidateLogButton, UIKeyboardCandidatePocketShadow;
@protocol UIKeyboardCandidateList, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id<UIKeyboardCandidateListDelegate> _delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    UIKBCandidateCollectionView *_candidatesCollectionView;
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    UIKeyboardCandidatePocketShadow *_leftBorder;
    CDStruct_227bb23d _visualStyling;
    UIKeyboardCandidateLogButton *_logButton;
    unsigned long long _dummyCellCount;
    double _dummyCellWidth;
}

@property (readonly, nonatomic) id<UIKeyboardCandidateList> candidateList;
@property (strong, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property (readonly, nonatomic) NSArray *candidates;
@property (strong, nonatomic) UIKBCandidateCollectionView *candidatesCollectionView; // @synthesize candidatesCollectionView=_candidatesCollectionView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIKeyboardCandidateListDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dummyCellCount; // @synthesize dummyCellCount=_dummyCellCount;
@property (nonatomic) double dummyCellWidth; // @synthesize dummyCellWidth=_dummyCellWidth;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIKeyboardCandidatePocketShadow *leftBorder; // @synthesize leftBorder=_leftBorder;
@property (strong, nonatomic) UIKeyboardCandidateLogButton *logButton; // @synthesize logButton=_logButton;
@property (strong, nonatomic) UIKeyboardCandidatePocketShadow *pocketShadow; // @synthesize pocketShadow=_pocketShadow;
@property (readonly) Class superclass;
@property (nonatomic) CDStruct_227bb23d visualStyling; // @synthesize visualStyling=_visualStyling;

+ (Class)cellClass;
+ (double)shadowYForBounds:(struct CGRect)arg1 shadowHeight:(double)arg2;
- (void).cxx_destruct;
- (id)_inheritedRenderConfig;
- (void)_setRenderConfig:(id)arg1;
- (void)calculateDummyCellAttributes;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (BOOL)hasCandidates;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (BOOL)isExtendedList;
- (BOOL)isFloatingList;
- (void)jumpToCompositions;
- (id)keyboardBehaviors;
- (unsigned long long)maxNumberOfProactiveCells;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadDataByAppendingAtEnd:(BOOL)arg1;
- (id)secureCandidateRenderTraits;
- (void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
- (void)setRenderConfig:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (void)showNextPage;
- (double)singleCellWidthForProactiveCellCount:(unsigned long long)arg1;
- (id)statisticsIdentifier;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateLeftBorderForKeyplane:(id)arg1;
- (void)updatePocketShadowForKeyplane:(id)arg1;

@end

