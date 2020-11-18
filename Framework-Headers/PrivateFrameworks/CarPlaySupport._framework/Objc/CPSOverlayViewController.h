//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <CarPlaySupport/CPSPreferredFocusManaging-Protocol.h>

@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging>
{
    BOOL usePreferredItemOnNextUpdate;
    id<UIFocusItem> preferredFocusItem;
}

@property (weak, nonatomic) id<UIFocusItem> preferredFocusItem; // @synthesize preferredFocusItem;
@property (nonatomic) BOOL usePreferredItemOnNextUpdate; // @synthesize usePreferredItemOnNextUpdate;

- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissTemplateAnimated:(BOOL)arg1;
- (unsigned long long)indexOfTemplate:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (void)popToRootTemplateAnimated:(BOOL)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)popToTemplate:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)preferredFocusEnvironments;
- (void)presentActionSheetTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)presentTemplateViewController:(id)arg1 animated:(BOOL)arg2;
- (id)presentedTemplateViewController;
- (void)pushTemplateViewController:(id)arg1 animated:(BOOL)arg2 presentationStyle:(unsigned long long)arg3;
- (id)templates;
- (id)topTemplate;
- (id)viewControllerForTemplate:(id)arg1;
- (void)viewDidLoad;

@end
