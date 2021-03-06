//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDualTimeView.h>

@class NTKWhistlerAnalogColorPalette;

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView
{
    NTKWhistlerAnalogColorPalette *_palette;
}

@property (strong, nonatomic) NTKWhistlerAnalogColorPalette *palette; // @synthesize palette=_palette;

- (void).cxx_destruct;
- (double)_analogTickInset;
- (id)_digitalTimeLabelColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1;
- (unsigned long long)_hourTickCount;
- (struct CGSize)_hourTickSize;
- (unsigned long long)_minuteTickCount;
- (struct CGSize)_minuteTickSize;
- (id)_secondHandColorForColor:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 andDevice:(id)arg3;

@end

