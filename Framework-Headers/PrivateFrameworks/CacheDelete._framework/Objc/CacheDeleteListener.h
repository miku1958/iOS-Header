//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CacheDelete/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>
{
    id _xObj;
    NSMutableSet *_requiredEntitlements;
    Protocol *_protocol;
    NSXPCListener *_listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (strong, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property (strong, nonatomic) NSMutableSet *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property (readonly) Class superclass;
@property (strong, nonatomic) id xObj; // @synthesize xObj=_xObj;

+ (id)daemonListenerWithExportedObject:(id)arg1;
- (void).cxx_destruct;
- (void)addRequiredEntitlement:(id)arg1;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;

@end
