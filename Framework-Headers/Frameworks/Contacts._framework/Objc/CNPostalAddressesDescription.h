//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNCompoundMultiValuePropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;
- (id)CNValueForContact:(id)arg1;
- (int)abPropertyID:(int *)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (CDUnknownBlockType)dictionaryTransform;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (CDUnknownBlockType)fromDictionaryTransform;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isNonnull;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (Class)labeledValueClass;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)summarizationKeys;

@end

