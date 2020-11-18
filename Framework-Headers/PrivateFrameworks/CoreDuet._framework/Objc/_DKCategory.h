//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    long long _integerValue;
    _DKCategoryType *_categoryType;
}

@property (strong) _DKCategoryType *categoryType; // @synthesize categoryType=_categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long integerValue; // @synthesize integerValue=_integerValue;
@property (readonly) Class superclass;

+ (id)_categoryFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)categoryWithInteger:(long long)arg1 type:(id)arg2;
+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compareValue:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)objectType;
- (id)primaryValue;
- (id)stringValue;
- (id)toPBCodable;
- (long long)typeCode;

@end
