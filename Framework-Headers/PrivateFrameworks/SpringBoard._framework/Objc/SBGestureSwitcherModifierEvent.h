//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>

@class NSString, NSUUID, SBAppLayout;
@protocol SBGestureRecognizerTouchHistoryProviding;

@interface SBGestureSwitcherModifierEvent : SBSwitcherModifierEvent <SBGestureRecognizerTouchHistoryProviding>
{
    BOOL _canceled;
    NSUUID *_gestureID;
    SBAppLayout *_selectedAppLayout;
    long long _gestureType;
    unsigned long long _phase;
    double _lastTouchTimestamp;
    double _hysteresis;
    id<SBGestureRecognizerTouchHistoryProviding> _touchHistoryProvider;
    struct CGPoint _locationInContainerView;
    struct CGPoint _translationInContainerView;
    struct CGPoint _velocityInContainerView;
}

@property (nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *gestureID; // @synthesize gestureID=_gestureID;
@property (readonly, nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property (nonatomic) double lastTouchTimestamp; // @synthesize lastTouchTimestamp=_lastTouchTimestamp;
@property (nonatomic) struct CGPoint locationInContainerView; // @synthesize locationInContainerView=_locationInContainerView;
@property (nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property (readonly, nonatomic) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<SBGestureRecognizerTouchHistoryProviding> touchHistoryProvider; // @synthesize touchHistoryProvider=_touchHistoryProvider;
@property (nonatomic) struct CGPoint translationInContainerView; // @synthesize translationInContainerView=_translationInContainerView;
@property (nonatomic) struct CGPoint velocityInContainerView; // @synthesize velocityInContainerView=_velocityInContainerView;

- (void).cxx_destruct;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 gestureType:(long long)arg3 phase:(unsigned long long)arg4;
- (BOOL)isGestureEvent;
- (double)peakSpeed;
- (long long)type;

@end
