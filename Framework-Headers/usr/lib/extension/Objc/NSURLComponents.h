//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface NSURLComponents : NSObject <NSCopying>
{
}

@property (readonly, copy) NSURL *URL;
@property (copy) NSString *fragment;
@property (copy) NSString *host;
@property (copy) NSString *password;
@property (copy) NSString *path;
@property (copy) NSString *percentEncodedFragment;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSArray *percentEncodedQueryItems;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSNumber *port;
@property (copy) NSString *query;
@property (copy) NSArray *queryItems;
@property (readonly) struct _NSRange rangeOfFragment;
@property (readonly) struct _NSRange rangeOfHost;
@property (readonly) struct _NSRange rangeOfPassword;
@property (readonly) struct _NSRange rangeOfPath;
@property (readonly) struct _NSRange rangeOfPort;
@property (readonly) struct _NSRange rangeOfQuery;
@property (readonly) struct _NSRange rangeOfScheme;
@property (readonly) struct _NSRange rangeOfUser;
@property (copy) NSString *scheme;
@property (readonly, copy) NSString *string;
@property (copy) NSString *user;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)componentsWithString:(id)arg1;
+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2;
- (id)URLRelativeToURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2;

@end

