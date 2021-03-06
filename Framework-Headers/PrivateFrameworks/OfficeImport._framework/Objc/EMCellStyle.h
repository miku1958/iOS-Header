//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMStyle.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle <NSCopying>
{
    EDStyle *_edStyle;
    int _edCellType;
    double _columnWidth;
    double _contentWidth;
    BOOL _truncateContents;
    BOOL _resolvedProperties;
}

+ (id)_parseFontName:(id)arg1 nameContainsBold:(BOOL *)arg2 nameContainsItalic:(BOOL *)arg3;
+ (double)contentWidthForColumnWidth:(double)arg1;
+ (id)styleForFont:(id)arg1;
- (void).cxx_destruct;
- (void)addAlignmentStyle:(id)arg1;
- (void)addBordersStyle:(id)arg1;
- (void)addFillStyle:(id)arg1;
- (void)addFontStyle:(id)arg1;
- (id)cacheFriendlyCSSStyleString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cssStyleString;
- (unsigned long long)hash;
- (id)initWithEDStyle:(id)arg1 type:(int)arg2 columnWidth:(unsigned long long)arg3 contentWidth:(unsigned long long)arg4 truncateContents:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;
- (void)resolveContentWidth;
- (void)resolveFormatType;

@end

