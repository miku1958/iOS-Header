//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase
{
    unsigned long long _token;
    unsigned long long _options;
    CDUnknownBlockType _handler;
    BOOL _registered;
}

@property (readonly, copy) CDUnknownBlockType handler;
@property (readonly) struct __CFString *name;
@property (readonly) void *object;
@property (readonly) void *observer;
@property (readonly) unsigned long long options; // @synthesize options=_options;
@property (strong) id queue; // @dynamic queue;
@property (readonly, getter=isRegistered) BOOL registered; // @synthesize registered=_registered;
@property (readonly) unsigned long long token; // @synthesize token=_token;

+ (id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)find:(unsigned long long)arg1;
+ (const CDStruct_90be15af *)keyCallbacks;
+ (void)remove:(unsigned long long)arg1;
- (void)_invalidate;
- (void)_removeFromParent;
- (void)addToObserver:(id)arg1;
- (CDUnknownBlockType)copyHandler;
- (void)dealloc;
- (id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (void *)key;
- (void)removeFromParent;

@end

