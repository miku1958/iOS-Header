//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;
@protocol PUTiltWheelDataSource;

__attribute__((visibility("hidden")))
@interface PUTiltWheel : UIView
{
    int __tiltWheelOrientation;
    id<PUTiltWheelDataSource> _dataSource;
    NSDictionary *__dotsByDegree;
    NSDictionary *__labelsByDegree;
    unsigned long long __numericIndicatorDegreeStep;
}

@property (copy, nonatomic, setter=_setDotsByDegree:) NSDictionary *_dotsByDegree; // @synthesize _dotsByDegree=__dotsByDegree;
@property (copy, nonatomic, setter=_setLabelsByDegree:) NSDictionary *_labelsByDegree; // @synthesize _labelsByDegree=__labelsByDegree;
@property (nonatomic, setter=_setNumericIndicatorDegreeStep:) unsigned long long _numericIndicatorDegreeStep; // @synthesize _numericIndicatorDegreeStep=__numericIndicatorDegreeStep;
@property (nonatomic, setter=_setTiltWheelOrientation:) int _tiltWheelOrientation; // @synthesize _tiltWheelOrientation=__tiltWheelOrientation;
@property (weak, nonatomic) id<PUTiltWheelDataSource> dataSource; // @synthesize dataSource=_dataSource;

- (void).cxx_destruct;
- (struct CGPoint)_baseViewCenterForRadius:(double)arg1 aroundCenter:(struct CGPoint)arg2;
- (unsigned long long)_countOfIndicatorsFrom:(double)arg1 to:(double)arg2 step:(unsigned long long)arg3;
- (double)_dotIndicatorSizeForDegree:(long long)arg1;
- (double)_dotLayoutRadius;
- (void)_layoutDots;
- (void)_layoutLabels;
- (void)_layoutViewsByDegree:(id)arg1 aroundRadius:(double)arg2;
- (id)_makeDotForDegree:(long long)arg1;
- (id)_makeLabelForDegree:(long long)arg1;
- (void)_purgeCachedIndicators;
- (void)layoutSubviews;
- (void)reloadData;

@end
