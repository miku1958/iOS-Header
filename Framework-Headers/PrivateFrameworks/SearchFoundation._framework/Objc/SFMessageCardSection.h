//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMessageCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFUserReportRequest;

@interface SFMessageCardSection : SFCardSection <SFMessageCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int messageStatus:1;
        unsigned int messageServiceType:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    int _separatorStyle;
    int _messageStatus;
    int _messageServiceType;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_messageText;
}

@property (strong, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int messageServiceType; // @synthesize messageServiceType=_messageServiceType;
@property (nonatomic) int messageStatus; // @synthesize messageStatus=_messageStatus;
@property (copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;
@property (strong, nonatomic) SFUserReportRequest *userReportRequest;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasMessageServiceType;
- (BOOL)hasMessageStatus;
- (BOOL)hasSeparatorStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

