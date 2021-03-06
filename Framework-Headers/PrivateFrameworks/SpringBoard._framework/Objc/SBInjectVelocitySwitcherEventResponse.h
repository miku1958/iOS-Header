//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSString, SBAppLayout;

@interface SBInjectVelocitySwitcherEventResponse : SBSwitcherModifierEventResponse
{
    SBAppLayout *_appLayout;
    NSString *_key;
    id _velocity;
}

@property (readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property (readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, nonatomic) id velocity; // @synthesize velocity=_velocity;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVelocity:(id)arg1 forKey:(id)arg2 appLayout:(id)arg3;
- (long long)type;

@end

