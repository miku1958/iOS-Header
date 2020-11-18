//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate
{
    NSArray *_predicates;
}

@property (readonly, copy, nonatomic) NSString *compoundOperatorJoiner; // @dynamic compoundOperatorJoiner;
@property (strong, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;

+ (id)predicateMatchingPredicates:(id)arg1;
- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)spotlightPredicate;

@end

