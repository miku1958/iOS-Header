//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SAUIAppPunchOut, SAUIButton;

@interface SAGuidanceGuideSnippet : SAUISnippet
{
}

@property (strong, nonatomic) SAUIButton *appPunchOutButton;
@property (strong, nonatomic) SAUIAppPunchOut *appStorePunchOut;
@property (copy, nonatomic) NSArray *domainSnippets;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSArray *intentEnabledAppSnippets;

+ (id)guideSnippet;
+ (id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

