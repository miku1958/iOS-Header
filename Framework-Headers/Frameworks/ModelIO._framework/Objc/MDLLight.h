//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@interface MDLLight : MDLObject
{
    struct RTLight *_light;
    unsigned long long _lightType;
}

@property (nonatomic) unsigned long long lightType; // @synthesize lightType=_lightType;
@property (readonly, nonatomic) struct RTLight *rtLight;

- (void)dealloc;
- (id)init;
- (struct CGColor *)irradianceAtPoint: /* Error: Ran out of types for this method. */;
- (struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg1 colorSpace: /* Error: Ran out of types for this method. */;
- (void)setTransform:(id)arg1;

@end

