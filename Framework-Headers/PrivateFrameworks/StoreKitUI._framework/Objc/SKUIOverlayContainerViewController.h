//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIControl, UITapGestureRecognizer;
@protocol SKUIOverlayContainerDelegate;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UIControl *_backstopView;
    BOOL _isAdjustingViewsForDismiss;
    long long _popViewControllerCount;
    long long _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
    id<SKUIOverlayContainerDelegate> _delegate;
}

@property (readonly, nonatomic) UIControl *backstopControl;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIOverlayContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *dimmingViewColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *viewControllers;

- (void).cxx_destruct;
- (struct CGRect)_centeredFrameForViewController:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_frameAction:(id)arg1;
- (long long)_indexOfViewControllerForPoint:(struct CGPoint)arg1;
- (struct CGSize)_overlaySizeForController:(id)arg1 atBoundsSize:(struct CGSize)arg2;
- (double)_overlaySpacingForSize:(struct CGSize)arg1;
- (void)_popViewControllers;
- (void)_positionViewControllersForSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (void)_pushViewController:(id)arg1;
- (void)_removeChildren;
- (id)_selectedViewController;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_tapAction:(id)arg1;
- (id)_viewControllerForPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (void)dismissWithFadeTransitionCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)popViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)showViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showViewControllers:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

