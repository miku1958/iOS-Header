//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NTKAltitudeColorCurve;

@interface NTKSiderealColorManager : NSObject
{
    NSMutableArray *_updateHandlers;
    NTKAltitudeColorCurve *_dialBackground;
    NSArray *_dayGradient;
    NTKAltitudeColorCurve *_civilTwilight;
    NTKAltitudeColorCurve *_nauticalTwilight;
    NTKAltitudeColorCurve *_astronomicalTwilight;
    NTKAltitudeColorCurve *_innerComplication;
    NTKAltitudeColorCurve *_outerComplication;
    NTKAltitudeColorCurve *_dayDiskBloom;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (void)_notifyHandlers;
- (void)addColorUpdateHandler:(CDUnknownBlockType)arg1;
- (id)astronomicalTwilightColorCurve;
- (id)civilTwilightColorCurve;
- (id)dayDiskBloomColorCurve;
- (id)dayGradientColorCurves;
- (void)dealloc;
- (id)dialBackgroundColorCurve;
- (id)innerComplicationColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)outerComplicationColorCurve;
- (void)setSunAltitude:(double)arg1;

@end
