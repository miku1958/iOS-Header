//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPIPBehaviorOverrideAssertion.h>

@interface SBPIPWindowLevelOverrideAssertion : SBPIPBehaviorOverrideAssertion
{
    unsigned long long _windowLevel;
}

@property (readonly, nonatomic) unsigned long long windowLevel; // @synthesize windowLevel=_windowLevel;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithWindowLevel:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

@end

