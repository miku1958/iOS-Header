//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKEffectNode.h>

@class CLKDevice;

@interface NTKChronoSubDial : SKEffectNode
{
    CLKDevice *_device;
    double _labelsRadius;
    double _labelsFontSize;
    long long _labelsFont;
    double _radius;
    struct CGSize _smallOuter;
    struct CGSize _smallInner;
}

@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) long long labelsFont; // @synthesize labelsFont=_labelsFont;
@property (readonly, nonatomic) double labelsFontSize; // @synthesize labelsFontSize=_labelsFontSize;
@property (readonly, nonatomic) double labelsRadius; // @synthesize labelsRadius=_labelsRadius;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly, nonatomic) struct CGSize smallInner; // @synthesize smallInner=_smallInner;
@property (readonly, nonatomic) struct CGSize smallOuter; // @synthesize smallOuter=_smallOuter;

+ (id)lower:(double)arg1 forDevice:(id)arg2;
+ (id)upper:(double)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (id)addNodes:(id)arg1;
- (id)addNodes:(id)arg1 to:(id)arg2;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (void)colorize:(id)arg1;
- (id)initWithRadius:(double)arg1 forDevice:(id)arg2;
- (void)updateTimeScale:(unsigned long long)arg1;

@end

