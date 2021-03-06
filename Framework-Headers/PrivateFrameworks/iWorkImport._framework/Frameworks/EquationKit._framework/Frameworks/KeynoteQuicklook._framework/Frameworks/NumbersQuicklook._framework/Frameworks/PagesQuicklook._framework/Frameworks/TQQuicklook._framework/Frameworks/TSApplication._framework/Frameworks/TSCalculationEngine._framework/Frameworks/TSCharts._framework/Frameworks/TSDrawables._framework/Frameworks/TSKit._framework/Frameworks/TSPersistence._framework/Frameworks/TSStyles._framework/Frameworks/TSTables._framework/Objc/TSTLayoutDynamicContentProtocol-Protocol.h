//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/NSObject-Protocol.h>

@class TSTCellRegion, TSTMergeListWrapper;

@protocol TSTLayoutDynamicContentProtocol <NSObject>
- (BOOL)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (BOOL)dynamicContentMustDrawOnMainThread;

@optional
- (BOOL)mergeRange:(struct TSUCellRect *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
@end

