//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSValueTransformer : NSObject
{
}

+ (id)_transformerRegistry;
+ (BOOL)allowsReverseTransformation;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (Class)transformedValueClass;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end

