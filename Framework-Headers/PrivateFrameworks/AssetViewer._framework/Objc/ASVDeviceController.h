//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface ASVDeviceController : NSObject
{
    CALayer *_deviceLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_holeLayer;
    CALayer *_shineLayer;
    CALayer *_shineInnerLayer;
    double _aspectRatio;
}

@property (nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) CALayer *deviceLayer;
@property (readonly, nonatomic) CALayer *holeLayer;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGPoint position;
@property (readonly, nonatomic) CALayer *shineLayer; // @synthesize shineLayer=_shineLayer;
@property (nonatomic) struct CATransform3D transform;

- (void).cxx_destruct;
- (id)initWithDeviceMaskImage:(id)arg1;
- (void)update:(double)arg1 visibility:(double)arg2 layer:(id)arg3;

@end

