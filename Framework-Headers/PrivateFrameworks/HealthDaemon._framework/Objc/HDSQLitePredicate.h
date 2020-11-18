//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDSQLitePredicate : NSObject <NSCopying>
{
}

+ (id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)falsePredicate;
+ (id)truePredicate;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

