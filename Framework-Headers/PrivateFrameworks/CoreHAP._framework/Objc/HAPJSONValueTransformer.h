//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPValueTransformer.h>

@interface HAPJSONValueTransformer : HAPValueTransformer
{
}

+ (id)defaultJSONValueTransformer;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (void)initialize;
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;

@end

