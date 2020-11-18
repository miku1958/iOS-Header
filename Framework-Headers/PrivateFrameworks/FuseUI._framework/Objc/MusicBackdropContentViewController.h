//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPUPinningView, UIView, _UIBackdropView;

@interface MusicBackdropContentViewController : UIViewController
{
    _UIBackdropView *_backdropView;
    MPUPinningView *_pinningView;
    long long _backdropViewPrivateStyle;
    UIView *_backgroundView;
    UIViewController *_contentViewController;
}

@property (nonatomic) long long backdropViewPrivateStyle; // @synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;

- (void).cxx_destruct;
- (void)_embedBackgroundView;
- (id)initWithContentViewController:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

