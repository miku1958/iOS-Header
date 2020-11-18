//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _authenticationRequired;
    NSString *_address;
    long long _port;
    NSString *_username;
    NSString *_password;
    long long _type;
}

@property (readonly) NSString *address; // @synthesize address=_address;
@property BOOL authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property (copy) NSString *password; // @synthesize password=_password;
@property (readonly) long long port; // @synthesize port=_port;
@property long long type; // @synthesize type=_type;
@property (copy) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyPassword;
- (id)copyProtectionSpace;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 port:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3;
- (BOOL)needToUpdateKeychain;
- (void)removeFromKeychain;
- (void)syncWithKeychain;

@end

