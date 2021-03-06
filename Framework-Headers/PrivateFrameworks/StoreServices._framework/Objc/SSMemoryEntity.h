//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface SSMemoryEntity : NSObject <NSCopying>
{
    long long _databaseID;
    NSMutableDictionary *_propertyValues;
    NSMutableDictionary *_externalPropertyValues;
}

@property (nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property (readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property (readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;

+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (Class)databaseEntityClass;
+ (id)defaultProperties;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;
- (void)setValuesWithDictionary:(id)arg1;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end

