//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@interface SCNActionPlaySound : SCNAction
{
    struct SCNCPlaySound *_mycaction;
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_setupDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end

