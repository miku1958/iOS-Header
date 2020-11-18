//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject
{
    double _stallDistance;
    double _maxDimension;
    double _thumbRegion;
    int _orientation;
    int _directions[7];
    struct {
        double horizontal;
        double vertical;
    } _axisFlipper;
    double _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    double _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _tapSpeedRegion;
    double _tapVelocityThresholdForRegion;
    BOOL _inTapSpeedRegionForDownEvent;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    double _lastDegrees;
    double _startDegrees;
    double _startDistance;
    BOOL _startedInGutter;
    double _requireDelayBeforeTracking;
    BOOL _requireUp;
    BOOL _thumbRejectionEnabled;
    double _thumbRejectionDistance;
    int _state;
    int _previousState;
    int _direction;
    double _directionalSlope;
    struct SCRCFingerState _finger[2];
    unsigned long long _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    double _distance;
    unsigned long long _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    struct {
        id track;
        id tap;
        id gutterUp;
        id splitTap;
        id canSplitTap;
    } _delegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct {
        BOOL down;
        BOOL dead;
        BOOL gutter;
        unsigned long long current;
        unsigned long long digits;
        unsigned long long count;
        struct CGRect frame;
        struct CGPoint location[8];
        struct CGPoint locationPerTap[8];
        unsigned long long digitsPerTap;
        double thisTime;
        double lastTime;
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    struct {
        SCRCGestureFactory *factory;
        BOOL isSplitting;
        BOOL isTapping;
        BOOL fastTrack;
        BOOL tapDead;
        BOOL timedOut;
        BOOL active;
        unsigned long long fingerIdentifier;
        double fingerDownTime;
        struct CGPoint startTapLocation;
        struct CGPoint lastTapLocation;
        struct CGPoint primaryFingerLocation;
        double tapDistance;
        int state;
    } _split;
}

@property (nonatomic) BOOL thumbRejectionEnabled; // @synthesize thumbRejectionEnabled=_thumbRejectionEnabled;

- (struct CGRect)_currentTapRect;
- (void)_down:(id)arg1;
- (void)_drag:(id)arg1;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleGutterUp;
- (BOOL)_handleSplitEvent:(id)arg1;
- (BOOL)_handleSplitTap;
- (void)_handleTap;
- (void)_processUpAndPost:(BOOL)arg1;
- (void)_up;
- (void)_updateMultiTapFrame;
- (void)_updateStartWithPoint:(struct CGPoint)arg1 time:(double)arg2;
- (void)_updateTapState;
- (unsigned long long)absoluteFingerCount;
- (void)dealloc;
- (int)direction;
- (double)directionalSlope;
- (double)distance;
- (struct CGPoint)endLocation;
- (unsigned long long)fingerCount;
- (double)firstFingerOrbValue;
- (double)flickSpeed;
- (int)gestureState;
- (id)gestureStateString;
- (void)handleGestureEvent:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (struct CGRect)mainFrame;
- (struct CGRect)multiTapFrame;
- (int)orientation;
- (struct CGPoint)rawAverageLocation;
- (struct CGPoint)rawLocation;
- (void)reset;
- (void)setFlickSpeed:(double)arg1;
- (void)setOrientation:(int)arg1;
- (void)setTapSpeed:(double)arg1;
- (void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(struct CGRect)arg2;
- (struct CGPoint)startLocation;
- (unsigned long long)tapCount;
- (struct CGRect)tapFrame;
- (double)tapInterval;
- (BOOL)tapIsDown;
- (struct CGPoint)tapPoint;
- (struct CGPoint)tapPointWeightedToSides;
- (double)tapSpeed;
- (double)vector;
- (double)velocity;

@end

