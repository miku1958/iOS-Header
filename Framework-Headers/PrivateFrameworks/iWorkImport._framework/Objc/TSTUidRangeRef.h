//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCECalculationEngine;

__attribute__((visibility("hidden")))
@interface TSTUidRangeRef : NSObject <NSCopying>
{
    UUIDData_5fbc143e _tableUID;
    struct TSTCellUID _topLeft;
    struct TSTCellUID _bottomRight;
    unsigned char _stickyBits;
    TSCECalculationEngine *_calcEngine;
    struct TSCERangeCoordinate _geometricRangeCoord;
}

@property (readonly, nonatomic) struct TSTCellUID bottomRightCellUID; // @synthesize bottomRightCellUID=_bottomRight;
@property (strong, nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
@property (nonatomic) struct TSCERangeCoordinate geometricRangeCoord; // @synthesize geometricRangeCoord=_geometricRangeCoord;
@property (readonly, nonatomic) BOOL hasGeometricRangeCoord;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) unsigned char stickyBits; // @synthesize stickyBits=_stickyBits;
@property (readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property (readonly, nonatomic) struct TSTCellUID topLeftCellUID; // @synthesize topLeftCellUID=_topLeft;

- (id).cxx_construct;
- (void)convertGeometricRangeToUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCalcEngine:(id)arg1 rangeReference:(const struct TSCERangeRef *)arg2 stickyBits:(unsigned char)arg3;
- (id)initWithCalcEngine:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2 rangeCoordinate:(struct TSCERangeCoordinate)arg3 stickyBits:(unsigned char)arg4;
- (id)initWithCalcEngine:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2 topLeft:(struct TSTCellUID)arg3 bottomRight:(struct TSTCellUID)arg4 stickyBits:(unsigned char)arg5;
- (struct TSCERangeCoordinate)rangeCoordinate;
- (struct TSCERangeRef)rangeReference;
- (void)setRangeCoordinate:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2;
- (void)setRangeReference:(struct TSCERangeRef)arg1 stickyBits:(unsigned char)arg2;
- (id)uidTractList;

@end
