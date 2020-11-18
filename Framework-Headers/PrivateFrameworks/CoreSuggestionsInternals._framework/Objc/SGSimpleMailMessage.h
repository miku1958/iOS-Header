//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessage.h>

@class NSArray, NSNumber, NSString, SGSimpleNamedEmailAddress;

@interface SGSimpleMailMessage : SGMessage
{
    BOOL _isInhuman;
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
@property (copy, nonatomic) NSString *body; // @dynamic body;
@property (copy, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *from; // @synthesize from=_from;
@property (readonly, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property (copy, nonatomic) NSString *htmlBody; // @synthesize htmlBody=_htmlBody;
@property (nonatomic) BOOL isInhuman; // @synthesize isInhuman=_isInhuman;
@property (nonatomic) BOOL isPartiallyDownloaded; // @synthesize isPartiallyDownloaded=_isPartiallyDownloaded;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *mailingList; // @synthesize mailingList=_mailingList;
@property (copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property (copy, nonatomic) NSNumber *received; // @synthesize received=_received;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *replyTo; // @synthesize replyTo=_replyTo;
@property (copy, nonatomic) NSArray *to; // @synthesize to=_to;

+ (id)fromMFMailMessage:(id)arg1;
+ (BOOL)headersContainInhumanOnes:(id)arg1 keys:(id)arg2;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (id)simpleMailMessageFromHeadersOfMessage:(id)arg1;
+ (id)subjectByCleaningPrefixesInSubject:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)allRecipients;
- (id)asDictionary;
- (unsigned long long)contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)headersDictionary;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimpleMailMessage:(id)arg1;
- (id)rfc822Data;
- (id)searchableItem;
- (id)searchableItemWithSource:(id)arg1;
- (void)setHeaders:(id)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightUniqueIdentifier;
- (id)textContent;
- (id)uniqueIdentifier;

@end

