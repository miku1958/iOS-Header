//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_filters;
}

@property (strong, nonatomic) NSMutableDictionary *filters; // @synthesize filters=_filters;

+ (id)attributeFilter;
+ (id)attributeFilterWithDictionary:(id)arg1;
+ (unsigned long long)hashDictionary:(id)arg1;
+ (unsigned long long)hashObject:(id)arg1;
+ (unsigned long long)hashSet:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (void)addAllowedValue:(id)arg1 forKey:(id)arg2;
- (void)addAllowedValues:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromFilter:(id)arg1;
- (id)allowedValuesForKey:(id)arg1;
- (id)description;
- (BOOL)doesContainAttributes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entriesMatchingAttributes:(id)arg1;
- (void)enumerateAllowedValuesAndKeys:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToQueryFilter:(id)arg1;
- (void)removeAllowedValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllowedValues:(id)arg1 forKey:(id)arg2;

@end

