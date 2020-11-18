//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaUI/_TtC5TeaUI25SwipeActionCollectionView.h>

@class UIPanGestureRecognizer;

@interface _TtC5TeaUI25SwipeActionCollectionView (TeaUI)

@property (nonatomic, readonly) UIPanGestureRecognizer *coordinatingSwipeActionPanGestureRecognizer;
@property (nonatomic, readonly) BOOL coordinatingSwipeActionShouldCancel;

- (void)coordinatingResetSwipeAction;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
@end
