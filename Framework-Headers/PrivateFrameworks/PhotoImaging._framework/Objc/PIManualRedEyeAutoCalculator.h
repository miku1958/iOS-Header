//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIRedEyeAutoCalculator.h>

@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator
{
    struct CGPoint _location;
    double _touchDiameter;
}

- (void)_configureRequest:(id)arg1;
- (id)_options;
- (id)initWithComposition:(id)arg1 location:(struct CGPoint)arg2 touchDiameter:(double)arg3;

@end

