//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteEntity.h>

@interface HDSQLiteMetaEntity : HDSQLiteEntity
{
}

+ (id)_namePredicate:(id)arg1;
+ (id)_tableNamePredicate:(id)arg1;
+ (id)_typePredicate:(id)arg1;
+ (id)databaseTable;
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3;
- (id)SQLWithDatabase:(id)arg1;
- (id)nameWithDatabase:(id)arg1;
- (id)tableNameWithDatabase:(id)arg1;
- (id)typeWithDatabase:(id)arg1;

@end

