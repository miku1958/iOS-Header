//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVFullScreenViewController, UIWindow;

@interface AVWindowRootViewController : UIViewController
{
    AVFullScreenViewController *_fullScreenViewController;
    UIWindow *_fullScreenWindow;
}

@property (weak, nonatomic) AVFullScreenViewController *fullScreenViewController; // @synthesize fullScreenViewController=_fullScreenViewController;
@property (weak, nonatomic) UIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;

- (void).cxx_destruct;
- (BOOL)_ignoreAppSupportedOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;

@end
