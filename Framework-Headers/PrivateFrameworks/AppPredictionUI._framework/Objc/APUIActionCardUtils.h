//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APUIActionCardUtils : NSObject
{
}

+ (void)_configureCardInfo:(id)arg1 forATXAction:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forHeroApp:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forINIntent:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forINInteraction:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forNSString:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forNSUserActivity:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forUAUserActivityProxy:(id)arg2 withConfig:(id)arg3;
+ (void)_configureCardInfo:(id)arg1 forVoiceShortcutWithPhrase:(id)arg2 name:(id)arg3 description:(id)arg4 keyImage:(id)arg5 applicationBundleIdentifier:(id)arg6 config:(id)arg7;
+ (id)_generateCardSectionWithInfo:(id)arg1 config:(id)arg2;
+ (unsigned long long)_searchUIStyleForAPUIStyle:(unsigned long long)arg1;
+ (id)_subtitleForAction:(id)arg1 default:(id)arg2;
+ (id)cardForCardSection:(id)arg1;
+ (id)cardSectionForATXAction:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForHeroApp:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForINIntent:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForINInteraction:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForNSString:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForNSUserActivity:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForUAUserActivityProxy:(id)arg1 withConfig:(id)arg2;
+ (id)cardSectionForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 applicationBundleIdentifier:(id)arg4 config:(id)arg5;
+ (id)cardSectionForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 keyImage:(id)arg4 applicationBundleIdentifier:(id)arg5 config:(id)arg6;
+ (id)cardViewForATXAction:(id)arg1 withConfig:(id)arg2;
+ (id)cardViewForHeroApp:(id)arg1 withConfig:(id)arg2;
+ (id)cardViewForINIntent:(id)arg1 withConfig:(id)arg2;
+ (id)cardViewForINInteraction:(id)arg1 withConfig:(id)arg2;
+ (id)cardViewForNSUserActivity:(id)arg1 withConfig:(id)arg2;
+ (id)cardViewForUAUserActivityProxy:(id)arg1 withConfig:(id)arg2;
+ (id)cardViewForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 applicationBundleIdentifier:(id)arg4 config:(id)arg5;
+ (id)cardViewForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 keyImage:(id)arg4 applicationBundleIdentifier:(id)arg5 config:(id)arg6;
+ (id)cardViewReuseIdentifier;
+ (void)initialize;
+ (BOOL)updateCardView:(id)arg1 forINIntent:(id)arg2 withConfig:(id)arg3;
+ (BOOL)updateCardView:(id)arg1 forINInteraction:(id)arg2 withConfig:(id)arg3;
+ (BOOL)updateCardView:(id)arg1 forNSUserActivity:(id)arg2 withConfig:(id)arg3;
+ (BOOL)updateCardView:(id)arg1 forUAUserActivityProxy:(id)arg2 withConfig:(id)arg3;

@end
