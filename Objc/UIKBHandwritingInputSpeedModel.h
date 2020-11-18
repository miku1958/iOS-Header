//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingInputSpeedModel : NSObject
{
    NSMutableArray *_recordedIntervals;
    NSMutableArray *_recordedSpeeds;
    double _lastStrokeTimeStamp;
    double _lastTouchTimeStamp;
    struct CGPoint _lastTouchLocation;
    NSMutableArray *_pointsCurrentStroke;
    BOOL _duringStroke;
    BOOL _autoConfirmationEnabled;
    double _minTimeout;
    double _maxTimeout;
    struct CGRect _handwritingFrame;
}

@property (readonly, nonatomic) BOOL autoConfirmationEnabled; // @synthesize autoConfirmationEnabled=_autoConfirmationEnabled;
@property (nonatomic) struct CGRect handwritingFrame; // @synthesize handwritingFrame=_handwritingFrame;
@property (readonly, nonatomic) double maxTimeout; // @synthesize maxTimeout=_maxTimeout;
@property (readonly, nonatomic) double minTimeout; // @synthesize minTimeout=_minTimeout;

- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint)arg1 timestamp:(double)arg2;
- (void)beginStroke;
- (void)endCharacter;
- (void)endStroke;
- (id)init;
- (double)smoothValueFromArray:(id)arg1;
- (double)speedForCurrentStroke;
- (double)timeoutForNextPage;
- (void)updatePreferences;

@end

