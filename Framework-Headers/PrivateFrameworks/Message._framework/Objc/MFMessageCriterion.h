//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EDSearchableCriterion-Protocol.h>
#import <Message/NSCopying-Protocol.h>

@class EFMutableInt64Set, NSArray, NSString;

@interface MFMessageCriterion : NSObject <EDSearchableCriterion, NSCopying>
{
    NSString *_criterionIdentifier;
    int _qualifier;
    long long _type;
    NSString *_name;
    NSString *_uniqueId;
    NSString *_expression;
    NSArray *_criteria;
    int _dateUnitType;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _dateIsRelative:1;
    unsigned int _includeRelatedMessages:1;
    NSArray *_requiredHeaders;
    BOOL _preferFullTextSearch;
    BOOL _useFlaggedForUnreadCount;
    BOOL _expressionIsSanitized;
    BOOL _includeRemoteBodyContent;
    NSArray *_expressionLanguages;
    EFMutableInt64Set *_libraryIdentifiers;
}

@property (copy, nonatomic) NSArray *criteria;
@property (strong, nonatomic) NSString *criterionIdentifier;
@property (nonatomic) long long criterionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *expression;
@property (nonatomic) BOOL expressionIsSanitized; // @synthesize expressionIsSanitized=_expressionIsSanitized;
@property (copy, nonatomic) NSArray *expressionLanguages; // @synthesize expressionLanguages=_expressionLanguages;
@property (readonly, nonatomic, getter=isFullTextSearchableCriterion) BOOL fullTextSearchableCriterion;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL includeRelatedMessages; // @synthesize includeRelatedMessages=_includeRelatedMessages;
@property (nonatomic) BOOL includeRemoteBodyContent; // @synthesize includeRemoteBodyContent=_includeRemoteBodyContent;
@property (strong, nonatomic) EFMutableInt64Set *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL preferFullTextSearch; // @synthesize preferFullTextSearch=_preferFullTextSearch;
@property (nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property (readonly, nonatomic) NSString *spotlightQueryString;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFlaggedForUnreadCount; // @synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount;

+ (id)VIPSenderMessageCriterion;
+ (id)_criterionForDateReceivedBetween:(id)arg1 endDate:(id)arg2;
+ (id)_criterionForDateReceivedBetweenDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)_todayDateComponents;
+ (void)_updateAddressComments:(id)arg1;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)ccMeCriterion;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)criterionExcludingMailboxes:(id)arg1;
+ (id)criterionForAccount:(id)arg1;
+ (id)criterionForConversationID:(long long)arg1;
+ (id)criterionForDateReceivedNewerThanDate:(id)arg1;
+ (id)criterionForDateReceivedOlderThanDate:(id)arg1;
+ (id)criterionForDocumentID:(id)arg1;
+ (id)criterionForFlagColor:(unsigned long long)arg1;
+ (id)criterionForLibraryID:(id)arg1;
+ (id)criterionForMailbox:(id)arg1;
+ (id)criterionForMailboxPredictionMessageQuery:(unsigned long long)arg1 variable:(id)arg2;
+ (id)criterionForMailboxURL:(id)arg1;
+ (id)criterionForNotDeletedConversationID:(long long)arg1;
+ (id)criterionFromDefaultsDictionary:(id)arg1;
+ (long long)criterionTypeForString:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)defaultsDictionaryFromCriterion:(id)arg1;
+ (id)expressionForDate:(id)arg1;
+ (id)flaggedMessageCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)includesMeCriterion;
+ (id)lastWeekMessageCriterion;
+ (id)matchEverythingCriterion;
+ (id)matchNothingCriterion;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)messageIsJournaledCriterion:(BOOL)arg1;
+ (id)messageIsServerSearchResultCriterion:(BOOL)arg1;
+ (id)notCriterionWithCriterion:(id)arg1;
+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)readMessageCriterion;
+ (id)stringForCriterionType:(long long)arg1;
+ (id)threadMuteMessageCriterion;
+ (id)threadNotifyMessageCriterion;
+ (id)toMeCriterion;
+ (id)todayMessageCriterion;
+ (id)unreadMessageCriterion;
+ (id)yesterdayMessageCriterion;
- (void).cxx_destruct;
- (id)SQLExpressionWithContext:(id)arg1 depth:(unsigned int)arg2;
- (id)SQLExpressionWithTables:(unsigned int *)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(BOOL)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5 propertyMapper:(id)arg6;
- (id)_SQLExpressionForMailboxCriterion;
- (void)_addCriteriaSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1 toCollector:(id)arg2;
- (id)_attributesForHeaderCriterion;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(BOOL)arg2 collapsedIndexes:(id *)arg3;
- (id)_comparisonOperationMatchingValue:(id)arg1 qualifier:(int)arg2;
- (id)_criterionForSQL;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluateCompoundCriterion:(id)arg1;
- (BOOL)_evaluateConversationIDCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (BOOL)_evaluateFlagCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluateMailboxCriterion:(id)arg1;
- (BOOL)_evaluatePartOfStructure:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluateSenderHeaderCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (id)_qualifierString;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (id)_spotlightQueryString;
- (id)_wordQueryWithAttributes:(id)arg1 languages:(id)arg2 expression:(id)arg3;
- (BOOL)allCriteriaMustBeSatisfied;
- (unsigned int)bestBaseTable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)criteriaForSpotlightCriteria:(id)arg1;
- (id)criteriaSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1;
- (id)criterionByApplyingTransform:(CDUnknownBlockType)arg1;
- (id)criterionForSQL;
- (id)daBasicSearchString;
- (id)daSearchPredicate;
- (id)dateFromExpression;
- (BOOL)dateIsRelative;
- (int)dateUnits;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (id)fixOnce;
- (BOOL)hasLibraryIDCriterion;
- (BOOL)hasNonFullTextSearchableCriterion;
- (BOOL)includesCriterionSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1 restrictive:(BOOL)arg2;
- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVIPCriterion;
- (int)messageRuleQualifierForString:(id)arg1;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)setDateIsRelative:(BOOL)arg1;
- (void)setDateUnits:(int)arg1;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (id)unreadCountCriterion;

@end
