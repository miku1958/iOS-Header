//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@class MISSING_TYPE, NSString;

@interface MDLLight : MDLObject
{
    struct RTLight *_light;
    NSString *_colorSpace;
    struct CGColorSpace *_cgColorSpace;
    unsigned long long _lightType;
}

@property (copy, nonatomic) NSString *colorSpace;
@property (nonatomic) unsigned long long lightType; // @synthesize lightType=_lightType;
@property (readonly, nonatomic) struct RTLight *rtLight;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (struct CGColor *)irradianceAtPoint: /* Error: Ran out of types for this method. */;
- (struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg1 colorSpace: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)position;
- (void)setTransform:(id)arg1;

@end

