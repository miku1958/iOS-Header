//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/TUIPredictionViewDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardAutocorrectionObserver-Protocol.h>
#import <UIKitCore/UIPredictiveViewController-Protocol.h>

@class NSArray, NSDate, NSString, NSTimer, TIAutocorrectionList, TUIPredictionView;

__attribute__((visibility("hidden")))
@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController>
{
    NSTimer *_updateUITimer;
    NSDate *_lastUIUpdateTime;
    TUIPredictionView *_predictionView;
    TIAutocorrectionList *_cachedAutocorrectionList;
}

@property (strong, nonatomic) TIAutocorrectionList *cachedAutocorrectionList; // @synthesize cachedAutocorrectionList=_cachedAutocorrectionList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TUIPredictionView *predictionView; // @synthesize predictionView=_predictionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_autocorrectionListContainsContinuousPathConversions:(id)arg1;
- (BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (id)_currentTextSuggestions;
- (void)_inputModeDidChange;
- (void)_inputResponderDidChangeNotification:(id)arg1;
- (BOOL)_isVisibleForAutocorrectionType:(long long)arg1;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg1;
- (void)_registerAsAutocorrectionObserver;
- (void)_registerForNotifications;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)arg1;
- (void)_updateAutocorrectionList:(id)arg1;
- (void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2;
- (void)autocorrectionControllerDidClearAutocorrections:(id)arg1;
- (void)dealloc;
- (BOOL)hidesExpandableButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (void)predictionView:(id)arg1 didSelectCandidate:(id)arg2;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

