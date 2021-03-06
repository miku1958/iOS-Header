//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RevealCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface RVDocumentContext : NSObject <NSSecureCoding>
{
    NSString *authorName;
    NSString *authorEmailAddress;
    NSString *authorContactUUID;
    NSDate *contentReferenceDate;
    NSTimeZone *contentReferenceTimeZone;
    NSString *contentSubject;
    NSString *selectedText;
    NSURL *documentURL;
    NSArray *existingDDResultsList;
    NSString *coreSpotlightUniqueIdentifier;
}

@property (copy, nonatomic) NSString *authorContactUUID; // @synthesize authorContactUUID;
@property (copy, nonatomic) NSString *authorEmailAddress; // @synthesize authorEmailAddress;
@property (copy, nonatomic) NSString *authorName; // @synthesize authorName;
@property (copy, nonatomic) NSDate *contentReferenceDate; // @synthesize contentReferenceDate;
@property (copy, nonatomic) NSTimeZone *contentReferenceTimeZone; // @synthesize contentReferenceTimeZone;
@property (copy, nonatomic) NSString *contentSubject; // @synthesize contentSubject;
@property (copy, nonatomic) NSString *coreSpotlightUniqueIdentifier; // @synthesize coreSpotlightUniqueIdentifier;
@property (copy, nonatomic) NSURL *documentURL; // @synthesize documentURL;
@property (copy, nonatomic) NSArray *existingDDResultsList; // @synthesize existingDDResultsList;
@property (copy, nonatomic) NSString *selectedText; // @synthesize selectedText;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNameAndEmailWithRawSenderField:(id)arg1;

@end

