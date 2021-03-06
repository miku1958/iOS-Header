//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/CAAnimationDelegate-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>

@class CAAnimation, NSDictionary, NSString, OFUIView;

@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport>
{
    NSString *_uuid;
    NSDictionary *_settings;
    CAAnimation *_animation;
    OFUIView *_animatedView;
    BOOL _loop;
    BOOL _autoplay;
    BOOL _isPaused;
    BOOL _needsApplySettings;
    double _defaultDuration;
}

@property (nonatomic) OFUIView *animatedView; // @synthesize animatedView=_animatedView;
@property (strong, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property (nonatomic) BOOL autoplay; // @synthesize autoplay=_autoplay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL loop; // @synthesize loop=_loop;
@property (readonly) Class superclass;

+ (id)animationKeyPrefix;
+ (id)supportedSettings;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)isAnimating;
- (void)needsApplySettings;
- (void)pauseAnimation;
- (void)prepareContentEffectWithView:(id)arg1;
- (double)remainingPlayDuration;
- (void)resumeAnimation;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end

