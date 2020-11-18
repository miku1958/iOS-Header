//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SBFAuthenticationRequest : NSObject
{
    unsigned long long _type;
    long long _source;
    CDUnknownBlockType _handler;
    NSData *_payload;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property (readonly, nonatomic) long long source; // @synthesize source=_source;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initForMesaWithSource:(long long)arg1 successful:(BOOL)arg2;
- (id)initForMesaWithSource:(long long)arg1 successful:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initForPasscode:(id)arg1 source:(long long)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithType:(unsigned long long)arg1 source:(long long)arg2 payload:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 source:(long long)arg2 payload:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)publicDescription;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

