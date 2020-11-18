//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKQuantityType;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    double _doubleValue;
    _DKQuantityType *_quantityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (readonly) unsigned long long hash;
@property (strong) _DKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property (readonly) Class superclass;

+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)quantityWithDouble:(double)arg1 type:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compareValue:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1 type:(id)arg2;
- (id)objectType;
- (id)primaryValue;
- (id)stringValue;

@end
