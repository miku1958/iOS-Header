//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTitleCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor;

@interface SFTitleCardSection : SFCardSection <SFTitleCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_da38e31c _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isCentered;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
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
@property (nonatomic) BOOL isCentered; // @synthesize isCentered=_isCentered;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasIsCentered;
- (BOOL)hasSeparatorStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

