//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HAPValueTransformer : NSObject
{
}

+ (Class)expectedClassForFormat:(unsigned long long)arg1;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;

@end

