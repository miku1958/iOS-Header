//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import <CloudKitDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface CKRecordID (CKPrequeliteBindings) <PQLValuable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
@end

