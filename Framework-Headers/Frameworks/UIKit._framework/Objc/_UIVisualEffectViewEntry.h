//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIVisualEffectDiffable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable>
{
    long long _requirements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long requirements; // @synthesize requirements=_requirements;
@property (readonly) Class superclass;

- (void)addEffectToView:(id)arg1;
- (void)applyEffectAsRequested:(BOOL)arg1 toView:(id)arg2;
- (void)applyIdentityEffectToView:(id)arg1;
- (BOOL)applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 toView:(id)arg3;
- (void)applyRequestedEffectToView:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasTransform;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (BOOL)shouldAnimateProperty:(id)arg1;
- (BOOL)shouldManageCornerRadius;

@end

