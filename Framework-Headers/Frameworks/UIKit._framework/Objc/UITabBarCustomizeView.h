//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIImageView, UILabel, UINavigationBar, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView
{
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    struct CGPoint _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    struct CGRect _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    BOOL _isBeingDismissed;
    NSArray *_availableItems;
    UINavigationBar *_navigationBar;
}

@property (strong, nonatomic) NSArray *availableItems; // @synthesize availableItems=_availableItems;
@property (strong, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;

- (void).cxx_destruct;
- (long long)_barMetrics;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setIsBeingDismissed;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tintTabBarItemsForEdit:(BOOL)arg1;
- (id)titleLabelFont;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateProxiesSelection;

@end
