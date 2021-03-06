//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIShelfLayoutData : NSObject
{
    double _columnSpacing;
    NSMutableArray *_columnWidths;
    struct UIEdgeInsets _contentInset;
    long long _numberOfRows;
    double *_rowHeights;
}

@property (readonly, nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (readonly, nonatomic) struct CGSize totalContentSize;

- (void).cxx_destruct;
- (double)columnWidthForIndex:(long long)arg1;
- (void)dealloc;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2;
- (void)reloadWithItemCount:(long long)arg1 sizeBlock:(CDUnknownBlockType)arg2;
- (double)rowHeightForIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

@end

