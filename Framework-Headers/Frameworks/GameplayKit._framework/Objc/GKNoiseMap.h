//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface GKNoiseMap : NSObject
{
    struct NoiseMap _map;
    BOOL _seamless;
    MISSING_TYPE *_sampleCount;
    NSDictionary *_gradientColors;
    MISSING_TYPE *_size;
    MISSING_TYPE *_origin;
}

@property (readonly, copy, nonatomic) NSDictionary *gradientColors; // @synthesize gradientColors=_gradientColors;
@property (readonly, nonatomic) MISSING_TYPE *origin; // @synthesize origin=_origin;
@property (readonly, nonatomic) MISSING_TYPE *sampleCount; // @synthesize sampleCount=_sampleCount;
@property (readonly, nonatomic, getter=isSeamless) BOOL seamless; // @synthesize seamless=_seamless;
@property (readonly, nonatomic) MISSING_TYPE *size; // @synthesize size=_size;

+ (id)noiseMapWithNoise:(id)arg1;
+ (id)noiseMapWithNoise:(id)arg1 size:(BOOL)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)__colorData;
- (id)init;
- (id)initWithNoise:(id)arg1;
- (id)initWithNoise:(id)arg1 size:(BOOL)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;
- (float)interpolatedValueAtPosition: /* Error: Ran out of types for this method. */;
- (void)setValue:(float)arg1 atPosition: /* Error: Ran out of types for this method. */;
- (float)valueAtPosition: /* Error: Ran out of types for this method. */;

@end
