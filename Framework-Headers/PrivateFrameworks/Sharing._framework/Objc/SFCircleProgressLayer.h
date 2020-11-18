//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SFCircleProgressLayer : CALayer
{
    double _progressLineWidth;
    double _oneFullRotation;
    BOOL _showProgressTray;
    long long _progressStartPoint;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

@property (nonatomic) double progress; // @dynamic progress;
@property (strong, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property (strong, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property (nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property (nonatomic) long long progressStartPoint; // @synthesize progressStartPoint=_progressStartPoint;
@property (nonatomic) BOOL showProgressTray; // @synthesize showProgressTray=_showProgressTray;

+ (BOOL)needsDisplayForKey:(id)arg1;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;

@end

