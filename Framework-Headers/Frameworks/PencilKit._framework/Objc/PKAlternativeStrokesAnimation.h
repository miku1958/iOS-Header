//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PKShape;

@interface PKAlternativeStrokesAnimation : NSObject
{
    BOOL _accepted;
    BOOL _forceDone;
    PKShape *_shape;
    NSArray *_strokes;
    double _startTime;
    double _crossFadeStartTime;
    double _fadeDuration;
    double _originalStrokeDimmingFactor;
}

@property (readonly, nonatomic) BOOL accepted; // @synthesize accepted=_accepted;
@property (readonly, nonatomic) double crossFadeStartTime; // @synthesize crossFadeStartTime=_crossFadeStartTime;
@property (readonly, nonatomic) double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property (nonatomic) BOOL forceDone; // @synthesize forceDone=_forceDone;
@property (readonly, nonatomic) double originalStrokeDimmingFactor; // @synthesize originalStrokeDimmingFactor=_originalStrokeDimmingFactor;
@property (readonly, nonatomic) PKShape *shape; // @synthesize shape=_shape;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;

- (void).cxx_destruct;
- (double)alphaAtTime:(double)arg1;
- (id)initWithStrokes:(id)arg1 shape:(id)arg2 startTime:(double)arg3 fadeDuration:(double)arg4;
- (BOOL)isDoneAtTime:(double)arg1;
- (double)originalStrokeAlphaAtTime:(double)arg1;
- (void)startCrossFade:(double)arg1 accepted:(BOOL)arg2;

@end
