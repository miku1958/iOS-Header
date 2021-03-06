//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SKServiceProxy : NSObject
{
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)inAppClientInterface;
+ (id)inAppServiceInterface;
+ (id)serviceProxy;
- (void).cxx_destruct;
- (void)_serviceConnectionInvalidated;
- (id)inAppService;
- (id)inAppServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceConnection;

@end

