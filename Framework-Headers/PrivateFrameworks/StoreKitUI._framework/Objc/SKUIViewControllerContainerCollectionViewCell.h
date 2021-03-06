//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, SKUIViewControllerContainerView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell
{
    SKUIViewControllerContainerView *_viewControllerContainerView;
    BOOL _managesViewControllerContainerViewLayout;
    double _maximumContentWidth;
    NSIndexPath *_indexPath;
}

@property (readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic) BOOL managesViewControllerContainerViewLayout; // @synthesize managesViewControllerContainerViewLayout=_managesViewControllerContainerViewLayout;
@property (nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property (strong, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIView *viewControllerContainerView;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

