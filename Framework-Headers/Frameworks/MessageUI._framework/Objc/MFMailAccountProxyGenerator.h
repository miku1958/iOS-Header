//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject
{
    _MFMailAccountProxySource *_proxySource;
    BOOL _allowsRestrictedAccounts;
}

- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)allAccountProxies;
- (void)dealloc;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)init;
- (id)initWithAllowsRestrictedAccounts:(BOOL)arg1;

@end

