//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI25SwipeActionCollectionView : UICollectionView
{
    MISSING_TYPE *swipeActionManager;
    MISSING_TYPE *dependencyCleanupBlocks;
    MISSING_TYPE *coordinatingResetBlocks;
    MISSING_TYPE *coordinatingCancelBlocks;
    MISSING_TYPE *updateGroup;
    MISSING_TYPE *isBottomRubberBanding;
}

@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) struct CGPoint contentOffset;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)handleFromCoordinatingGestureWithGestureRecognizer:(id)arg1;
- (void)handlePanGestureWithGestureRecognizer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

