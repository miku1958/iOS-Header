//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, TLAttentionAwarenessEffectCoordinator, TLAttentionAwarenessEffectProcessor;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject
{
    TLAttentionAwarenessEffectCoordinator *_effectCoordinator;
    TLAttentionAwarenessEffectProcessor *_effectProcessor;
    NSUUID *_identifier;
}

@property (weak, nonatomic) TLAttentionAwarenessEffectCoordinator *effectCoordinator; // @synthesize effectCoordinator=_effectCoordinator;
@property (strong, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor; // @synthesize effectProcessor=_effectProcessor;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
