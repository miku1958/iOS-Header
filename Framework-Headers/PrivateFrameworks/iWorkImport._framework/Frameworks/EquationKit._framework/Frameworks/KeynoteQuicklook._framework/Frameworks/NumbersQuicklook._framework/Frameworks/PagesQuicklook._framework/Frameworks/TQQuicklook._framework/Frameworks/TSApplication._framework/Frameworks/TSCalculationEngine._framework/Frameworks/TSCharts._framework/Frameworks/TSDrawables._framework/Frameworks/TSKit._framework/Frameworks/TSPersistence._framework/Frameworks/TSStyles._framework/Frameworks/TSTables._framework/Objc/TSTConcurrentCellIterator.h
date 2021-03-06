//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, TSTCellRegion, TSTTableInfo;

@interface TSTConcurrentCellIterator : NSObject
{
    unsigned long long _cellsPerSubRegion;
    TSTTableInfo *_tableInfo;
    TSTCellRegion *_region;
    TSTCellRegion *_forcingRegion;
    NSPointerArray *_arrayOfChunkRocks;
    unsigned long long _flags;
    unsigned long long _searchFlags;
    struct TSUViewCellRect _clampingViewRect;
}

@property (strong, nonatomic) NSPointerArray *arrayOfChunkRocks; // @synthesize arrayOfChunkRocks=_arrayOfChunkRocks;
@property (nonatomic) unsigned long long cellsPerSubRegion; // @synthesize cellsPerSubRegion=_cellsPerSubRegion;
@property (nonatomic) struct TSUViewCellRect clampingViewRect; // @synthesize clampingViewRect=_clampingViewRect;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (strong, nonatomic) TSTCellRegion *forcingRegion; // @synthesize forcingRegion=_forcingRegion;
@property (strong, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property (nonatomic) unsigned long long searchFlags; // @synthesize searchFlags=_searchFlags;
@property (strong, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;

- (void).cxx_destruct;
- (void)enumerateConcurrentlyUsingChunkBeginBlock:(CDUnknownBlockType)arg1 concurrentBlock:(CDUnknownBlockType)arg2 finalBlock:(CDUnknownBlockType)arg3;
- (void)enumerateConcurrentlyUsingChunkBeginBlock:(CDUnknownBlockType)arg1 perDispatchThreadBlock:(CDUnknownBlockType)arg2 concurrentBlock:(CDUnknownBlockType)arg3 finalBlock:(CDUnknownBlockType)arg4;
- (id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 clampingViewRect:(struct TSUViewCellRect)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 clampingViewRect:(struct TSUViewCellRect)arg4 flags:(unsigned long long)arg5 searchFlags:(unsigned long long)arg6;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5;

@end

