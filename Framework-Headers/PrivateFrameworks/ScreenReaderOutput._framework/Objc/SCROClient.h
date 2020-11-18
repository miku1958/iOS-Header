//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface SCROClient : NSObject
{
    NSLock *_lock;
    unsigned int _identifier;
    unsigned int _port;
    int _pid;
    struct __CFArray *_queue;
    struct __CFSet *_callbackSet;
}

+ (id)addClientGetIdentifier:(unsigned int *)arg1 token:(CDStruct_6ad76789)arg2 getPort:(unsigned int *)arg3;
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;
+ (void)initialize;
+ (BOOL)isClientTrustedWithPortToken:(CDStruct_6ad76789)arg1;
+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;
+ (long long)removeClientWithPort:(unsigned int)arg1;
+ (void)sendCallback:(id)arg1;
- (void).cxx_destruct;
- (id)_dequeueCallbacks;
- (void)_invalidate;
- (void)_lock;
- (void)_registerCallbackWithKey:(int)arg1;
- (void)_sendCallback:(id)arg1;
- (void)_unlock;
- (BOOL)_wantsCallback:(id)arg1;
- (void)dealloc;
- (id)init;

@end

