//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@interface SBHapticSwitcherEventResponse : SBSwitcherModifierEventResponse
{
    long long _hapticType;
    long long _phase;
}

@property (readonly, nonatomic) long long hapticType; // @synthesize hapticType=_hapticType;
@property (readonly, nonatomic) long long phase; // @synthesize phase=_phase;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithHapticType:(long long)arg1 phase:(long long)arg2;
- (long long)type;

@end

