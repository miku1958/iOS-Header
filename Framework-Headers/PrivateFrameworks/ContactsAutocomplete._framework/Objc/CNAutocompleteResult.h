//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteNameComponents, CNAutocompleteResultValue, NSArray, NSDictionary, NSString;

@interface CNAutocompleteResult : NSObject
{
    NSString *_displayName;
    BOOL _hasPreferredDomain;
    BOOL _hasPrefixMatch;
    unsigned long long _sourceType;
    CNAutocompleteNameComponents *_nameComponents;
    NSString *_identifier;
    CNAutocompleteResultValue *_value;
    NSDictionary *_userInfo;
    NSString *_lastSendingAddress;
    CDUnknownBlockType _membersProvider;
    CDUnknownBlockType _contactProvider;
    NSArray *_diagnosticLogs;
    CDUnknownBlockType _ignoreResultBlock;
    long long _resultType;
}

@property (readonly, copy) id address;
@property (readonly) long long addressType;
@property (readonly, copy) NSString *contactIdentifier;
@property (copy, nonatomic) CDUnknownBlockType contactProvider; // @synthesize contactProvider=_contactProvider;
@property (copy, nonatomic) NSArray *diagnosticLogs; // @synthesize diagnosticLogs=_diagnosticLogs;
@property (copy) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, copy) NSString *groupIdentifier;
@property BOOL hasPreferredDomain; // @synthesize hasPreferredDomain=_hasPreferredDomain;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType ignoreResultBlock; // @synthesize ignoreResultBlock=_ignoreResultBlock;
@property (copy) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property (copy, nonatomic) CDUnknownBlockType membersProvider; // @synthesize membersProvider=_membersProvider;
@property (copy) CNAutocompleteNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property long long resultType; // @synthesize resultType=_resultType;
@property unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property (copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (readonly, copy) NSArray *userInfos;
@property (strong) CNAutocompleteResultValue *value; // @synthesize value=_value;

+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5 userInfo:(id)arg6;
+ (unsigned long long)category;
+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 identifier:(id)arg4;
+ (id)contactStoreForFetchingFullContacts;
+ (id)groupResultWithDisplayName:(id)arg1 identifier:(id)arg2;
+ (BOOL)isSourceTypeConsideredSuggestion:(unsigned long long)arg1;
+ (id)localeForHashing;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 addressType:(long long)arg5 identifier:(id)arg6 contactProvider:(CDUnknownBlockType)arg7 groupMembersProvider:(CDUnknownBlockType)arg8 userInfo:(id)arg9;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5 userInfo:(id)arg6;
+ (id)resultWithDisplayName:(id)arg1;
- (void).cxx_destruct;
- (void)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (void)addDiagnosticLogFuture:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 withPriorityComparator:(CDUnknownBlockType)arg2;
- (id)contactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)diagnosticLog;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)members:(id *)arg1;
- (id)resultTypeDescription;
- (id)sourceTypeDescription;
- (id)stringForHashing;
- (void)updateUsingInformationFromRelatedResult:(id)arg1;

@end
