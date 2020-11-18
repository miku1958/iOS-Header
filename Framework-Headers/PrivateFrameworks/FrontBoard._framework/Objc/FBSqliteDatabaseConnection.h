//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;
@protocol OS_dispatch_queue;

@interface FBSqliteDatabaseConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 *_queue_dbConnection;
    NSCache *_queue_queryCache;
}

+ (int)_sqliteOpenFlagsForDataProtectionClass:(unsigned long long)arg1;
- (id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithInMemoryDatabase;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (id)lastErrorMessage;
- (void)performSyncWithDatabase:(CDUnknownBlockType)arg1;
- (void)performWithDatabase:(CDUnknownBlockType)arg1;
- (id)prepareStatement:(id)arg1;

@end
