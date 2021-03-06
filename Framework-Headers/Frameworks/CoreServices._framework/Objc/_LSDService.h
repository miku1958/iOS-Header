//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface _LSDService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

@property (readonly, weak) NSXPCListener *XPCListener; // @synthesize XPCListener=_listener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)XPCConnectionIsAlwaysPrivileged;
+ (id)XPCConnectionToService;
+ (id)XPCInterface;
+ (id)XPCProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (id)allServiceClasses;
+ (void)beginListeningWithAllServices;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (id)dispatchQueue;
+ (BOOL)isEnabled;
+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (id)synchronousXPCProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)initWithXPCListener:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

