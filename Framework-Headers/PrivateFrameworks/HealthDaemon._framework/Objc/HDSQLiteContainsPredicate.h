//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>
{
    BOOL _contains;
    NSArray *_values;
}

@property (readonly, nonatomic) BOOL contains; // @synthesize contains=_contains;
@property (readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;

+ (id)_arrayFromValues:(id)arg1;
+ (id)_containsPredicateWithProperty:(id)arg1 values:(id)arg2 contains:(BOOL)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithProperty:(id)arg1 values:(id)arg2 contains:(BOOL)arg3;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
