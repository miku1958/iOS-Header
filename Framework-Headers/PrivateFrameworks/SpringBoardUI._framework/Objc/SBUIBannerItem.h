//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBUIBannerItem : NSObject
{
}

- (CDUnknownBlockType)action;
- (id)actionWithIdentifier:(id)arg1;
- (BOOL)canShowInAssistant;
- (BOOL)canShowWhileLocked;
- (id)defaultActionWithContext:(id)arg1;
- (BOOL)hasSubActions;
- (BOOL)isSticky;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)message;
- (unsigned long long)priority;
- (BOOL)shouldPlayLightsAndSirens;
- (BOOL)shouldShowModalSubActions;
- (id)sortDate;
- (id)sound;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end
