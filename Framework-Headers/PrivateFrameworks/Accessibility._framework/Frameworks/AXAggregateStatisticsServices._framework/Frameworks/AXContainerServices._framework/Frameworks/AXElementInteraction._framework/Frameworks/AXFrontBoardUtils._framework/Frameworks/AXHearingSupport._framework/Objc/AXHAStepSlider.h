//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIColor;

@interface AXHAStepSlider : UISlider
{
    UIColor *_trackMarkersColor;
    BOOL _restrictsValuesToTicks;
    unsigned long long _segmentCount;
}

@property (nonatomic) BOOL restrictsValuesToTicks; // @synthesize restrictsValuesToTicks=_restrictsValuesToTicks;
@property (nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)sliderTapped:(id)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;

@end
