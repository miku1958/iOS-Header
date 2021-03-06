//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHStyleActAlike-Protocol.h>

@class NSString;

@interface TSCHChartSeriesDefaultNonStyle : NSObject <TSCHStyleActAlike>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultNonStyle;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;
- (id)boxedDefaultValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (BOOL)definesProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)overridesProperty:(int)arg1;
- (id)properties;
- (id)valueForProperty:(int)arg1;

@end

