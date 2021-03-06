//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject
{
    EDResources *mResources;
    unsigned long long mStyleIndex;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    unsigned long long mHeaderRowBorderDxfIndex;
    unsigned long long mTotalsRowBorderDxfIndex;
    unsigned long long mDataAreaBorderDxfIndex;
    unsigned long long mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    unsigned long long mHeaderRowCount;
    unsigned long long mTotalsRowCount;
    BOOL mShowFirstColumn;
    BOOL mShowLastColumn;
    BOOL mShowRowStripes;
    BOOL mShowColumnStripes;
    EDCollection *mTableColumns;
    EDCollection *mColumnFilters;
}

+ (id)tableWithResources:(id)arg1;
- (void).cxx_destruct;
- (id)columnFilters;
- (id)dataAreaBorderDxf;
- (unsigned long long)dataAreaBorderDxfIndex;
- (id)dataAreaDxf;
- (unsigned long long)dataAreaDxfIndex;
- (id)description;
- (id)displayName;
- (id)headerRowBorderDxf;
- (unsigned long long)headerRowBorderDxfIndex;
- (unsigned long long)headerRowCount;
- (id)headerRowDxf;
- (unsigned long long)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaBorderDxf:(id)arg1;
- (void)setDataAreaBorderDxfIndex:(unsigned long long)arg1;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1;
- (void)setHeaderRowCount:(unsigned long long)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setShowColumnStripes:(BOOL)arg1;
- (void)setShowFirstColumn:(BOOL)arg1;
- (void)setShowLastColumn:(BOOL)arg1;
- (void)setShowRowStripes:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setStyleName:(id)arg1;
- (void)setTableBorderDxf:(id)arg1;
- (void)setTableBorderDxfIndex:(unsigned long long)arg1;
- (void)setTableRange:(id)arg1;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1;
- (void)setTotalsRowCount:(unsigned long long)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (BOOL)showColumnStripes;
- (BOOL)showFirstColumn;
- (BOOL)showLastColumn;
- (BOOL)showRowStripes;
- (id)style;
- (unsigned long long)styleIndex;
- (id)styleName;
- (id)tableBorderDxf;
- (unsigned long long)tableBorderDxfIndex;
- (id)tableColumns;
- (id)tableRange;
- (id)totalsRowBorderDxf;
- (unsigned long long)totalsRowBorderDxfIndex;
- (unsigned long long)totalsRowCount;
- (id)totalsRowDxf;
- (unsigned long long)totalsRowDxfIndex;

@end

