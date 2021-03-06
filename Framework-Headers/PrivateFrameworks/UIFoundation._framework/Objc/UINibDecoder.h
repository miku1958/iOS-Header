//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class UINibStringIDTable;

@interface UINibDecoder : NSCoder
{
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    Class *classes;
    id *missingClasses;
    struct UINibDecoderObjectEntry *objects;
    struct UINibDecoderValue *values;
    char *valueTypes;
    void *valueData;
    unsigned long long valueDataSize;
    struct UINibDecoderHeader header;
    id *objectsByObjectID;
    unsigned int *longObjectClassIDs;
    char *shortObjectClassIDs;
    unsigned int *keyMasks;
    long long inlinedValueKey;
    struct UINibDecoderRecursiveState recursiveState;
    UINibStringIDTable *keyIDTable;
    id delegate;
    struct UIKeyToKeyIDCache keyIDCache;
    struct UIKeyAndScopeToValueCache valueCache;
    long long lookupRounds;
    long long maxPossibleLookupRounds;
    long long failedByKeyMask;
    long long savedByKeyMask;
}

@property id delegate; // @synthesize delegate;
@property (readonly, nonatomic, getter=isReusable) BOOL reusable;
@property (readonly, nonatomic) long long uniqueIDForCurrentlyDecodingObject;

+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (void)dealloc;
- (BOOL)decodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeNXObject;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodePropertyList;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)finishDecoding;
- (id)initForReadingWithData:(id)arg1;
- (id)initForReadingWithData:(id)arg1 error:(id *)arg2;
- (id)nextGenericKey;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (unsigned int)systemVersion;
- (BOOL)validateAndIndexClasses:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexData:(id)arg1 error:(id *)arg2;
- (BOOL)validateAndIndexKeys:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexObjects:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexValues:(const void *)arg1 length:(unsigned long long)arg2;
- (long long)versionForClassName:(id)arg1;

@end

