//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@protocol SAServerBoundCommand;

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate
{
}

@property (nonatomic) BOOL selected;
@property (strong, nonatomic) id<SAServerBoundCommand> updateSlotCommand;

+ (id)choiceSettingSnippetTemplate;
+ (id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
