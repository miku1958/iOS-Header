//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView
{
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize *_sizes;
}

- (void).cxx_destruct;
- (id)_labelFont;
- (void)_recalculateIdealHeight;
- (id)_valueFont;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setLabelsAndValues:(id)arg1;

@end

