//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCROConnection : NSObject <NSSecureCoding>
{
    BOOL _isConnectionStarted;
    unsigned int _pingPort;
    struct __CFRunLoopSource *_pingSource;
    struct __CFRunLoopSource *_invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id _delegate;
}

+ (void)_addConnectionToRunLoop:(id)arg1;
+ (void)_configServer;
+ (void)_createConnectionRunLoop;
+ (void)_unconfigServerAndRetry:(BOOL)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_ping;
- (void)_startConnection;
- (void)_stopConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)handlerArrayValueForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;
- (void)invalidate;
- (int)performHandlerActionForKey:(int)arg1;
- (int)registerHandlerCallbackForKey:(int)arg1;
- (int)sendEvent:(id)arg1;
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;

@end
