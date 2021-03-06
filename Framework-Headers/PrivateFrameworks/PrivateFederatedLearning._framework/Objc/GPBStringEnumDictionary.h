//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/GPBDictionaryInternalsProtocol-Protocol.h>
#import <PrivateFederatedLearning/NSCopying-Protocol.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBStringEnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
    CDUnknownFunctionPointerType _validationFunc;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;

- (void)addRawEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)getEnum:(int *)arg1 forKey:(id)arg2;
- (BOOL)getRawValue:(int *)arg1 forKey:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(id *)arg3 count:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeEnumForKey:(id)arg1;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;
- (void)setEnum:(int)arg1 forKey:(id)arg2;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)setRawValue:(int)arg1 forKey:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

