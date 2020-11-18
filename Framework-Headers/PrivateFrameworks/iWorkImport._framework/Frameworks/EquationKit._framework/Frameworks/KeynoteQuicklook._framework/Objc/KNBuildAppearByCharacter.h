//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/KNBuildAppear.h>

#import <KeynoteQuicklook/KNAnimationPluginAlternateArchiving-Protocol.h>
#import <KeynoteQuicklook/KNAnimationPluginArchiving-Protocol.h>
#import <KeynoteQuicklook/KNAnimationPluginObsoleteNames-Protocol.h>

@class NSString;

@interface KNBuildAppearByCharacter : KNBuildAppear <KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNAnimationPluginAlternateArchiving>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)animationFilter;
+ (id)animationName;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)localizedAnimationStringForUpgradeWarning:(long long)arg1;
+ (id)obsoleteAnimationNames;
+ (unsigned long long)p_legacyDirectionWithDirection:(unsigned long long)arg1 type:(long long)arg2;
+ (unsigned long long)p_textDeliveryOptionWithDirection:(unsigned long long)arg1 type:(long long)arg2 isClassic:(BOOL)arg3;
+ (BOOL)shouldWarnOnUpgradeWithOldAnimationName:(id)arg1 version:(unsigned long long)arg2;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 oldAnimationName:(id)arg3 warning:(id *)arg4 type:(long long)arg5 isFromClassic:(BOOL)arg6 version:(unsigned long long)arg7;

@end
