//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SXDataTableBlueprint;
@protocol SXDataTableDataSource;

@interface SXDataTableLayouter : NSObject
{
    id<SXDataTableDataSource> _dataSource;
    double _currentWidth;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_minimumColumnWidths;
    NSMutableDictionary *_intendedColumnWidths;
}

@property (strong, nonatomic) SXDataTableBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property (readonly, nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property (readonly, nonatomic) id<SXDataTableDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (strong, nonatomic) NSMutableDictionary *intendedColumnWidths; // @synthesize intendedColumnWidths=_intendedColumnWidths;
@property (strong, nonatomic) NSMutableDictionary *minimumColumnWidths; // @synthesize minimumColumnWidths=_minimumColumnWidths;

- (void).cxx_destruct;
- (id)blueprintForWidth:(double)arg1;
- (id)blueprintUsingRowHeights:(id)arg1 columnWidths:(id)arg2 andTableWidth:(double)arg3;
- (id)columnWidthsForWidth:(double)arg1 resultingTableWidth:(double *)arg2;
- (id)initWithDataSource:(id)arg1;
- (double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)arg1;
- (id)layoutDataTableForWidth:(double)arg1;
- (double)minimumWidthForColumnAtIndex:(unsigned long long)arg1;
- (void)reset;
- (id)rowHeightsForColumnWidths:(id)arg1;
- (struct UIEdgeInsets)tableInsets;
- (double)totalColumnDividerWidth;
- (double)totalTableBorderHeight;
- (double)totalTableBorderWidth;

@end

