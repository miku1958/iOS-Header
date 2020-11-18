//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class CMAttitude, CMMotionManager, NSMutableDictionary, NSOperationQueue, NSString, UILongPressGestureRecognizer;

@interface OKActionBindingMotion : OKActionBinding <UIGestureRecognizerDelegate>
{
    unsigned long long _numberOfTouchesRequired;
    double _motionInterval;
    NSMutableDictionary *_motionContext;
    BOOL _shouldForwardMotion;
    CMMotionManager *_motionManager;
    CMAttitude *_motionAttitudeReference;
    NSOperationQueue *_motionQueue;
    double _lastYaw;
    double _lastRoll;
    double _lastPitch;
    double _lastRotationX;
    double _lastRotationY;
    double _lastRotationZ;
    struct CGPoint _lastLocation;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) CMAttitude *motionAttitudeReference; // @synthesize motionAttitudeReference=_motionAttitudeReference;
@property (nonatomic) double motionInterval; // @synthesize motionInterval=_motionInterval;
@property (nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property (readonly) Class superclass;

+ (id)supportedSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)unload;

@end

