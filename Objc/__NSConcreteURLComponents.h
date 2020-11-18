//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLComponents.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface __NSConcreteURLComponents : NSURLComponents <NSCopying>
{
    int _lock;
    NSString *_urlString;
    struct _URIParseInfo _parseInfo;
    unsigned int _schemeComponentValid:1;
    unsigned int _userComponentValid:1;
    unsigned int _passwordComponentValid:1;
    unsigned int _hostComponentValid:1;
    unsigned int _portComponentValid:1;
    unsigned int _pathComponentValid:1;
    unsigned int _queryComponentValid:1;
    unsigned int _fragmentComponentValid:1;
    NSString *_schemeComponent;
    NSString *_userComponent;
    NSString *_passwordComponent;
    NSString *_hostComponent;
    NSNumber *_portComponent;
    NSString *_pathComponent;
    NSString *_queryComponent;
    NSString *_fragmentComponent;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)URL;
- (id)URLRelativeToURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)fragment;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseInfoIsValid;
- (id)password;
- (id)path;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (id)percentEncodedPassword;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)percentEncodedUser;
- (id)port;
- (id)query;
- (id)queryItems;
- (struct _NSRange)rangeOfFragment;
- (struct _NSRange)rangeOfHost;
- (struct _NSRange)rangeOfPassword;
- (struct _NSRange)rangeOfPath;
- (struct _NSRange)rangeOfPort;
- (struct _NSRange)rangeOfQuery;
- (struct _NSRange)rangeOfScheme;
- (struct _NSRange)rangeOfUser;
- (id)scheme;
- (void)setFragment:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPercentEncodedFragment:(id)arg1;
- (void)setPercentEncodedHost:(id)arg1;
- (void)setPercentEncodedPassword:(id)arg1;
- (void)setPercentEncodedPath:(id)arg1;
- (void)setPercentEncodedQuery:(id)arg1;
- (void)setPercentEncodedUser:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setUser:(id)arg1;
- (id)string;
- (id)user;

@end
