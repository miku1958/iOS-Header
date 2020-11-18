//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InAppMessages/_UISheetPresentationControllerDelegate-Protocol.h>

@class NSString, UIView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate>
{
    BOOL _shouldPresentFullscreen;
    BOOL _shouldUsePadLayout;
    UIViewController *_contentViewController;
    id<IAMViewControllerMetricsDelegate> _metricsDelegate;
    CDUnknownBlockType _viewControllerWillDismissBlock;
    UIView *_contentView;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property (nonatomic) BOOL shouldPresentFullscreen; // @synthesize shouldPresentFullscreen=_shouldPresentFullscreen;
@property (readonly) BOOL shouldUsePadLayout; // @synthesize shouldUsePadLayout=_shouldUsePadLayout;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType viewControllerWillDismissBlock; // @synthesize viewControllerWillDismissBlock=_viewControllerWillDismissBlock;

- (void).cxx_destruct;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (long long)preferredStatusBarStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;

@end
