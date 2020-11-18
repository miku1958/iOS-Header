//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, UIBarButtonItem, UIImage;
@protocol UIMultiColumnViewControllerDelegate;

@interface UIMultiColumnViewController : UIViewController
{
    unsigned long long _lastColumnCount;
    unsigned long long _animatingTargetColumnCount;
    UIBarButtonItem *_showSecondColumnBarButtonItem;
    UIBarButtonItem *_hideSecondColumnBarButtonItem;
    struct {
        unsigned int updatingNavControllerChildren:1;
        unsigned int animatingItem1LeftBarButton:1;
        unsigned int animatingSplitToWidth:1;
    } _mcvcFlags;
    NSMutableArray *_borderViews;
    struct CGRect _lastFrameInWindow;
    id<UIMultiColumnViewControllerDelegate> _delegate;
    NSArray *_viewControllers;
    NSArray *_navControllers;
    double _keyboardInset;
    NSArray *_columnWidths;
    UIImage *__columnToggleButtonImage;
}

@property (strong, nonatomic, setter=_setColumnToggleButtonImage:) UIImage *_columnToggleButtonImage; // @synthesize _columnToggleButtonImage=__columnToggleButtonImage;
@property (strong, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property (weak, nonatomic) id<UIMultiColumnViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double keyboardInset; // @synthesize keyboardInset=_keyboardInset;
@property (strong, nonatomic) NSArray *navControllers; // @synthesize navControllers=_navControllers;
@property (strong, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;

- (void).cxx_destruct;
- (void)_addButtonItem:(id)arg1 toNavItem:(id)arg2;
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1;
- (BOOL)_allowMultipleColumns;
- (void)_animateSplitToWidth:(double)arg1;
- (BOOL)_canShowColumnIndex:(unsigned long long)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_contentSizesForColumnWidths:(id)arg1;
- (BOOL)_currentSizeMightAllowMultipleColumns;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (id)_effectiveColumnWidths;
- (void)_hideSecondColumn:(id)arg1;
- (id)_hideSecondColumnBarButtonItem;
- (id)_liveVCs;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (void)_moveViewControllersForColumnCount:(unsigned long long)arg1;
- (id)_navigationBarForDragAffordance;
- (void)_navigationControllerChangedViewControllers:(id)arg1;
- (id)_possibleContentSizes;
- (id)_preferredContentSizes;
- (void)_removeButtonItem:(id)arg1 fromNavItem:(id)arg2;
- (void)_setAllowNestedNavigationControllers:(BOOL)arg1;
- (void)_showSecondColumn:(id)arg1;
- (id)_showSecondColumnBarButtonItem;
- (void)_splitViewControllerDidUpdate:(id)arg1;
- (id)_splitViewControllerImageForDisplayModeButtonToShowLeading:(id)arg1;
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;
- (double)_unsafeAreaPaddingForFirstVisibleColumn;
- (void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(BOOL)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_willShowColumnCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)title;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

