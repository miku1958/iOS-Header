//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SAObjects/AceObject-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber, NSString;

@interface AceObject : NSObject <AceObject>
{
    NSNumber *_deserializationDuration;
    NSString *_aceId;
    NSString *_refId;
    NSData *_plistData;
    NSMutableDictionary *_dict;
}

@property (copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *plistData; // @synthesize plistData=_plistData;
@property (copy, nonatomic) NSString *refId; // @synthesize refId=_refId;
@property (readonly) Class superclass;

+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)_filteredDictionaryForKeySet:(struct __CFSet *)arg1 plistData:(id)arg2;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithPlistData:(id)arg1;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5;
- (id)_descriptionHint;
- (void)_deserializeFromPlistData;
- (id)_dict;
- (id)_initWithMutableDictionary:(id)arg1;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3;
- (id)_serializedData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)deserializationDuration;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedClassName;
- (id)forceEagerDeserialization;
- (id)fullDescription;
- (id)groupIdentifier;
- (BOOL)hasArrayForPropertyForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKeyWithoutDeserializing:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (id)topLevelPropertyForKey:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
