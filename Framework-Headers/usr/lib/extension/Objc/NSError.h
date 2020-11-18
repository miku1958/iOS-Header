//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSCopying-Protocol.h>
#import <extension/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface NSError : NSObject <NSCopying, NSSecureCoding>
{
    void *_reserved;
    long long _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

@property (readonly) long long code;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *helpAnchor;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (readonly) id recoveryAttempter;
@property (readonly, copy) NSDictionary *userInfo;

+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(CDUnknownFunctionPointerType)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
+ (CDUnknownBlockType)userInfoValueProviderForDomain:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (long long)_collectApplicableUserInfoFormatters:(struct **)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct **)arg3 count:(long long)arg4;
- (struct __CFString *)_retainedUserInfoCallBackForKey:(id)arg1;
- (BOOL)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

