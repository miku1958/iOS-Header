//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTCellRegion, TSTMasterLayout;
@protocol TSTLayoutDynamicResizeInfoProtocol;

@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>
- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (void)captureNewMinimumRowHeights:(TSTMasterLayout *)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (BOOL)hasHeightForRow:(unsigned short)arg1;
- (BOOL)hasWidthForColumn:(unsigned char)arg1;
- (id)initWithDynamicResizeInfo:(id<TSTLayoutDynamicResizeInfoProtocol>)arg1;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 columnRegion:(TSTCellRegion *)arg2;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 columnRegion:(TSTCellRegion *)arg2 rowRegion:(TSTCellRegion *)arg3;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 rowRegion:(TSTCellRegion *)arg2;
- (void)invalidate;
- (double)totalCapturedColumnWidths;
- (double)totalCapturedRowHeights;
- (double)totalCurrentColumnWidths;
- (double)totalCurrentRowHeights;
- (double)totalMinimumColumnWidths;
- (double)totalMinimumRowHeights;
- (BOOL)valid;
@end

