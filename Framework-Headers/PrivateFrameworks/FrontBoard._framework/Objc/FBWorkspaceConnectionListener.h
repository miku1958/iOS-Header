//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionEndpoint, BSServiceConnectionListener, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSServiceConnectionListenerDelegate>
{
    BSServiceConnectionListener *_listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedDomain;
+ (id)sharedDomainIdentifier;
+ (id)sharedDomainMachService;
+ (BOOL)sharedDomainUsesDefaultShellEndpoint;
+ (id)sharedInstance;
+ (BOOL)shouldInjectEndpoint;
- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

