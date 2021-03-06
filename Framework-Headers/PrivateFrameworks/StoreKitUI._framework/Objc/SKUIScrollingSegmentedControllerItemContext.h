//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView, UIViewController;
@protocol SKUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerItemContext : NSObject
{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;
    struct UIEdgeInsets _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
    id<SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;
    UIViewController *_viewController;
}

@property (weak, nonatomic) id<SKUIScrollingSegmentedControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)updateAppliedContentInsetsAdjustment;

@end

