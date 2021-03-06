//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellRegionIterating-Protocol.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSString, TSTCellRegion, TSTStrokeSidecar;
@protocol TSTCellRegionIterating;

@interface TSTStrokeSidecarIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    TSTStrokeSidecar *_strokeSidecar;
    TSTCellRegion *_region;
    NSObject<TSTCellRegionIterating> *_regionIterator;
    struct TSUCellCoord _curCellID;
}

@property (nonatomic) struct TSUCellCoord curCellID; // @synthesize curCellID=_curCellID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // @synthesize regionIterator=_regionIterator;
@property (readonly, nonatomic) TSTStrokeSidecar *strokeSidecar; // @synthesize strokeSidecar=_strokeSidecar;
@property (readonly) Class superclass;

+ (id)p_filterRegion:(id)arg1 strokeSidecar:(id)arg2;
- (void).cxx_destruct;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (id)initWithStrokeSidecar:(id)arg1 region:(id)arg2;
- (void)terminate;
- (void)updateCellData:(id)arg1;
- (void)updateFormulaForCellData:(id)arg1;

@end

