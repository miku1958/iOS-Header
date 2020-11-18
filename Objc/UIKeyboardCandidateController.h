//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/TUICandidateViewDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardCandidateList-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TUICandidateView, UIKBScreenTraits, UIKeyboardCandidateInlineFloatingView, UIKeyboardCandidateViewConfiguration, UIKeyboardCandidateViewState, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;
@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateController : NSObject <TUICandidateViewDelegate, UIGestureRecognizerDelegate, UIKeyboardCandidateList>
{
    BOOL _inlineRectIsVertical;
    BOOL _adjustForLeftHandBias;
    BOOL _reuseArrowButtonToExpandAssistantBarItems;
    BOOL _darkKeyboard;
    BOOL _darkKeyboardChanged;
    id<UIKeyboardCandidateControllerDelegate> _delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    NSString *_inlineText;
    double _splitGap;
    long long _activeCandidateViewType;
    UIKBScreenTraits *_screenTraits;
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    TUICandidateView *_bar;
    TUICandidateView *_key;
    TUICandidateView *_inlineView;
    UIKeyboardCandidateInlineFloatingView *_inlineViewContainer;
    NSMutableArray *_activeViews;
    UIKeyboardCandidateViewConfiguration *_barConfiguration;
    UIKeyboardCandidateViewConfiguration *_inlineConfiguration;
    UIKeyboardCandidateViewConfiguration *_keyConfiguration;
    UIKeyboardCandidateViewState *_barState;
    UIKeyboardCandidateViewState *_extendedBarState;
    UIKeyboardCandidateViewState *_extendedScrolledBarState;
    UIKeyboardCandidateViewState *_inlineViewState;
    UIKeyboardCandidateViewState *_extendedInlineViewState;
    double _additionalExtendedBarBackdropOffset;
    TIKeyboardCandidate *_currentCandidate;
    NSDictionary *_opacities;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIViewPropertyAnimator *_animator;
    struct CGRect _inlineRect;
}

