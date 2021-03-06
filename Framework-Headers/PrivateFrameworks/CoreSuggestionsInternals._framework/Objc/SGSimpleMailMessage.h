//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessage.h>

@class NSArray, NSIndexSet, NSNumber, NSString, SGCachedResult, SGHtmlParser, SGSimpleNamedEmailAddress;

@interface SGSimpleMailMessage : SGMessage
{
    SGCachedResult *_htmlParserCached;
    SGCachedResult *_quotedRegionsCached;
    SGCachedResult *_hasHumanHeadersCached;
    SGCachedResult *_authorCached;
    BOOL _hasInhumanHeaders;
    BOOL _isPartiallyDownloaded;
    SGSimpleNamedEmailAddress *_from;
    SGSimpleNamedEmailAddress *_replyTo;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSString *_messageId;
    NSString *_htmlBody;
    NSNumber *_received;
    NSArray *_headers;
    SGSimpleNamedEmailAddress *_mailingList;
}

@property (copy, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property (copy, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *from; // @synthesize from=_from;
@property (readonly, nonatomic) BOOL hasHumanHeaders;
@property (nonatomic) BOOL hasInhumanHeaders; // @synthesize hasInhumanHeaders=_hasInhumanHeaders;
@property (copy, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property (copy, nonatomic) NSString *htmlBody; // @synthesize htmlBody=_htmlBody;
@property (readonly, nonatomic) SGHtmlParser *htmlParser;
@property (nonatomic) BOOL isPartiallyDownloaded; // @synthesize isPartiallyDownloaded=_isPartiallyDownloaded;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *mailingList; // @synthesize mailingList=_mailingList;
@property (copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property (readonly, nonatomic) NSIndexSet *quotedRegions;
@property (copy, nonatomic) NSNumber *received; // @synthesize received=_received;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *replyTo; // @synthesize replyTo=_replyTo;
@property (copy, nonatomic) NSArray *to; // @synthesize to=_to;

+ (id)addressItemsFromEmailString:(id)arg1;
+ (id)dateFromEmailString:(id)arg1;
+ (id)decodeEncodedWordsIn:(id)arg1;
+ (id)decodeQuotedPrintable:(id)arg1 charset:(unsigned long long)arg2 rfc2047UnderscoreAsSpace:(BOOL)arg3;
+ (id)formatFlowed:(id)arg1 delSp:(BOOL)arg2;
+ (BOOL)headersContainInhumanOnes:(id)arg1 keys:(id)arg2;
+ (id)htmlBodyFromRfc822:(id)arg1 headers:(id)arg2 attachmentCallback:(CDUnknownBlockType)arg3;
+ (id)parseHeaders:(id)arg1;
+ (id)parseParameterizedHeaderValue:(id)arg1;
+ (id)parseRfc822:(id)arg1;
+ (id)parseRfc822:(id)arg1 attachmentCallback:(CDUnknownBlockType)arg2;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2 source:(id)arg3;
+ (struct _NSRange)rangeOfBodyFromRfc822:(id)arg1;
+ (struct _NSRange)rangeOfHeadersFromRfc822:(id)arg1;
+ (id)simpleMailMessageFromHeaders:(id)arg1;
+ (id)stripTrailingASCIIHSpace:(id)arg1;
+ (id)subjectByCleaningPrefixesInSubject:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)uudecode:(id)arg1;
- (void).cxx_destruct;
- (id)allRecipients;
- (id)asDictionary;
- (id)author;
- (id)body;
- (long long)contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createNewSearchableItem;
- (id)createNewSearchableItemWithSource:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3;
- (id)dataDetectorMatchesWithSignature;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasRecipientFromSameDomainAsSender;
- (unsigned long long)hash;
- (id)headersDictionary;
- (id)initForBuilding;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimpleMailMessage:(id)arg1;
- (BOOL)isInhumanContentNoncached;
- (id)senderDomain;
- (id)spotlightBundleIdentifier;
- (id)spotlightUniqueIdentifier;
- (id)textContent;
- (id)uniqueIdentifier;

@end

