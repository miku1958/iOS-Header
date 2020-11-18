//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIChartSeries.h>

@class NSArray, NSDictionary, NSMutableArray, UIColor;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries
{
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
    UIColor *_barColor;
    double _cornerRadius;
    NSDictionary *_labelAttributes;
}

@property (strong, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (strong, nonatomic) NSDictionary *labelAttributes; // @synthesize labelAttributes=_labelAttributes;

- (void).cxx_destruct;
- (void)_loadFromDataSet;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSubviews;

@end
