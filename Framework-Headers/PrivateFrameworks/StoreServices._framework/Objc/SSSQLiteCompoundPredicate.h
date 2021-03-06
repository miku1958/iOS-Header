//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSSQLitePredicate.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying>
{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

@property (readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;

+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

