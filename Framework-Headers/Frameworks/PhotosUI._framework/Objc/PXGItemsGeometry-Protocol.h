//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSIndexSet, PXGLayout;

@protocol PXGItemsGeometry
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (NSIndexSet *)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (NSIndexSet *)itemsInRect:(struct CGRect)arg1 inLayout:(PXGLayout *)arg2;
@end

