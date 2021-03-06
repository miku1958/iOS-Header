//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PKAssertion, PKRemoteAddPassesViewController, _UIAsyncInvocation;
@protocol PKAddPassesViewControllerDelegate;

@interface PKAddPassesViewController : UIViewController
{
    BOOL _viewHasAppeared;
    BOOL _succeeded;
    unsigned long long _presentationSource;
    NSArray *_passDataArray;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    id<PKAddPassesViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<PKAddPassesViewControllerDelegate> delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)canAddPasses;
- (void).cxx_destruct;
- (void)_applyRemoteViewController:(id)arg1;
- (void)_ingestionDidFinishWithResult:(unsigned long long)arg1;
- (void)_requestRemoteViewController;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (BOOL)succeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

