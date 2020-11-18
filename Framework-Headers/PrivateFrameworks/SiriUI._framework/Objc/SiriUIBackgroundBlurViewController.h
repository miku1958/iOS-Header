//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SiriUIBackgroundBlurView;
@protocol SiriUIBackgroundBlurViewControllerDelegate;

@interface SiriUIBackgroundBlurViewController : UIViewController
{
    BOOL _backgroundBlurIsVisible;
    SiriUIBackgroundBlurView *_backgroundBlurView;
    long long _backgroundBlurVisibleReason;
    id<SiriUIBackgroundBlurViewControllerDelegate> _backgroundBlurViewControllerDelegate;
}

@property (nonatomic) BOOL backgroundBlurIsVisible; // @synthesize backgroundBlurIsVisible=_backgroundBlurIsVisible;
@property (strong, nonatomic) SiriUIBackgroundBlurView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property (weak, nonatomic) id<SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate; // @synthesize backgroundBlurViewControllerDelegate=_backgroundBlurViewControllerDelegate;
@property (nonatomic) long long backgroundBlurVisibleReason; // @synthesize backgroundBlurVisibleReason=_backgroundBlurVisibleReason;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)requestBackgroundBlurVisible:(BOOL)arg1 forReason:(long long)arg2;
- (void)viewDidLoad;

@end