@property (nonatomic) long long activeCandidateViewType; // @synthesize activeCandidateViewType=_activeCandidateViewType;
@property (readonly, nonatomic) NSArray *activeCandidateViews;
@property (strong, nonatomic) NSMutableArray *activeViews; // @synthesize activeViews=_activeViews;
@property (nonatomic) double additionalExtendedBarBackdropOffset; // @synthesize additionalExtendedBarBackdropOffset=_additionalExtendedBarBackdropOffset;
@property (nonatomic) BOOL adjustForLeftHandBias; // @synthesize adjustForLeftHandBias=_adjustForLeftHandBias;
@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (strong, nonatomic) TUICandidateView *bar; // @synthesize bar=_bar;
@property (strong, nonatomic) UIKeyboardCandidateViewConfiguration *barConfiguration; // @synthesize barConfiguration=_barConfiguration;
@property (readonly, nonatomic) BOOL barIsExtended;
@property (strong, nonatomic) UIKeyboardCandidateViewState *barState; // @synthesize barState=_barState;
@property (readonly, nonatomic) UIView *candidateBar;
@property (readonly, nonatomic) UIView *candidateKey;
@property (weak, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property (strong, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property (strong, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;
@property (nonatomic) BOOL darkKeyboard; // @synthesize darkKeyboard=_darkKeyboard;
@property (nonatomic) BOOL darkKeyboardChanged; // @synthesize darkKeyboardChanged=_darkKeyboardChanged;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIKeyboardCandidateControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIKeyboardCandidateViewState *extendedBarState; // @synthesize extendedBarState=_extendedBarState;
@property (strong, nonatomic) UIKeyboardCandidateViewState *extendedInlineViewState; // @synthesize extendedInlineViewState=_extendedInlineViewState;
@property (strong, nonatomic) UIKeyboardCandidateViewState *extendedScrolledBarState; // @synthesize extendedScrolledBarState=_extendedScrolledBarState;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *inlineCandidateView;
@property (strong, nonatomic) UIKeyboardCandidateViewConfiguration *inlineConfiguration; // @synthesize inlineConfiguration=_inlineConfiguration;
@property (nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property (nonatomic) BOOL inlineRectIsVertical; // @synthesize inlineRectIsVertical=_inlineRectIsVertical;
@property (copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property (strong, nonatomic) TUICandidateView *inlineView; // @synthesize inlineView=_inlineView;
@property (strong, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineViewContainer; // @synthesize inlineViewContainer=_inlineViewContainer;
@property (readonly, nonatomic) BOOL inlineViewIsExtended;
@property (strong, nonatomic) UIKeyboardCandidateViewState *inlineViewState; // @synthesize inlineViewState=_inlineViewState;
@property (readonly, nonatomic) BOOL isExtended;
@property (strong, nonatomic) TUICandidateView *key; // @synthesize key=_key;
@property (strong, nonatomic) UIKeyboardCandidateViewConfiguration *keyConfiguration; // @synthesize keyConfiguration=_keyConfiguration;
@property (strong, nonatomic) NSDictionary *opacities; // @synthesize opacities=_opacities;
@property (strong, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (nonatomic) BOOL reuseArrowButtonToExpandAssistantBarItems; // @synthesize reuseArrowButtonToExpandAssistantBarItems=_reuseArrowButtonToExpandAssistantBarItems;
@property (strong, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property (nonatomic) double splitGap; // @synthesize splitGap=_splitGap;
@property (readonly) Class superclass;

+ (double)candidateViewAnimationDuration;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;
- (void)acceptSelectedCandidate;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateAtIndex:(unsigned long long)arg1;
- (struct UIEdgeInsets)candidateBarEdgeInsetsForOrientation:(long long)arg1;
- (double)candidateBarHeight;
- (double)candidateBarHeightForOrientation:(long long)arg1;
- (double)candidateBarWidth;
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4;
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 generateFeedback:(BOOL)arg5;
- (void)candidateViewDidTapArrowButton:(id)arg1;
- (void)candidateViewDidTapInlineText:(id)arg1;
- (void)candidateViewNeedsToExpand:(id)arg1;
- (void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2;
- (long long)candidateViewTypeForView:(id)arg1;
- (void)candidateViewWillBeginDragging:(id)arg1;
- (id)candidates;
- (void)candidatesDidChange;
- (void)clearCurrentCandidate;
- (void)collapse;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (void)extendKeyboardBackdropHeight:(double)arg1;
- (id)firstNonEmptyActiveCandidateView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)handleNumberKey:(unsigned long long)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (BOOL)hasCandidates;
- (id)init;
- (BOOL)isExtendedList;
- (BOOL)isFloatingList;
- (id)keyboardBehaviors;
- (id)loadCandidateBar;
- (void)loadDefaultStates;
- (id)loadInlineCandidateView;
- (struct CGSize)maximumSizeForInlineView;
- (id)newCandidateKeyWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)panGestureRecognizerAction:(id)arg1;
- (void)removeInlineView;
- (void)resetSortControlIndexAfterCandidatesChanged;
- (void)revealHiddenCandidates;
- (long long)rowForCandidateAtIndex:(unsigned long long)arg1;
- (double)rowHeightForBarForOrientation:(long long)arg1;
- (id)secureCandidateRenderTraits;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setupAnimatorWithCurve:(long long)arg1;
- (void)setupPanGestureRecognizerIfNeeded;
- (BOOL)shouldShowDisambiguationCandidates;
- (BOOL)shouldShowDisambiguationCandidatesInExtendedView;
- (BOOL)shouldShowSortControlForConfiguration:(id)arg1;
- (BOOL)showCandidate:(id)arg1;
- (BOOL)showCandidate:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (id)snapshot;
- (id)statisticsIdentifier;
- (void)toggleBarExtended;
- (void)toggleBarExtendedWithAnimator:(id)arg1;
- (void)toggleInlineViewExtendedAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateConfigurations;
- (void)updateOpacitiesToState:(id)arg1;
- (void)updateStates;
- (void)updateStatesForBar;
- (void)updateStatesForInlineView;
- (void)updateStatesForKey;
- (void)updateStyles;
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;

@end

