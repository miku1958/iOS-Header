//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDKeyValueEntityEncoder : HDEntityEncoder
{
}

- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 collection:(id)arg3;
- (id)initWithHealthEntityClass:(Class)arg1 healthDaemon:(id)arg2 database:(id)arg3 purpose:(long long)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;

@end

