//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableOrderedSet, NSPointerArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerDragState : NSObject
{
    NSMutableOrderedSet *_dataSourceIndexPathsOfDraggingItems;
    NSPointerArray *_dragItemsWithRebasableIndexPaths;
}

@property (strong, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems; // @synthesize dataSourceIndexPathsOfDraggingItems=_dataSourceIndexPathsOfDraggingItems;
@property (readonly, nonatomic) NSIndexPath *dragFromDataSourceIndexPath;
@property (strong, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths; // @synthesize dragItemsWithRebasableIndexPaths=_dragItemsWithRebasableIndexPaths;
@property (readonly, nonatomic) NSArray *draggingDataSourceIndexPaths;

- (void).cxx_destruct;
- (void)addDraggingDataSourceIndexPath:(id)arg1;
- (id)dataSourceIndexPathForDragItem:(id)arg1 forCollectionView:(id)arg2;
- (id)description;
- (id)init;
- (BOOL)isDraggingFromDataSourceIndexPath:(id)arg1;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg1;
- (void)setDataSourceIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3;

@end
