//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSInternalHTTPCookie2Storage-Protocol.h>

@class NSString, NSURL;

@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage>
{
    struct sqlite3 *persistentDb;
    struct sqlite3_stmt *insertCookiesStmt;
    struct sqlite3_stmt *selectDomainCookiesStmt;
    struct sqlite3_stmt *selectAllCookiesStmt;
    struct sqlite3_stmt *deleteCookiesStmt;
    struct sqlite3_stmt *deleteAllCookiesStmt;
    NSURL *_path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSURL *path; // @synthesize path=_path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)deleteAllCookies;
- (void)deleteCookie:(id)arg1;
- (void)deleteCookies:(id)arg1;
- (void)deleteCookiesWithFilter:(id)arg1;
- (id)getAllCookies;
- (id)getCookiesWithFilter:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setCookies:(id)arg1;

@end

