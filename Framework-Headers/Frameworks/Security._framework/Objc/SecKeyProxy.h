//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/NSXPCListenerDelegate-Protocol.h>

@class NSData, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface SecKeyProxy : NSObject <NSXPCListenerDelegate>
{
    id _key;
    NSData *_certificate;
    NSXPCListener *_listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct __SecIdentity *)createIdentityFromEndpoint:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)createItemFromEndpoint:(id)arg1 certificate:(id *)arg2 error:(id *)arg3;
+ (struct __SecKey *)createKeyFromEndpoint:(id)arg1 error:(id *)arg2;
+ (id)targetForKey:(struct __SecKey *)arg1 error:(struct __CFError **)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;
- (id)initWithKey:(struct __SecKey *)arg1;
- (id)initWithKey:(struct __SecKey *)arg1 certificate:(id)arg2;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

