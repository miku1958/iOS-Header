//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDTCell.h>

__attribute__((visibility("hidden")))
@interface GQDTGroupingCell : GQDTCell
{
    unsigned short mLevel;
    unsigned short mRowIdx;
    unsigned short mRowCount;
    BOOL mIsCollapsed;
    id mValue;
    id mFormat;
    struct __CFBundle *mProcessorBundle;
    BOOL mHasValidFormulaValue;
    struct __CFString *mFormulaValue;
}

+ (struct __CFString *)displayTypeString:(int)arg1;
- (struct __CFString *)createFormattedValue;
- (void)dealloc;
- (BOOL)hasFormulaValue;
- (BOOL)isCollapsed;
- (unsigned short)level;
- (int)readAttributes:(struct _xmlTextReader *)arg1;
- (int)readElement:(struct _xmlTextReader *)arg1;
- (int)readRootFormat:(struct _xmlTextReader *)arg1;
- (int)readValue:(struct _xmlTextReader *)arg1;
- (unsigned short)rowCount;
- (unsigned short)rowIdx;
- (void)setProcessorBundle:(struct __CFBundle *)arg1;
- (id)value;

@end

