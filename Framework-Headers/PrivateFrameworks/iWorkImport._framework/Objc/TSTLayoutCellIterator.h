//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTCellIterator.h>

@class TSTCell, TSTMasterLayout, TSTMutableCellIteratorData;
@protocol TSTCellIteratorData;

__attribute__((visibility("hidden")))
@interface TSTLayoutCellIterator : TSTCellIterator
{
    BOOL _queriedModel;
    BOOL _modelIteratorHasCell;
    unsigned int _numberOfLayoutColumns;
    unsigned int _numberOfColumns;
    unsigned int _numberOfRows;
    TSTMasterLayout *_masterLayout;
    struct TSUCellCoord _layoutCellID;
    TSTCell *_layoutCell;
    TSTMutableCellIteratorData *_layoutCellData;
    id<TSTCellIteratorData> _modelIteratorData;
    struct TSUCellRect _layoutRange;
}

@property (readonly, nonatomic) TSTCell *layoutCell; // @synthesize layoutCell=_layoutCell;
@property (strong, nonatomic) TSTMutableCellIteratorData *layoutCellData; // @synthesize layoutCellData=_layoutCellData;
@property (readonly, nonatomic) struct TSUCellCoord layoutCellID; // @synthesize layoutCellID=_layoutCellID;
@property (readonly, nonatomic) struct TSUCellRect layoutRange; // @synthesize layoutRange=_layoutRange;
@property (readonly, strong, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=_masterLayout;
@property (nonatomic) id<TSTCellIteratorData> modelIteratorData; // @synthesize modelIteratorData=_modelIteratorData;
@property (nonatomic) BOOL modelIteratorHasCell; // @synthesize modelIteratorHasCell=_modelIteratorHasCell;
@property (nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (nonatomic) unsigned int numberOfLayoutColumns; // @synthesize numberOfLayoutColumns=_numberOfLayoutColumns;
@property (nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (nonatomic) BOOL queriedModel; // @synthesize queriedModel=_queriedModel;

- (void).cxx_destruct;
- (BOOL)getNextCellData:(id *)arg1;
- (id)initWithLayout:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithMasterLayout:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;

@end

