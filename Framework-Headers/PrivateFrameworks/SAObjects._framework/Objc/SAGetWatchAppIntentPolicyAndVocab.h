//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetWatchAppIntentPolicyAndVocab : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSArray *clientIdentifiers;

+ (id)getWatchAppIntentPolicyAndVocab;
+ (id)getWatchAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

