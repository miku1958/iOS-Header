//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSString, SAIntentGroupProtobufMessage;
@protocol SAServerBoundCommand;

@interface SAIntentGroupSnippet : SAUISnippet
{
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *commands;
@property (strong, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (strong, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (strong, nonatomic) id<SAServerBoundCommand> processSynapseFlowCommand;
@property (copy, nonatomic) NSArray *snippetTemplates;
@property (nonatomic) BOOL widgetAllowed;
@property (copy, nonatomic) NSNumber *widgetIndex;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
