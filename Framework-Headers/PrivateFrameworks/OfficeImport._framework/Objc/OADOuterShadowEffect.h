//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADShadowEffect.h>

__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect
{
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (int)alignment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (void)setRotateWithShape:(BOOL)arg1;
- (void)setXScale:(float)arg1;
- (void)setXSkew:(float)arg1;
- (void)setYScale:(float)arg1;
- (void)setYSkew:(float)arg1;
- (float)xScale;
- (float)xSkew;
- (float)yScale;
- (float)ySkew;

@end
