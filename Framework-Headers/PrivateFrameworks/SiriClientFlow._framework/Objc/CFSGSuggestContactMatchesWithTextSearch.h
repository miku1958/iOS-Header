//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSString;

@interface CFSGSuggestContactMatchesWithTextSearch : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long limit;
@property (copy, nonatomic) NSString *query;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestContactMatchesWithTextSearch;
+ (id)suggestContactMatchesWithTextSearchWithDictionary:(id)arg1 context:(id)arg2;
- (id)aceEmailsFromSuggestedEmails:(id)arg1;
- (id)aceLocationsFromSuggestedLocations:(id)arg1;
- (id)acePhoneNumbersFromSuggestedPhoneNumbers:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)requiresResponse;
- (id)suggestedContactFromSuggestedContactMatches:(id)arg1 withService:(id)arg2 withOrigin:(BOOL)arg3;

@end

