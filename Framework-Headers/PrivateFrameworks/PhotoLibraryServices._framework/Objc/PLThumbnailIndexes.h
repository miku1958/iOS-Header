//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject
{
    NSObject<OS_dispatch_queue> *isolation;
    NSMutableIndexSet *unusedIndexes;
    long long usedMax;
    unsigned long long _fetchTimestamp;
}

+ (void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1;
+ (void)recycleThumbnailIndexes:(id)arg1;
+ (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
+ (id)sharedInstance;
- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)arg1;
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;

@end

