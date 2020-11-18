//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSDate, NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>
{
    SBAppStatusBarSettings *_settings;
    unsigned long long _level;
    NSString *_reason;
    NSDate *_timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property (readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly, copy, nonatomic) SBAppStatusBarSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (void)acquire;
- (void)acquireWithAnimationParameters:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)initWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (void)invalidate;
- (void)invalidateWithAnimationParameters:(id)arg1;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1 animationParameters:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
