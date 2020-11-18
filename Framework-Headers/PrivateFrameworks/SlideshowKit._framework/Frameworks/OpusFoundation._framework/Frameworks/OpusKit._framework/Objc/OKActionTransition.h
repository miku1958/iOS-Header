//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionTransitionExports-Protocol.h>

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports>
{
    float _progress;
    float _velocity;
    unsigned long long _target;
}

@property (readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) unsigned long long target; // @synthesize target=_target;
@property (readonly, nonatomic) float velocity; // @synthesize velocity=_velocity;

+ (void)setupJavascriptContext:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

