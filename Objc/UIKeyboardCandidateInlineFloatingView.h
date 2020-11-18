//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>
#import <UIKit/UIKeyboardCandidateListDelegate-Protocol.h>

@class NSString, TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl;
@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    BOOL _reducedWidth;
    BOOL _showHiddenCandidatesOnly;
    int _position;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSString *_inlineText;
    double _maxX;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    UIKeyboardCandidateSortControl *_sortSelectionBar;
    struct CGRect _inlineRect;
    struct CGRect _previousCollapsedFrame;
}

@property (nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property (strong, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property (readonly, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property (copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property (nonatomic) double maxX; // @synthesize maxX=_maxX;
@property (nonatomic) int position; // @synthesize position=_position;
@property (nonatomic) struct CGRect previousCollapsedFrame; // @synthesize previousCollapsedFrame=_previousCollapsedFrame;
@property (readonly, nonatomic, getter=isReducedWidth) BOOL reducedWidth; // @synthesize reducedWidth=_reducedWidth;
@property (nonatomic) BOOL showHiddenCandidatesOnly; // @synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly;
@property (readonly, nonatomic) UIKeyboardCandidateSortControl *sortSelectionBar; // @synthesize sortSelectionBar=_sortSelectionBar;
@property (readonly) Class superclass;

- (id)_inheritedRenderConfig;
- (id)activeCandidateList;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3;
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(double)arg2;
- (struct CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect)arg2;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidates;
- (void)candidatesDidChange;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)expand;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (BOOL)handleNumberKey:(unsigned long long)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)hasCandidates;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAcceptableFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (void)layout;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (void)revealHiddenCandidates;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(BOOL)arg2;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 showHiddenCandidatesOnly:(BOOL)arg7;
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
- (struct CGSize)size;
- (void)sortSelectionBarAction;
- (id)statisticsIdentifier;
- (void)updateLayerBorderWidth;

@end

