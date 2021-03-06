//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SYStateProvider : NSObject
{
    unsigned int _type;
    unsigned long long _handle;
    id _state;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _encoder;
}

@property (copy, nonatomic) CDUnknownBlockType encoder; // @synthesize encoder=_encoder;

+ (id)stateProviderWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
- (void).cxx_destruct;
- (id)_encodedState;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
- (void)updateState:(id)arg1;

@end

