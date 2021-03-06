//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSStyles/TSSStyle.h>

#import <TSText/TSWPColumnMetrics-Protocol.h>

@class TSWPPadding;

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>
{
}

@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) double textScaleFactor;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (BOOL)equalWidth;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)layoutMarginsForTarget:(id)arg1;
- (void)loadFromArchive:(const struct ColumnStyleArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (void)saveToArchive:(struct ColumnStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end

