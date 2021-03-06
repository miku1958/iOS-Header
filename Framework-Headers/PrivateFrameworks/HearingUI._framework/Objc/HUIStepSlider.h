//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSMutableArray, UIColor;

@interface HUIStepSlider : UISlider
{
    BOOL _restrictsValuesToTicks;
    BOOL _supportsVibrancy;
    BOOL _drawsEndTicks;
    unsigned long long _segmentCount;
    UIColor *_tickColor;
    NSMutableArray *_ticks;
}

@property (nonatomic) BOOL drawsEndTicks; // @synthesize drawsEndTicks=_drawsEndTicks;
@property (nonatomic) BOOL restrictsValuesToTicks; // @synthesize restrictsValuesToTicks=_restrictsValuesToTicks;
@property (nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
@property (nonatomic) BOOL supportsVibrancy; // @synthesize supportsVibrancy=_supportsVibrancy;
@property (strong, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property (strong, nonatomic) NSMutableArray *ticks; // @synthesize ticks=_ticks;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)sliderTapped:(id)arg1;
- (id)traitCollection;

@end

