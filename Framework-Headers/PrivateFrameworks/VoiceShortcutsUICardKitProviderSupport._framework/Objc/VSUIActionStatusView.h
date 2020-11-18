//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VoiceShortcutsUICardKitProviderSupport/SUICProgressStateMachineObserving-Protocol.h>

@class NSString, _VSUIActionStatusErrorView;
@protocol VSUIActionStatusViewDelegate;

@interface VSUIActionStatusView : UIView <SUICProgressStateMachineObserving>
{
    id<VSUIActionStatusViewDelegate> _delegate;
    UIView *_activityView;
    _VSUIActionStatusErrorView *_errorView;
}

@property (strong, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSUIActionStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _VSUIActionStatusErrorView *errorView; // @synthesize errorView=_errorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpViews;
- (void)_updateAcitivityViewSubviewWithDelegateProvidedView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;
- (void)resetState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
