//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizer : NSObject
{
    struct CGRect _screenBounds;
    BOOL _shouldUseGrapeFlags;
    BOOL _hasRecordedData;
    BOOL _hasDoneInitialBackProjectionTest;
    struct CGPoint _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    struct CGPoint _lastTouchLocation;
    double _lastTouchTimestamp;
    long long _lastTouchModifier;
    long long _type;
    int _notifyToken;
    BOOL _simulatorWantsEdgeSwipes;
    BOOL _requiresFlatThumb;
    BOOL _recognizeAlongEdge;
    _UIScreenEdgePanRecognizerSettings *_settings;
    unsigned long long _targetEdges;
    long long _state;
    unsigned long long _recognizedRegion;
    id<_UIScreenEdgePanRecognizerDelegate> _delegate;
}

@property (readonly, nonatomic) struct CGPoint _lastTouchLocation; // @synthesize _lastTouchLocation;
@property id<_UIScreenEdgePanRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasRecordedData; // @synthesize hasRecordedData=_hasRecordedData;
@property (nonatomic) BOOL recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property (readonly, nonatomic) unsigned long long recognizedRegion; // @synthesize recognizedRegion=_recognizedRegion;
@property (nonatomic) BOOL requiresFlatThumb; // @synthesize requiresFlatThumb=_requiresFlatThumb;
@property (nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property (strong, nonatomic) _UIScreenEdgePanRecognizerSettings *settings; // @synthesize settings=_settings;
@property (nonatomic) BOOL shouldUseGrapeFlags; // @synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags;
@property (nonatomic) BOOL simulatorWantsEdgeSwipes; // @synthesize simulatorWantsEdgeSwipes=_simulatorWantsEdgeSwipes;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property (readonly, nonatomic) BOOL useGrapeFlags;

- (void).cxx_destruct;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_setState:(long long)arg1;
- (unsigned long long)_targetEdges;
- (long long)_type;
- (void)dealloc;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 settings:(id)arg2;
- (void)reset;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;

@end

