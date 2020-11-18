//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSString, SASRecognition;

@interface SASSpeechAlternativesSnippet : SAUISnippet
{
}

@property (nonatomic) long long maxEntryToShow;
@property (strong, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *sessionId;

+ (id)speechAlternativesSnippet;
+ (id)speechAlternativesSnippetWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

