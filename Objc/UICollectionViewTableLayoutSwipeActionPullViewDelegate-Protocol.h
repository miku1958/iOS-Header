//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UICollectionViewTableLayoutSwipeAction, UICollectionViewTableLayoutSwipeActionPullView, UIView;

@protocol UICollectionViewTableLayoutSwipeActionPullViewDelegate <NSObject>
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1;
- (void)swipeActionPullView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1 tappedAction:(UICollectionViewTableLayoutSwipeAction *)arg2 view:(UIView *)arg3;
@end

