//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class WBSSQLiteDatabase, WBSSQLiteStatement, WBSSQLiteStatementCache;

@protocol WBSHistoryPredicate <NSObject, NSSecureCoding>
- (WBSSQLiteStatement *)statementForDatabase:(WBSSQLiteDatabase *)arg1 cache:(WBSSQLiteStatementCache *)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
@end
