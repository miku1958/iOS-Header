//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSSPropertySource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource>
{
    struct TSSPropertyStore *mStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)propertyMap;
+ (id)propertyMapWithDictionary:(id)arg1;
+ (id)propertyMapWithPropertiesAndValues:(int)arg1;
+ (id)propertyMapWithPropertyMap:(id)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (void)addValuesFromPropertyMap:(id)arg1;
- (id)allKeys;
- (id)allProperties;
- (id)boxedObjectForProperty:(int)arg1;
- (BOOL)containsAnyPropertyInProperties:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (BOOL)definesProperty:(int)arg1;
- (id)diff:(id)arg1;
- (id)diffOnlyDifferences:(id)arg1;
- (id)diffPropertyNames:(id)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (void)enumeratePropertiesAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)filterWithProperties:(id)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithFirstKey:(int)arg1 andArgumentList:(struct __va_list_tag [1])arg2;
- (id)initWithPropertiesAndValues:(int)arg1;
- (id)initWithPropertyMap:(id)arg1;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPropertyMap:(id)arg1;
- (void)minusPropertyMap:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForProperty:(int)arg1;
- (id)old_description;
- (void)pSetArrayOfBools:(BOOL [9])arg1 forProperty:(int)arg2;
- (void)pSetArrayOfFloats:(float [9])arg1 forProperty:(int)arg2;
- (void)pSetArrayOfInts:(int [9])arg1 forProperty:(int)arg2;
- (void)pSetArrayOfObjects:(id [9])arg1 forProperty:(int)arg2;
- (void)pSetRepeatedArrayOfBools:(const RepeatedField_12b14242 *)arg1 forProperty:(int)arg2 defaultValues:(BOOL [9])arg3 validator:(id)arg4;
- (void)pSetRepeatedArrayOfFloats:(const RepeatedField_324622b8 *)arg1 forProperty:(int)arg2 defaultValues:(float [9])arg3 validator:(id)arg4;
- (void)pSetRepeatedArrayOfInts:(const RepeatedField_c2891982 *)arg1 forProperty:(int)arg2 defaultValues:(int [9])arg3 min:(int)arg4 max:(int)arg5 validator:(id)arg6;
- (void)pSetRepeatedArrayOfInts:(const RepeatedField_c2891982 *)arg1 forProperty:(int)arg2 defaultValues:(int [9])arg3 min:(int)arg4 max:(int)arg5 validator:(id)arg6 usePreviousValueOnDefault:(BOOL)arg7;
- (void)p_getAllKeys:(int *)arg1;
- (id)propertyMapByAddingValuesFromPropertyMap:(id)arg1;
- (id)propertyMapByRemovingValuesForProperties:(id)arg1;
- (id)propertyMapByRemovingValuesFromPropertyMap:(id)arg1;
- (id)propertyMapWithProperties:(id)arg1;
- (void)removeAllPropertyValues;
- (void)removeValueForProperty:(int)arg1;
- (void)removeValuesForProperties:(id)arg1;
- (void)removeValuesFromPropertyMap:(id)arg1;
- (void)setBoolValue:(BOOL)arg1 forProperty:(int)arg2;
- (void)setBoxedObject:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedObjects:(id *)arg1 forProperties:(int *)arg2 withCount:(unsigned long long)arg3;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setObject:(id)arg1 forProperty:(int)arg2;

@end

