//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKPopoverBasedViewController.h>

@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController
{
    UIViewController *mComposedViewController;
}

@property (readonly, nonatomic) UIViewController *composedViewController; // @synthesize composedViewController=mComposedViewController;

- (void)dealloc;
- (id)i_contentViewController;
- (id)initWithViewController:(id)arg1;
- (void)p_loadChildView;
- (void)p_unloadChildView;
- (id)title;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

