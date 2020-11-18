//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface CPLArchiver : NSCoder
{
    id _archive;
    id _archiveCursor;
    id _rootObject;
    BOOL _forDisplay;
}

@property (strong, nonatomic) id archiveCursor; // @synthesize archiveCursor=_archiveCursor;
@property (readonly, nonatomic) BOOL forDisplay; // @synthesize forDisplay=_forDisplay;

+ (id)_displayableArrayForArray:(id)arg1;
+ (id)_displayableObjectForObject:(id)arg1;
+ (void)_initializeSmallKeyMapping;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)archivedDataWithRootObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)archivedPropertyListWithRootObject:(id)arg1;
+ (id)archivedPropertyListWithRootObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)displayableDictionaryForDictionary:(id)arg1;
+ (id)displayablePropertyListWithRootObject:(id)arg1;
+ (id)fullDescriptionForObject:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1 ofClass:(Class)arg2;
+ (id)unarchivedObjectWithPropertyList:(id)arg1 ofClass:(Class)arg2;
- (void).cxx_destruct;
- (id)_decodeKey:(id)arg1 class:(Class)arg2 inDictionary:(id)arg3;
- (id)_encodeKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (id)archivedPropertyList;
- (BOOL)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (id)decodePropertyList;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodePropertyList:(id)arg1;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)initWithArchive:(id)arg1 rootClass:(Class)arg2;
- (id)initWithRootObject:(id)arg1 forDisplay:(BOOL)arg2;
- (id)initWithRootObject:(id)arg1 forDisplay:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (id)rootObject;

@end

