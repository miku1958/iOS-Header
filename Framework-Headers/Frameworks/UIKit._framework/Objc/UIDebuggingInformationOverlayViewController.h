//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UISplitViewControllerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, UIDebuggingInformationRootTableViewController, UIDebuggingInformationStickyBehavior, UIDebuggingZoomViewController, UIDynamicAnimator, UIDynamicBehavior, UISplitViewController, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlayViewController : UIViewController <UISplitViewControllerDelegate>
{
    BOOL _isFullscreen;
    UISplitViewController *_splitViewController;
    UIView *_containerView;
    UIDebuggingInformationRootTableViewController *_rootTableViewController;
    UIDynamicAnimator *_animator;
    UIDynamicBehavior *_behavior;
    UIDebuggingInformationStickyBehavior *_stickyBehavior;
    UIDebuggingZoomViewController *_zoomViewController;
    NSLayoutConstraint *_heightConstraint;
    NSArray *_smallConstraints;
    NSArray *_bigConstraints;
    UIView *_shadowView;
    struct CGPoint _offset;
}

@property (strong, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property (strong, nonatomic) UIDynamicBehavior *behavior; // @synthesize behavior=_behavior;
@property (strong, nonatomic) NSArray *bigConstraints; // @synthesize bigConstraints=_bigConstraints;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (nonatomic) BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property struct CGPoint offset; // @synthesize offset=_offset;
@property (strong, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController; // @synthesize rootTableViewController=_rootTableViewController;
@property (strong, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property (strong, nonatomic) NSArray *smallConstraints; // @synthesize smallConstraints=_smallConstraints;
@property (strong, nonatomic) UISplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property (strong, nonatomic) UIDebuggingInformationStickyBehavior *stickyBehavior; // @synthesize stickyBehavior=_stickyBehavior;
@property (strong, nonatomic) UIDebuggingZoomViewController *zoomViewController; // @synthesize zoomViewController=_zoomViewController;

- (void).cxx_destruct;
- (void)didReceiveGesture:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)toggleFullscreen;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

