//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEUnitRegistry : NSObject
{
}

+ (int)binaryUnitPrefixForChars:(unsigned short)arg1:(unsigned short)arg2;
+ (int)canonicalUnitForDimension:(int)arg1;
+ (struct TSUDecimal)convert:(const struct TSUDecimal *)arg1 fromUnit:(CDStruct_1ef3fb1f)arg2 toUnit:(CDStruct_1ef3fb1f)arg3;
+ (id)currencyCodeForUnit:(int)arg1;
+ (int)dimensionForUnit:(int)arg1;
+ (void)initialize;
+ (double)multiplierForUnitPrefix:(int)arg1;
+ (CDStruct_1ef3fb1f)prefixedUnitForString:(id)arg1;
+ (int)unitForCurrencyCode:(id)arg1;
+ (int)unitForString:(id)arg1;
+ (BOOL)unitIsMetric:(int)arg1;
+ (int)unitPrefixForCharacter:(unsigned short)arg1;

@end
