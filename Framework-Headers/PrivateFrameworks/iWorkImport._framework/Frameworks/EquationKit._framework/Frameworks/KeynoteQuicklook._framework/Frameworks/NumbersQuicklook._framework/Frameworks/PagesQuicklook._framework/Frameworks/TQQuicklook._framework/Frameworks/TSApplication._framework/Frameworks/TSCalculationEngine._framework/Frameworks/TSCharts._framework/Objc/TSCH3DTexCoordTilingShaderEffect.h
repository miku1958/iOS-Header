//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DShaderEffect.h>

@interface TSCH3DTexCoordTilingShaderEffect : TSCH3DShaderEffect
{
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)effect;
+ (void)initialize;
- (void)addVariables:(id)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)injectCommonShaderInto:(id)arg1 context:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)transformedTexcoordBuffer:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;

@end
