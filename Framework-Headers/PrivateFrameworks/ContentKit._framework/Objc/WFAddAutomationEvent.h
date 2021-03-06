//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAddAutomationEvent : WFEvent
{
    unsigned int _actionCount;
    NSString *_key;
    NSString *_triggerType;
    NSString *_intentType;
    NSString *_source;
    NSString *_appBundleIdentifier;
    NSString *_activityType;
    NSString *_automationSuggestionsTrialIdentifier;
    NSString *_shortcutIdentifier;
}

@property (nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property (copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property (copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier; // @synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier;
@property (copy, nonatomic) NSString *intentType; // @synthesize intentType=_intentType;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;
@property (copy, nonatomic) NSString *source; // @synthesize source=_source;
@property (copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;

+ (Class)codableEventClass;
- (void).cxx_destruct;

@end

