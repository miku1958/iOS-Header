//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Query.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query
{
    Class _aggregateEntityClass;
    NSString *_foreignPersistentIDProperty;
    BOOL _isFastCountable;
}

@property (readonly, nonatomic) Class aggregateEntityClass; // @synthesize aggregateEntityClass=_aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty; // @synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable; // @synthesize isFastCountable=_isFastCountable;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countOfEntities;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (BOOL)hasEntities;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;
- (id)persistentIDProperty;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;

@end

