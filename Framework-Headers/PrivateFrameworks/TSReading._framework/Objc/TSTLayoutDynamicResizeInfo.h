//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSTLayoutDynamicResizeInfoProtocol-Protocol.h>

@class NSString, TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>
{
    BOOL mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    double *mCapturedRowHeights;
    double *mCurrentRowHeights;
    double *mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
    double *mCapturedColumnWidths;
    double *mCurrentColumnWidths;
    double *mMinimumColumnWidths;
    double mCapturedColumnWidthTotal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)applyColumnTotalWidth:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (struct CGSize)capturedTableSize;
- (id)columnWidths;
- (void)dealloc;
- (void)enumerateColumnWidthsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (BOOL)hasHeightForRow:(unsigned short)arg1;
- (BOOL)hasWidthForColumn:(unsigned char)arg1;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
- (void)invalidate;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (id)rowHeights;
- (BOOL)valid;

@end

