//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTableRowCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTableHeaderRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFTableAlignmentSchema;

@interface SFTableHeaderRowCardSection : SFTableRowCardSection <SFTableHeaderRowCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_dff33cb6 _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isSubHeader;
    BOOL _reducedRowHeight;
    BOOL _alignRowsToHeader;
    int _separatorStyle;
    int _verticalAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
}

@property (nonatomic) BOOL alignRowsToHeader;
@property (strong, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property (strong, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL isSubHeader;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) BOOL reducedRowHeight;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tabGroupIdentifier;
@property (copy, nonatomic) NSString *tableIdentifier;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int verticalAlign;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAlignRowsToHeader;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasIsSubHeader;
- (BOOL)hasReducedRowHeight;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasVerticalAlign;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
