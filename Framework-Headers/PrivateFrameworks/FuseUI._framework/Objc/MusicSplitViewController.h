//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/SKUIProxyScrollViewDelegate-Protocol.h>

@class NSString, SKUIProxyScrollView, UIView;

@interface MusicSplitViewController : UIViewController <SKUIProxyScrollViewDelegate>
{
    UIViewController *_detailViewController;
    struct UIEdgeInsets _detailViewControllerContentInsetAdditions;
    UIView *_gutterView;
    BOOL _isHorizontallyCompact;
    UIViewController *_preservedDetailViewController;
    struct UIEdgeInsets _primaryViewControllerContentInsetAdditions;
    SKUIProxyScrollView *_proxyScrollView;
    UIViewController *_primaryViewController;
    double _staticPrimaryColumnWidth;
}

@property (readonly, nonatomic) UIViewController *_detailViewController; // @synthesize _detailViewController;
@property (readonly, nonatomic) BOOL _supportsDetailViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
@property (nonatomic) double staticPrimaryColumnWidth; // @synthesize staticPrimaryColumnWidth=_staticPrimaryColumnWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContentInsetsForChildViewControllers;
- (CDStruct_6b60c6e5)_childrenLayoutResultsForBounds:(struct CGRect)arg1;
- (id)_detailViewControllerOverrideTraitCollection;
- (void)_didChangeDetailViewController;
- (void)_didChangePrimaryViewController;
- (void)_handleDetailViewController:(id)arg1;
- (double)_preferredPrimaryColumnWidthWhenWithDetailForWidth:(double)arg1;
- (id)_primaryViewControllerOverrideTraitCollection;
- (void)_requestInitialStateDetailViewController;
- (void)_setDetailViewController:(id)arg1 shouldChangeParents:(BOOL)arg2;
- (void)_updateHorizontallyCompactState;
- (void)_willChangeDetailViewController:(id)arg1;
- (void)_willChangePrimaryViewController:(id)arg1;
- (void)clearDetailViewController;
- (id)contentScrollView;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

