//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBViewControllerTransitionContextDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, SBHUDController;
@protocol _SBHUDHostViewControllerDelegate;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate>
{
    NSMutableArray *_activeTransitionContexts;
    NSMutableSet *_presentedHUDs;
    NSMutableSet *_presentingHUDs;
    NSMutableSet *_presentingHUDsTransitionContexts;
    NSMutableSet *_dismissingHUDsTransitionContexts;
    SBHUDController *_HUDController;
    id<_SBHUDHostViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)_canShowWhileLocked;
- (void)_executeDismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_executePresentNewHUD:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_executeViewControllerTransitionContext:(id)arg1;
- (id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transitionDidFinish:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

