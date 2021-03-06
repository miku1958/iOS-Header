//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/UIKeyboardCandidateList-Protocol.h>
#import <UIKitCore/_UIDynamicCaretDocumentContentDelegate-Protocol.h>

@class NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives, _UIDynamicCaretHelpLabel, _UIDynamicCaretInput, _UIDynamicCaretNoContentView;
@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate>
{
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    BOOL _justDeleted;
    _UIDynamicCaretInput *_inputView;
    _UIDynamicCaretAlternatives *_alternativesView;
    _UIDynamicCaretNoContentView *_noContentView;
    _UIDynamicCaretHelpLabel *_helpLabel;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property (strong, nonatomic) _UIDynamicCaretAlternatives *alternativesView; // @synthesize alternativesView=_alternativesView;
@property (strong, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIDynamicCaretHelpLabel *helpLabel; // @synthesize helpLabel=_helpLabel;
@property (strong, nonatomic) _UIDynamicCaretInput *inputView; // @synthesize inputView=_inputView;
@property (nonatomic) BOOL isActive;
@property (strong, nonatomic) _UIDynamicCaretNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alternativeTappedAtIndex:(long long)arg1;
- (id)backgroundImage;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)didMoveToSuperview;
- (void)displayAlternatives:(BOOL)arg1;
- (BOOL)hasCandidates;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isDeleteCandidate:(id)arg1;
- (BOOL)isExtendedList;
- (BOOL)isFloatingList;
- (id)keyboardBehaviors;
- (void)layoutSubviews;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
- (void)setDocumentHasContent:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (id)statisticsIdentifier;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

