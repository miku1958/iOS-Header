//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAttributionFooterCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFPunchout, SFRichText, SFUserReportRequest;

@interface SFAttributionFooterCardSection : SFCardSection <SFAttributionFooterCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_5ff9a38c _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFRichText *_leadingAttribution;
    SFPunchout *_leadingAttributionPunchout;
    SFRichText *_trailingAttribution;
    SFPunchout *_trailingAttributionPunchout;
}

@property (strong, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFRichText *leadingAttribution; // @synthesize leadingAttribution=_leadingAttribution;
@property (strong, nonatomic) SFPunchout *leadingAttributionPunchout; // @synthesize leadingAttributionPunchout=_leadingAttributionPunchout;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) SFRichText *trailingAttribution; // @synthesize trailingAttribution=_trailingAttribution;
@property (strong, nonatomic) SFPunchout *trailingAttributionPunchout; // @synthesize trailingAttributionPunchout=_trailingAttributionPunchout;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (strong, nonatomic) SFUserReportRequest *userReportRequest;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasSeparatorStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
