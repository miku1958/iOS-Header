//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SBUIIconForceTouchControllerDataProvider, SBUIIconForceTouchIconViewWrapperView, SBUIIconForceTouchVisualEffectView, SBUIIconForceTouchWrapperViewController, UIView;
@protocol SBUIIconForceTouchViewControllerDelegate;

@interface SBUIIconForceTouchViewController : UIViewController <UIGestureRecognizerDelegate>
{
    SBUIIconForceTouchVisualEffectView *_visualEffectView;
    UIView *_parallaxView;
    SBUIIconForceTouchIconViewWrapperView *_iconViewWrapperViewBelow;
    SBUIIconForceTouchWrapperViewController *_primaryViewController;
    SBUIIconForceTouchWrapperViewController *_secondaryViewController;
    SBUIIconForceTouchIconViewWrapperView *_iconViewWrapperViewAbove;
    NSArray *_initialLayoutConstraints;
    NSArray *_showingLayoutConstraints;
    NSMutableArray *_presentCompletionHandlers;
    NSMutableArray *_dismissCompletionHandlers;
    double _smoothedValue;
    double _currentPeekProgress;
    SBUIIconForceTouchControllerDataProvider *_dataProvider;
    long long _state;
    long long _layout;
    id<SBUIIconForceTouchViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) SBUIIconForceTouchControllerDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIIconForceTouchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (long long)_layoutForDataProvider:(id)arg1;
- (void)_peekAnimated:(BOOL)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_presentAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_revealWithRelativeForce:(double)arg1;
- (void)_scaleIconViewWithPercent:(double)arg1;
- (void)dealloc;
- (BOOL)dismissAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (BOOL)peekAnimated:(BOOL)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(BOOL)arg3;
- (BOOL)presentAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;

@end

