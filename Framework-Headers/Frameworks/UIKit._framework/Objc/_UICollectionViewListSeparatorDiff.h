//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, _UICollectionViewListSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListSeparatorDiff : NSObject
{
    _UICollectionViewListSnapshotter *_oldSnapshot;
    _UICollectionViewListSnapshotter *_newSnapshot;
    _UIDataSourceUpdateMap *_map;
    NSMutableDictionary *_insertedIndexPaths;
    NSMutableDictionary *_deletedIndexPaths;
    NSArray *_insertedSeparators;
    NSArray *_deletedSeparators;
}

- (void).cxx_destruct;
- (void)_mapUpdateItems:(id)arg1;
- (void)_prepareInsertsAndDeletes;
- (id)indexPathsToDeleteForSeparators;
- (id)indexPathsToInsertForSeparators;
- (id)initWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2 updateItems:(id)arg3;

@end

