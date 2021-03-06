//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInputViewController.h>

#import <TextInputUI/TUIEmojiSearchResultsCollectionViewControllerDelegate-Protocol.h>
#import <TextInputUI/TUIEmojiSearchSourceDelegate-Protocol.h>
#import <TextInputUI/TUIEmojiSearchTextFieldDelegate-Protocol.h>
#import <TextInputUI/UIPredictiveViewController-Protocol.h>

@class NSArray, NSDate, NSLayoutConstraint, NSString, NSTimer, TUIEmojiSearchAnalyticsSession, TUIEmojiSearchResultsCollectionViewController, TUIEmojiSearchSource, TUIEmojiSearchView, TUIEmojiVariantSelectorView, TouchExclusionView, UITapGestureRecognizer, UIViewController, _UIKeyboardFeedbackGenerator;
@protocol TUIEmojiSearchInputViewControllerDelegate, UIPredictiveViewController;

@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController>
{
    TUIEmojiSearchSource *_emojiSearchSource;
    TUIEmojiSearchResultsCollectionViewController *_resultsViewController;
    TUIEmojiVariantSelectorView *_variantSelectorView;
    UITapGestureRecognizer *_variantSelectorDismissGesture;
    TouchExclusionView *_variantSelectorDismissOverlayView;
    NSTimer *_resultsUpdateRateLimitTimer;
    NSArray *_rateLimitedResults;
    NSString *_rateLimitedSearchQuery;
    BOOL _canAutocorrectWithCurrentInputMode;
    NSTimer *_waitForAutocorrectionDelayTimer;
    NSString *_exactSearchQuery;
    NSString *_autocorrectedSearchQuery;
    NSDate *_lastActivationDate;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    TUIEmojiSearchAnalyticsSession *_analyticsSession;
    _UIKeyboardFeedbackGenerator *_feedbackGenerator;
    id<TUIEmojiSearchInputViewControllerDelegate> _delegate;
    TUIEmojiSearchView *_emojiSearchView;
    UIViewController<UIPredictiveViewController> *_childPredictionViewController;
}

@property (strong, nonatomic) UIViewController<UIPredictiveViewController> *childPredictionViewController; // @synthesize childPredictionViewController=_childPredictionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUIEmojiSearchInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly, nonatomic) TUIEmojiSearchView *emojiSearchView; // @synthesize emojiSearchView=_emojiSearchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_didRecognizeVariantDismissGesture:(id)arg1;
- (void)_dismissVariantSelector;
- (void)_displayResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;
- (void)_keyboardInputModeDidChange:(id)arg1;
- (struct UIEdgeInsets)_keyboardInsets;
- (void)_selectedEmojiString:(id)arg1;
- (void)_variantSelectorValueChanged:(id)arg1;
- (void)autocorrectionListDidBecomeAvailable:(id)arg1;
- (void)emojiSearchResultsController:(id)arg1 didRequestVariantSelectorForEmojiToken:(id)arg2 fromRect:(struct CGRect)arg3;
- (void)emojiSearchResultsController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)emojiSearchSource:(id)arg1 didProduceResults:(id)arg2 forExactQuery:(id)arg3 autocorrectedQuery:(id)arg4;
- (void)emojiSearchTextField:(id)arg1 didChangeSearchString:(id)arg2;
- (void)emojiSearchTextFieldDidBecomeActive:(id)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(id)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(id)arg1;
- (void)emojiSearchTextFieldWillClear:(id)arg1;
- (BOOL)hidesExpandableButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

