//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class AVCaptureSession, NSMutableDictionary, NSString, NSTimer, UILongPressGestureRecognizer;

@interface OKActionBindingMicrophoneNoise : OKActionBinding <UIGestureRecognizerDelegate>
{
    unsigned long long _numberOfTouchesRequired;
    double _interval;
    NSMutableDictionary *_actionContext;
    AVCaptureSession *_session;
    NSTimer *_timer;
    float _lastMeanAudioLevel;
    BOOL _shouldForwardMotion;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _lastLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interval; // @synthesize interval=_interval;
@property (nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property (readonly) Class superclass;

+ (id)supportedSettings;
- (void)_updateAudioLevels:(id)arg1;
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

