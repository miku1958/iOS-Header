//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface NSHTTPCookie2LookupFilter : NSObject
{
    BOOL _secure;
    BOOL _httpOnly;
    BOOL _ignoreHostOnlyFlag;
    BOOL _ignoreHTTPOnlyCookie;
    BOOL _ignoreSecureFlag;
    BOOL _isTopLevelNavigation;
    BOOL _isSafe;
    NSString *_name;
    NSString *_value;
    NSString *_domain;
    NSString *_path;
    NSString *_partition;
    long long _sameSite;
    NSDate *_newerThanCreationDate;
    NSDate *_newerThanExpirationDate;
    NSDate *_newerThanLastAccess;
    NSDate *_olderThanCreationDate;
    NSDate *_olderThanExpirationDate;
    NSDate *_olderThanLastAccess;
    NSURL *_inURL;
    NSURL *_mainDocumentURL;
    NSURL *_siteForCookies;
    unsigned long long _acceptPolicy;
}

@property unsigned long long acceptPolicy; // @synthesize acceptPolicy=_acceptPolicy;
@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property BOOL httpOnly; // @synthesize httpOnly=_httpOnly;
@property BOOL ignoreHTTPOnlyCookie; // @synthesize ignoreHTTPOnlyCookie=_ignoreHTTPOnlyCookie;
@property BOOL ignoreHostOnlyFlag; // @synthesize ignoreHostOnlyFlag=_ignoreHostOnlyFlag;
@property BOOL ignoreSecureFlag; // @synthesize ignoreSecureFlag=_ignoreSecureFlag;
@property (copy, nonatomic) NSURL *inURL; // @synthesize inURL=_inURL;
@property BOOL isSafe; // @synthesize isSafe=_isSafe;
@property BOOL isTopLevelNavigation; // @synthesize isTopLevelNavigation=_isTopLevelNavigation;
@property (copy, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSDate *newerThanCreationDate; // @synthesize newerThanCreationDate=_newerThanCreationDate;
@property (copy, nonatomic) NSDate *newerThanExpirationDate; // @synthesize newerThanExpirationDate=_newerThanExpirationDate;
@property (copy, nonatomic) NSDate *newerThanLastAccess; // @synthesize newerThanLastAccess=_newerThanLastAccess;
@property (copy, nonatomic) NSDate *olderThanCreationDate; // @synthesize olderThanCreationDate=_olderThanCreationDate;
@property (copy, nonatomic) NSDate *olderThanExpirationDate; // @synthesize olderThanExpirationDate=_olderThanExpirationDate;
@property (copy, nonatomic) NSDate *olderThanLastAccess; // @synthesize olderThanLastAccess=_olderThanLastAccess;
@property (copy, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;
@property long long sameSite; // @synthesize sameSite=_sameSite;
@property BOOL secure; // @synthesize secure=_secure;
@property (copy, nonatomic) NSURL *siteForCookies; // @synthesize siteForCookies=_siteForCookies;
@property (copy, nonatomic) NSString *value; // @synthesize value=_value;

- (void).cxx_destruct;
- (long long)_flags;
- (id)initWithCookie:(id)arg1;
- (BOOL)matchCookie:(id)arg1;

@end
