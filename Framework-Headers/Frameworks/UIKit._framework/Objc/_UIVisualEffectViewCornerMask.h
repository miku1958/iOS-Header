//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewCornerMask : NSObject <NSCopying>
{
    UIImage *_image;
    struct CGRect _imageCenter;
    unsigned long long _appliedCorners;
    BOOL _continuous;
    BOOL _effectsEdges;
    double _radius;
}

@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;

+ (void)_applyZeroMaskToLayer:(id)arg1;
+ (id)continuousCornerMaskWithRadius:(double)arg1;
+ (id)cornerMaskWithRadius:(double)arg1;
+ (id)cornerMaskWithRadius:(double)arg1 continuous:(BOOL)arg2 cornerMask:(unsigned long long)arg3;
+ (id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2;
- (void).cxx_destruct;
- (void)_applyToLayer:(id)arg1;
- (id)_clone;
- (BOOL)_isCornerWithRadius:(double)arg1 continuous:(BOOL)arg2 mask:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cornerMaskAppliedToCorners:(unsigned long long)arg1;
- (id)cornerMaskEffectingEdges:(BOOL)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

