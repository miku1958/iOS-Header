//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNMultiValuePropertyDescription.h>

@interface CNMultiValuePropertyDescription (ABSExtentions)
- (CDUnknownBlockType)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (const void *)ABSValueFromCNValue:(id)arg1;
- (CDUnknownBlockType)CNLabeledValueFromABSMultiValueTranform;
- (id)CNValueFromABSValue:(void *)arg1;
- (CDUnknownBlockType)dictionaryBasedMultiValueTransformWithLabelMapping:(id)arg1 inputKeys:(id)arg2 destinationClass:(Class)arg3 valueMapping:(id)arg4;
- (BOOL)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2;
- (CDUnknownBlockType)multiValueTransformWithLabelMapping:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)passThroughMultivalueTransformWithLabelMapping:(id)arg1;
@end
