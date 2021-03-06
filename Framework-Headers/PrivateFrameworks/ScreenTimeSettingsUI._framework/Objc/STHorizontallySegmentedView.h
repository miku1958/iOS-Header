//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSNumber;

@interface STHorizontallySegmentedView : UIView
{
    BOOL _useVibrancy;
    BOOL _truncateLabels;
    NSArray *_segmentItems;
    NSNumber *_numberOfLines;
    unsigned long long _maximumNumberOfLines;
    double _previousWidth;
    NSMutableArray *_segmentViews;
    NSArray *_segmentConstraints;
}

@property (readonly) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property (strong, nonatomic) NSNumber *numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property (nonatomic) double previousWidth; // @synthesize previousWidth=_previousWidth;
@property (copy, nonatomic) NSArray *segmentConstraints; // @synthesize segmentConstraints=_segmentConstraints;
@property (copy, nonatomic) NSArray *segmentItems; // @synthesize segmentItems=_segmentItems;
@property (readonly, nonatomic) NSMutableArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property (readonly) BOOL truncateLabels; // @synthesize truncateLabels=_truncateLabels;
@property (readonly) BOOL useVibrancy; // @synthesize useVibrancy=_useVibrancy;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_stHorizontallySegmentedViewCommonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVibrancy:(BOOL)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(BOOL)arg3;
- (void)layoutSubviews;

@end

