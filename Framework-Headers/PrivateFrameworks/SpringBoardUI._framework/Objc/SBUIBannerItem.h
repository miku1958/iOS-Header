//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBUIQuietModePlayability-Protocol.h>

@class NSString;

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (CDUnknownBlockType)action;
- (id)actionWithIdentifier:(id)arg1;
- (BOOL)canShowInAssistant;
- (BOOL)canShowWhileLocked;
- (id)defaultActionWithContext:(id)arg1;
- (BOOL)hasSubActions;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (BOOL)isSticky;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)message;
- (BOOL)overridesPocketMode;
- (BOOL)overridesQuietMode;
- (unsigned long long)priority;
- (id)pullDownNotification;
- (BOOL)shouldPlayLightsAndSirens;
- (BOOL)shouldShowModalSubActions;
- (id)sortDate;
- (id)sound;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end

