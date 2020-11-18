//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXVideoTransitionObserver-Protocol.h>

@class NFStateMachine, NSString, SXAdvanceButton, SXSkipCountdownView, UIActivityIndicatorView;
@protocol SXVideoLoadingStateObserverFactory, SXVideoLoadingStateObserving, SXVideoSkipLockObserverFactory, SXVideoSkipLockObserving;

@interface SXSkipViewController : UIViewController <SXVideoTransitionObserver>
{
    SXAdvanceButton *_advanceButton;
    SXSkipCountdownView *_countdownView;
    UIActivityIndicatorView *_activityIndicator;
    id<SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id<SXVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id<SXVideoLoadingStateObserving> _loadingStateObserver;
    id<SXVideoSkipLockObserving> _skipLockObserver;
    NFStateMachine *_stateMachine;
}

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (readonly, nonatomic) SXAdvanceButton *advanceButton; // @synthesize advanceButton=_advanceButton;
@property (readonly, nonatomic) SXSkipCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SXVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property (readonly, nonatomic) id<SXVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property (strong, nonatomic) id<SXVideoSkipLockObserving> skipLockObserver; // @synthesize skipLockObserver=_skipLockObserver;
@property (readonly, nonatomic) id<SXVideoSkipLockObserverFactory> skipLockObserverFactory; // @synthesize skipLockObserverFactory=_skipLockObserverFactory;
@property (readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAdvanceButton:(id)arg1 countdownView:(id)arg2 loadingStateObserverFactory:(id)arg3 skipLockObserverFactory:(id)arg4;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

