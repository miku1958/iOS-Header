//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray, _UIValuePredictor;

__attribute__((visibility("hidden")))
@interface _UITouchPredictor : NSObject <NSCopying>
{
    NSMutableArray *_predictions;
    BOOL _predictionsValid;
    _UIValuePredictor *_xValuePredictor;
    _UIValuePredictor *_yValuePredictor;
    _UIValuePredictor *_angleValuePredictor;
    _UIValuePredictor *_azimuthValuePredictor;
    _UIValuePredictor *_forceValuePredictor;
    double _averageTouchInterval;
    double _lastTouchTimestamp;
    double _numPredictionsBuffer[5];
    long long _numPredictionsBufferCount;
}

- (void).cxx_destruct;
- (id)_angleValuePredictor;
- (id)_azimuthValuePredictor;
- (unsigned long long)_dampenedNumPredictionsAtIndex:(unsigned long long)arg1;
- (id)_forceValuePredictor;
- (unsigned long long)_numPredictionsAtIndex:(unsigned long long)arg1 hardLimit:(unsigned long long *)arg2;
- (id)_predictedTouchesAtIndex:(unsigned long long)arg1 forTouch:(id)arg2;
- (void)_updatePredictionsForTouch:(id)arg1 weight:(double)arg2;
- (id)_xValuePredictor;
- (id)_yValuePredictor;
- (void)addTouch:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionFromIndex:(int)arg1 toIndex:(int)arg2 includeHeader:(BOOL)arg3 includeDetailedConfidence:(BOOL)arg4;
- (id)init;
- (id)initWithTouchPredictor:(id)arg1;
- (id)predictedTouchesForTouch:(id)arg1;

@end

