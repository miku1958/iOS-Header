//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsObserverProtocol-Protocol.h>

@class CNContact, NSArray, NSString, SGContact, SGContactMatchArrayOption, SGOrigin, SGRecordId;

@protocol SGSuggestionsServiceContactsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol>
- (NSArray *)allContactsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)cnContactMatchesForRecordId:(SGRecordId *)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)cnContactMatchesForRecordIds:(NSArray *)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordIds:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (SGContact *)contactFromRecordID:(SGRecordId *)arg1 error:(id *)arg2;
- (void)contactFromRecordID:(SGRecordId *)arg1 withCompletion:(void (^)(SGContact *, NSError *))arg2;
- (NSArray *)contactMatchesByEmailAddress:(NSString *)arg1 error:(id *)arg2;
- (void)contactMatchesByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)contactMatchesByPhoneNumber:(NSString *)arg1 error:(id *)arg2;
- (void)contactMatchesByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (SGContactMatchArrayOption *)contactMatchesOrLookupIdByEmailAddress:(NSString *)arg1 error:(id *)arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(SGContactMatchArrayOption *, NSError *))arg2;
- (SGContactMatchArrayOption *)contactMatchesOrLookupIdByPhoneNumber:(NSString *)arg1 error:(id *)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(SGContactMatchArrayOption *, NSError *))arg2;
- (NSArray *)contactMatchesWithContact:(CNContact *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContact:(CNContact *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 error:(id *)arg4;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (SGOrigin *)originFromRecordId:(SGRecordId *)arg1 error:(id *)arg2;
- (void)originFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGOrigin *, NSError *))arg2;
- (NSArray *)relevantABRecordIDsWithLimit:(long long)arg1 error:(id *)arg2;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)suggestContactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)suggestContactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
@end

