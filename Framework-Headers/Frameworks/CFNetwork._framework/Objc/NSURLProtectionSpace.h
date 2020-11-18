//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>
{
    NSURLProtectionSpaceInternal *_internal;
}

@property (readonly, copy) NSString *authenticationMethod;
@property (readonly, copy) NSString *host;
@property (readonly) BOOL isProxy;
@property (readonly) long long port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *realm;
@property (readonly) BOOL receivesCredentialSecurely;

+ (BOOL)supportsSecureCoding;
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg1;
- (id)_internalInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)distinguishedNames;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (struct __SecTrust *)serverTrust;

@end

