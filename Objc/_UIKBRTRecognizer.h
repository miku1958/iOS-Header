//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue, _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol;

__attribute__((visibility("hidden")))
@interface _UIKBRTRecognizer : NSObject
{
    int _resetCounter;
    id<_UIKBRTRecognizerDelegate> _delegate;
    id<_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;
    id<_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;
    NSMutableSet *_definitiveRules;
    NSMutableSet *_averagingRules;
    double _maximumNonRestMoveDistance;
    NSObject<OS_dispatch_queue> *_touchQueue;
    NSMutableArray *_touchInfos;
    NSMutableSet *_activeTouches;
    NSObject<OS_dispatch_queue> *_activeTouchesQueue;
    NSMutableArray *_ignoredTouches;
    NSObject<OS_dispatch_queue> *_ignoredTouchesQueue;
    double _touchIntervalAverage;
    struct CGSize _clusterRestHaloSize;
}

@property (strong, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue; // @synthesize activeTouchesQueue=_activeTouchesQueue;
@property (readonly, nonatomic) NSMutableSet *averagingRules; // @synthesize averagingRules=_averagingRules;
@property (nonatomic) struct CGSize clusterRestHaloSize; // @synthesize clusterRestHaloSize=_clusterRestHaloSize;
@property (readonly, nonatomic) NSMutableSet *definitiveRules; // @synthesize definitiveRules=_definitiveRules;
@property (nonatomic) id<_UIKBRTRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableArray *ignoredTouches; // @synthesize ignoredTouches=_ignoredTouches;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue; // @synthesize ignoredTouchesQueue=_ignoredTouchesQueue;
@property (nonatomic) double maximumNonRestMoveDistance; // @synthesize maximumNonRestMoveDistance=_maximumNonRestMoveDistance;
@property (nonatomic) int resetCounter; // @synthesize resetCounter=_resetCounter;
@property (strong, nonatomic) NSMutableArray *touchInfos; // @synthesize touchInfos=_touchInfos;
@property (nonatomic) double touchIntervalAverage; // @synthesize touchIntervalAverage=_touchIntervalAverage;
@property (strong, nonatomic) id<_UIKBRTRecognizerTouchLoggingProtocol> touchLogger; // @synthesize touchLogger=_touchLogger;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // @synthesize touchQueue=_touchQueue;
@property (strong, nonatomic) id<_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker; // @synthesize touchTracker=_touchTracker;

- (void).cxx_destruct;
- (void)_doBeginTouchWithTouchInfo:(id)arg1;
- (void)_doCancelledTouchWithTouchInfo:(id)arg1;
- (void)_doEndedTouchWithTouchInfo:(id)arg1;
- (void)_doIgnoreTouchWithTouchInfo:(id)arg1;
- (void)_doMarkTouchProcessedWithTouchInfo:(id)arg1;
- (void)_doMovedTouchWithTouchInfo:(id)arg1;
- (BOOL)addedToActiveTouches:(id)arg1;
- (void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (void)kbStatusMessage:(id)arg1;
- (float)letRulesModifyNewTouchInfo:(id)arg1;
- (void)letRulesModifyPendingTouchInfo:(id)arg1;
- (BOOL)makeTouchActive:(id)arg1;
- (void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2;
- (void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 because:(id)arg3;
- (void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 withMessage:(id)arg3;
- (void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2;
- (void)notifyDelegateOfCancelledTouch:(id)arg1;
- (void)notifyDelegateOfIgnoringTouch:(id)arg1;
- (BOOL)notifyDelegateOfMovedTouch:(id)arg1;
- (void)notifyDelegateOfRestingTouch:(id)arg1;
- (void)notifyDelegateOfSuccessfulTouch:(id)arg1;
- (void)processTouchInfo:(id)arg1;
- (BOOL)queryDelegateOfIgnoringTouch:(id)arg1;
- (BOOL)queryDelegateOfRestingTouch:(id)arg1;
- (BOOL)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned long long)arg2 restartIfNecessary:(BOOL)arg3;
- (BOOL)removedFromActiveTouches:(id)arg1;
- (void)resetWithStandardKeyPixelSize:(struct CGSize)arg1;
- (void)touchCancelled:(id)arg1 withIdentifier:(id)arg2;
- (void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3;
- (void)touchDragged:(id)arg1 withIdentifier:(id)arg2;
- (void)touchUp:(id)arg1 withIdentifier:(id)arg2;
- (void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(BOOL)arg3;

@end

