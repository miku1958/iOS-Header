//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSString, SAAppInfo;

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand
{
}

@property (strong, nonatomic) SAAppInfo *appInfo;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *notificationID;
@property (copy, nonatomic) NSString *outputVoiceLanguageCode;
@property (nonatomic) BOOL shouldPromptUser;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *userInterfaceIdiom;

+ (id)spokenNotificationFlowCommand;
+ (id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

