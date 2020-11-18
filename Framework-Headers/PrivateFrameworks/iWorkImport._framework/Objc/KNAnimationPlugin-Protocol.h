//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class KNAnimatedBuild, KNAnimationContext, KNAnimationPluginMenu, NSArray, NSDictionary, NSString, TSDCapabilities;

@protocol KNAnimationPlugin <NSObject>
+ (long long)animationCategory;
+ (NSString *)animationFilter;
+ (NSString *)animationName;
+ (NSDictionary *)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(KNAnimationPluginMenu *)arg1 forType:(long long)arg2;
+ (NSString *)localizedMenuString:(long long)arg1;
+ (NSArray *)supportedTypes;
+ (NSString *)thumbnailImageNameForType:(long long)arg1;
- (id)initWithAnimationContext:(KNAnimationContext *)arg1;

@optional
+ (NSArray *)customAttributes;
+ (NSDictionary *)customEffectTimingCurveDisplayParametersForAttributes:(NSDictionary *)arg1 layoutStyleOnly:(BOOL)arg2;
+ (long long)rendererTypeForCapabilities:(TSDCapabilities *)arg1;
- (NSDictionary *)animationInfoForAnimatedBuild:(KNAnimatedBuild *)arg1;
@end

