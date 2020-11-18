//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, UISlider;

@interface AKSignatureDebugOptionsViewController : UIViewController
{
    double _minInValue;
    double _maxInValue;
    double _minOutValue;
    double _maxOutValue;
    CDUnknownBlockType _completionHandler;
    UILabel *_minInValueLabel;
    UISlider *_minInValueSlider;
    UILabel *_maxInValueLabel;
    UISlider *_maxInValueSlider;
    UILabel *_minOutValueLabel;
    UISlider *_minOutValueSlider;
    UILabel *_maxOutValueLabel;
    UISlider *_maxOutValueSlider;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) double maxInValue; // @synthesize maxInValue=_maxInValue;
@property (strong, nonatomic) UILabel *maxInValueLabel; // @synthesize maxInValueLabel=_maxInValueLabel;
@property (strong, nonatomic) UISlider *maxInValueSlider; // @synthesize maxInValueSlider=_maxInValueSlider;
@property (nonatomic) double maxOutValue; // @synthesize maxOutValue=_maxOutValue;
@property (strong, nonatomic) UILabel *maxOutValueLabel; // @synthesize maxOutValueLabel=_maxOutValueLabel;
@property (strong, nonatomic) UISlider *maxOutValueSlider; // @synthesize maxOutValueSlider=_maxOutValueSlider;
@property (nonatomic) double minInValue; // @synthesize minInValue=_minInValue;
@property (strong, nonatomic) UILabel *minInValueLabel; // @synthesize minInValueLabel=_minInValueLabel;
@property (strong, nonatomic) UISlider *minInValueSlider; // @synthesize minInValueSlider=_minInValueSlider;
@property (nonatomic) double minOutValue; // @synthesize minOutValue=_minOutValue;
@property (strong, nonatomic) UILabel *minOutValueLabel; // @synthesize minOutValueLabel=_minOutValueLabel;
@property (strong, nonatomic) UISlider *minOutValueSlider; // @synthesize minOutValueSlider=_minOutValueSlider;

- (void).cxx_destruct;
- (double)_updateSlider:(id)arg1 andLabel:(id)arg2 withValue:(double)arg3 andLabelFormat:(id)arg4;
- (void)applyChanges:(id)arg1;
- (id)init;
- (void)sliderValueChanged:(id)arg1;
- (void)viewDidLoad;

@end
