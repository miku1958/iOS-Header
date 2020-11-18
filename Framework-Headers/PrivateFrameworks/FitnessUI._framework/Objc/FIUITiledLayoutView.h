//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSIndexPath, NSMutableArray, NSMutableDictionary;
@protocol FIUITiledLayoutViewDataSource, FIUITiledLayoutViewDelegate;

@interface FIUITiledLayoutView : UIScrollView
{
    id<FIUITiledLayoutViewDataSource> _dataSource;
    NSMutableArray *__sectionInfo;
    NSMutableDictionary *__tilesByPath;
    NSMutableDictionary *__tileByClassQueue;
    unsigned long long _beginUpdatesCount;
    NSIndexPath *_pinnedIndexPath;
    CDStruct_c4ec18df __visibleRange;
}

@property (strong, nonatomic) NSMutableArray *_sectionInfo; // @synthesize _sectionInfo=__sectionInfo;
@property (strong, nonatomic) NSMutableDictionary *_tileByClassQueue; // @synthesize _tileByClassQueue=__tileByClassQueue;
@property (strong, nonatomic) NSMutableDictionary *_tilesByPath; // @synthesize _tilesByPath=__tilesByPath;
@property (nonatomic) CDStruct_c4ec18df _visibleRange; // @synthesize _visibleRange=__visibleRange;
@property (nonatomic) unsigned long long beginUpdatesCount; // @synthesize beginUpdatesCount=_beginUpdatesCount;
@property (weak, nonatomic) id<FIUITiledLayoutViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<FIUITiledLayoutViewDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) NSIndexPath *pinnedIndexPath; // @synthesize pinnedIndexPath=_pinnedIndexPath;

- (void).cxx_destruct;
- (CDStruct_c4ec18df)_layoutSectionsInRect:(struct CGRect)arg1;
- (void)_layoutVisibleRect:(struct CGRect)arg1;
- (void)adjustTargetContentOffset:(inout struct CGPoint *)arg1 verticalGravity:(double)arg2;
- (BOOL)becomeFirstResponder;
- (void)beginUpdates;
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1 verticalGravity:(double)arg2;
- (id)dequeueTileOfClass:(Class)arg1 forIndexPath:(id)arg2;
- (void)endUpdatesAnimated:(BOOL)arg1 bounceForPinnedRow:(BOOL)arg2;
- (void)enqueueTile:(id)arg1;
- (id)indexPathAtPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)reloadDataInSection:(unsigned long long)arg1;
- (void)reloadDataInSection:(unsigned long long)arg1 itemIndexes:(id)arg2;
- (unsigned long long)sectionIndexAtPoint:(struct CGPoint)arg1;
- (id)tileAtIndexPath:(id)arg1;
- (void)tileTapped:(id)arg1;
- (id)titleAfterTransitionIndex:(double)arg1 includeEmptySections:(BOOL)arg2;
- (id)titleBeforeTransitionIndex:(double)arg1 includeEmptySections:(BOOL)arg2;
- (double)titleTransitionIndexInRect:(struct CGRect)arg1;

@end

