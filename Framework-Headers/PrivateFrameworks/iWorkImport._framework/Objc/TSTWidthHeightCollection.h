//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTWidthHeightCollection : NSObject
{
    struct vector<std::__1::pair<TSUCellCoord, double>, std::__1::allocator<std::__1::pair<TSUCellCoord, double>>> mFittingHeights;
    vector_13f93596 mResetHeights;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFittingHeight:(double)arg1 forCellID:(struct TSUCellCoord)arg2;
- (void)addResetHeightForCellID:(struct TSUCellCoord)arg1;
- (void)enumerateFittingHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateResetHeightsUsingBlock:(CDUnknownBlockType)arg1;

@end

