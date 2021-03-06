//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, NSProgress;

@interface ICLoadingPieLayer : CALayer
{
    BOOL _removeOnCompletion;
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_pieLayer;
    CAShapeLayer *_backgroundLayer;
}

@property (strong, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property (strong, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property (strong, nonatomic) CAShapeLayer *pieLayer; // @synthesize pieLayer=_pieLayer;
@property (readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property (nonatomic) BOOL removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (struct CGPath *)newPathForProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgress:(double)arg1;

@end

