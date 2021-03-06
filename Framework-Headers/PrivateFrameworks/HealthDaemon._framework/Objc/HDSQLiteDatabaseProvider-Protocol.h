//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDDatabaseTransaction, HDSQLiteDatabase;

@protocol HDSQLiteDatabaseProvider <NSObject>
- (void)checkInDatabase:(HDSQLiteDatabase *)arg1 type:(long long)arg2;
- (HDSQLiteDatabase *)checkOutProtectedDatabase:(HDDatabaseTransaction *)arg1 highFrequencyDataStore:(id *)arg2 error:(id *)arg3;
- (HDSQLiteDatabase *)checkOutUnprotectedDatabase:(HDDatabaseTransaction *)arg1 error:(id *)arg2;
@end

