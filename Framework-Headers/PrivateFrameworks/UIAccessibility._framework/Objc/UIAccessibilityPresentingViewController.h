//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController
{
    UIWindow *_presentationWindow;
}

- (void).cxx_destruct;
- (void)_cleanUpPresentationWindow;
- (void)_voiceOverStatusChanged;
- (void)dealloc;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end
