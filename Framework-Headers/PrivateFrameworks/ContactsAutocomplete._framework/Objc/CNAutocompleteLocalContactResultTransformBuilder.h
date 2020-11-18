//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteResultFactory, NSMutableArray;

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject
{
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
    unsigned long long _builtContactType;
}

@property unsigned long long builtContactType; // @synthesize builtContactType=_builtContactType;

+ (long long)addressTypeForProperty:(id)arg1;
+ (id)localContactBuilderWithResultFactory:(id)arg1;
+ (id)resultValueForContactPropertyValue:(id)arg1 propertyKey:(id)arg2 contact:(id)arg3;
+ (id)serverContactBuilderWithResultFactory:(id)arg1;
+ (id)suggestedContactBuilderWithResultFactory:(id)arg1;
- (void).cxx_destruct;
- (void)addTransformForProperty:(id)arg1;
- (CDUnknownBlockType)build;
- (CDUnknownBlockType)buildAggregateTransform;
- (id)initWithResultFactory:(id)arg1;
- (CDUnknownBlockType)makeTransformForProperty:(id)arg1;

@end
