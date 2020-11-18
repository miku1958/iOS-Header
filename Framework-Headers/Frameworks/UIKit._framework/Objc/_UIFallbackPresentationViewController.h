//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIWindow, _UIFallbackPresentationWindow;

@interface _UIFallbackPresentationViewController : UIViewController
{
    _UIFallbackPresentationWindow *_presentationWindow;
    BOOL _hasPreservedKeyboardInputViews;
    BOOL _hasDismissCompletionHandler;
    UIWindow *_rotationDecider;
    CDUnknownBlockType _presentationPreparationBlock;
}

@property (nonatomic) BOOL hasDismissCompletionHandler; // @synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler;
@property (nonatomic) BOOL hasPreservedKeyboardInputViews; // @synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews;
@property (copy, nonatomic) CDUnknownBlockType presentationPreparationBlock; // @synthesize presentationPreparationBlock=_presentationPreparationBlock;
@property (strong, nonatomic) UIWindow *rotationDecider; // @synthesize rotationDecider=_rotationDecider;

- (void).cxx_destruct;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_preparePresentationControllerForPresenting:(id)arg1;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3;
- (void)_preserveInputViewsAnimated:(BOOL)arg1;
- (void)_restoreInputViewsAnimated:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

