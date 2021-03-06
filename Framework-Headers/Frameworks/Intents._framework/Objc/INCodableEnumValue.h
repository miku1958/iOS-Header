//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableEnum, NSArray, NSString;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding>
{
    INCodableEnum *_codableEnum;
    long long _index;
    NSString *_name;
    NSString *_displayName;
    NSString *_displayNameLocID;
    NSArray *_synonyms;
}

@property (weak, nonatomic, setter=_setCodableEnum:) INCodableEnum *_codableEnum; // @synthesize _codableEnum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *displayNameLocID; // @synthesize displayNameLocID=_displayNameLocID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index; // @synthesize index=_index;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__INCodableEnumDisplayNameIDKey;
- (id)__INCodableEnumDisplayNameKey;
- (id)__INCodableEnumIndexKey;
- (id)__INCodableEnumNameKey;
- (id)__INCodableEnumSynonymsKey;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

