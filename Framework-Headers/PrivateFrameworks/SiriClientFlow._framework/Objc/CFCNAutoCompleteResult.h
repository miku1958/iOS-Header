//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface CFCNAutoCompleteResult : SADomainCommand <SAAceSerializable>
{
}

@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *addressType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *diagnosticLog;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *instantMessageAddressService;
@property (copy, nonatomic) NSNumber *isSourceTypeConsideredSuggestions;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *lastSendingAddress;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *resultType;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *suffix;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *valueIdentifier;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteResult;
+ (id)autoCompleteResultWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

