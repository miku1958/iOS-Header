//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBKeyValueDataCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage;

@interface _SFPBKeyValueDataCardSection : PBCodable <_SFPBKeyValueDataCardSection, NSSecureCoding>
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
    _SFPBColor *_backgroundColor;
    NSArray *_datas;
    _SFPBImage *_accessoryImage;
}

@property (strong, nonatomic) _SFPBImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property (strong, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessoryImage;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearData;
- (void)clearPunchoutOptions;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
