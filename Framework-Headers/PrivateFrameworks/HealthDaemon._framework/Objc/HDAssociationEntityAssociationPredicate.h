//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityAssociationPredicate : HDSQLitePredicate
{
    long long _assocationID;
}

+ (id)predicateWithAssociationID:(long long)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (id)description;

@end

