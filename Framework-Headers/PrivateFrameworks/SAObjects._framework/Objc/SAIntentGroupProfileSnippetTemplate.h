//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSArray, NSString;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *imageStyle;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSArray *labelComponents;

+ (id)profileSnippetTemplate;
+ (id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

