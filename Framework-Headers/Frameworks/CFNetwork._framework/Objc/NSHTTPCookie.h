//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSHTTPCookieInternal, NSString, NSURL;

@interface NSHTTPCookie : NSObject
{
    NSHTTPCookieInternal *_cookiePrivate;
}

@property (readonly, getter=isHTTPOnly) BOOL HTTPOnly;
@property (readonly, copy) NSString *comment;
@property (readonly, copy) NSURL *commentURL;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSDate *expiresDate;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *portList;
@property (readonly, copy) NSDictionary *properties;
@property (readonly, getter=isSecure) BOOL secure;
@property (readonly, getter=isSessionOnly) BOOL sessionOnly;
@property (readonly, copy) NSString *value;
@property (readonly) unsigned long long version;

+ (id)_cf2nsCookies:(struct __CFArray *)arg1;
+ (id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(BOOL)arg3;
+ (struct __CFArray *)_ns2cfCookies:(id)arg1;
+ (id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;
+ (id)cookieWithProperties:(id)arg1;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;
- (id)Comment;
- (id)CommentURL;
- (id)Discard;
- (id)Domain;
- (id)Expires;
- (id)MaxAge;
- (id)Name;
- (id)OriginURL;
- (id)Path;
- (id)Port;
- (id)Secure;
- (id)Value;
- (id)Version;
- (struct OpaqueCFHTTPCookie *)_CFHTTPCookie;
- (struct OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;
- (long long)_compareForHeaderOrder:(id)arg1;
- (BOOL)_isExpired;
- (id)_key;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
