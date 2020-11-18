//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CNPropertyDescription : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_key;
    SEL _readSelector;
    SEL _writeSelector;
    CDUnknownBlockType _valueForKeyTransform;
    BOOL _isNonnull;
}

@property (readonly, nonatomic) NSArray *equivalentLabelSets;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isNonnull; // @synthesize isNonnull=_isNonnull;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, nonatomic) id nilValue;
@property (readonly, nonatomic) SEL readSelector; // @synthesize readSelector=_readSelector;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, copy, nonatomic) CDUnknownBlockType valueForKeyTransform; // @synthesize valueForKeyTransform=_valueForKeyTransform;
@property (readonly, nonatomic) SEL writeSelector; // @synthesize writeSelector=_writeSelector;

+ (BOOL)supportsSecureCoding;
- (void *)ABValueForABPerson:(void *)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueForContact:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (BOOL)abPropertyID:(int *)arg1;
- (void)assertValueType:(id)arg1;
- (void)copyFromABPerson:(void *)arg1 toContact:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalentLabelsForLabel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (BOOL)isValidValue:(id)arg1 error:(id *)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;
- (BOOL)setCNValue:(id)arg1 onABPerson:(void *)arg2 withDependentPropertiesContext:(id)arg3 error:(id *)arg4;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)stringForIndexingForContact:(id)arg1;
- (id)valueWithResetIdentifiers:(id)arg1;

@end
