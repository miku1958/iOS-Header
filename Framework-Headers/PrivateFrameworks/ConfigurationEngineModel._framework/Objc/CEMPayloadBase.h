//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CEMPayloadBase : NSObject
{
    NSSet *_unknownPayloadKeys;
}

@property (readonly) NSSet *unknownPayloadKeys; // @synthesize unknownPayloadKeys=_unknownPayloadKeys;

- (void).cxx_destruct;
- (id)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 withKey:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (void)_serializeItemIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 isDefaultValue:(BOOL)arg5;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 parentKeyPath:(id)arg3 validator:(CDUnknownBlockType)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id *)arg7;
- (id)loadBooleanFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadDataFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadDateFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadDictionaryFromDictionary:(id)arg1 withKey:(id)arg2 parentKeyPath:(id)arg3 validator:(CDUnknownBlockType)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id *)arg7;
- (id)loadFloatFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadIntegerFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadStringFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (void)serializeArrayIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 itemSerializer:(CDUnknownBlockType)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6;
- (void)serializeAssetIntoDictionary:(id)arg1 withKey:(id)arg2 assetProvider:(id)arg3 transformType:(id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6;
- (void)serializeBooleanIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeDataIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeDateIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeDictionaryIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 dictSerializer:(CDUnknownBlockType)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6;
- (void)serializeFloatIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeIntegerIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeStringIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;

@end

