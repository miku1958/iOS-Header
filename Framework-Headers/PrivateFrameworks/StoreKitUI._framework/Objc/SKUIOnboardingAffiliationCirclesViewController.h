//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIPhysicalCirclesDataSource-Protocol.h>
#import <StoreKitUI/SKUIPhysicalCirclesDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSObject, NSString, SKUIClientContext, SKUIOnboardingInstructionsView, SKUIPhysicalCirclesView, UIView;
@protocol OS_dispatch_source, SKUIOnboardingAffiliationCirclesDelegate;

@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController <SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate>
{
    NSMutableArray *_affiliationItems;
    SKUIPhysicalCirclesView *_circlesView;
    SKUIClientContext *_clientContext;
    id<SKUIOnboardingAffiliationCirclesDelegate> _delegate;
    NSObject<OS_dispatch_source> *_deletionTimer;
    BOOL _didPerformFinishAnimation;
    UIView *_footerView;
    NSMapTable *_images;
    SKUIOnboardingInstructionsView *_instructionsView;
    BOOL _needsReloadOnDidAppear;
}

@property (copy, nonatomic) NSArray *affiliationItems; // @synthesize affiliationItems=_affiliationItems;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIOnboardingAffiliationCirclesDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIOnboardingInstructionsView *instructionsView;
@property (readonly, nonatomic) double maximumCircleDiameter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDeletionTimer;
- (double)_circleImageAlphaForAffinityCount:(long long)arg1;
- (struct CGSize)_circleSizeForAffinityCount:(long long)arg1;
- (void)_completeDeletionForCircleAtIndex:(long long)arg1;
- (void)_reloadRepellors;
- (void)_sendAffilationItemsDidChange;
- (long long)_titlePositionForAffinityCount:(long long)arg1;
- (double)_topLayoutMargin;
- (void)addAffiliationItems:(id)arg1;
- (void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2;
- (id)circlesView:(id)arg1 circleForIndex:(long long)arg2;
- (void)dealloc;
- (void)loadView;
- (long long)numberOfCirclesInCircleView:(id)arg1;
- (void)performFinishAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)resetWithAffiliationItems:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setFooterView:(id)arg1 animated:(BOOL)arg2;
- (void)setImage:(id)arg1 forAffiliationItem:(id)arg2;
- (void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

