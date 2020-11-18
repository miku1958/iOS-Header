//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSCoder : NSObject
{
}

+ (BOOL)__categorizeException:(id)arg1 intoError:(id *)arg2;
- (BOOL)__failWithException:(id)arg1;
- (BOOL)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (void)__failWithExternalError:(id)arg1;
- (void)__setError:(id)arg1;
- (id)__tryDecodeObjectForKey:(id)arg1 error:(id *)arg2 decodeBlock:(CDUnknownBlockType)arg3;
- (BOOL)_allowsValueCoding;
- (BOOL)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeLongForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1 error:(id *)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (struct CGPoint)decodePoint;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect)decodeRect;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (struct CGSize)decodeSize;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id *)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id *)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2 size:(unsigned long long)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect)arg1;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize)arg1;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _NSZone *)objectZone;
- (BOOL)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (unsigned int)systemVersion;
- (BOOL)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (BOOL)validateClassSupportsSecureCoding:(Class)arg1;
- (long long)versionForClassName:(id)arg1;

@end

