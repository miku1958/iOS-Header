//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>

@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying>
{
    id mIndexSet;
}

+ (id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
+ (id)propertySet;
+ (id)propertySetWithProperties:(int)arg1;
+ (id)propertySetWithProperty:(int)arg1;
- (BOOL)containsProperties:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithProperties:(int)arg1;
- (id)initWithPropertySet:(id)arg1;
- (BOOL)intersectsProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)propertySetByAddingProperties:(int)arg1;
- (id)propertySetByAddingPropertiesFromSet:(id)arg1;
- (id)propertySetByAddingProperty:(int)arg1;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByRemovingProperties:(int)arg1;
- (id)propertySetByRemovingPropertiesFromSet:(id)arg1;
- (id)propertySetByRemovingProperty:(int)arg1;
- (id)propertyStrings;

@end

