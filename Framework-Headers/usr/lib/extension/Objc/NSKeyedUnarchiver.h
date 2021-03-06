//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@protocol NSKeyedUnarchiverDelegate;

@interface NSKeyedUnarchiver : NSCoder
{
    id _delegate;
    _Atomic unsigned long long _flags;
    id _objRefMap;
    id _replacementMap;
    id _nameClassMap;
    id _tmpRefObjMap;
    id _refObjMap;
    int _genericKey;
    id _data;
    void *_offsetData;
    id _containers;
    id _objects;
    const char *_bytes;
    unsigned long long _len;
    id _helper;
    void *_reserved0;
}

@property long long decodingFailurePolicy;
@property id<NSKeyedUnarchiverDelegate> delegate;
@property BOOL requiresSecureCoding;

+ (id)_strictlyUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (Class)classForClassName:(id)arg1;
+ (void)initialize;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedArrayOfObjectsOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)unarchivedArrayOfObjectsOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)unarchivedDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 fromData:(id)arg3 error:(id *)arg4;
+ (id)unarchivedDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 fromData:(id)arg3 error:(id *)arg4;
+ (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
- (void)__setError:(id)arg1;
- (id)_allowedClassNames;
- (BOOL)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (BOOL)_containsNextUnkeyedObject;
- (unsigned int)_currentUniqueIdentifier;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (void)_enableStrictSecureDecodingMode;
- (id)_initForReadingFromData:(id)arg1 error:(id *)arg2 throwLegacyExceptions:(BOOL)arg3;
- (id)_initWithStream:(struct __CFReadStream *)arg1 data:(id)arg2 topDict:(struct __CFDictionary *)arg3;
- (void)_replaceObject:(id)arg1 withObject:(id)arg2;
- (void)_setAllowedClassNames:(id)arg1;
- (BOOL)_strictSecureDecodingEnabled;
- (void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2;
- (BOOL)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (Class)classForClassName:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (void)dealloc;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;
- (id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)description;
- (id)error;
- (void)finishDecoding;
- (id)init;
- (id)initForReadingFromData:(id)arg1 error:(id *)arg2;
- (id)initForReadingWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)setAllowedClasses:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

@end

