//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying>
{
    BOOL _unary;
    BOOL _trueIfNoPredicates;
    NSString *_combinationOperation;
    NSArray *_predicates;
}

@property (readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;

+ (id)negatedPredicate:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

