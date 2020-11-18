//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBScoreboardCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBSportsTeam;

@interface _SFPBScoreboardCardSection : PBCodable <_SFPBScoreboardCardSection, NSSecureCoding>
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
    NSString *_title;
    NSString *_subtitle;
    _SFPBSportsTeam *_team1;
    _SFPBSportsTeam *_team2;
    NSString *_accessibilityDescription;
}

@property (copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property (strong, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessibilityDescription;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTeam1;
@property (readonly, nonatomic) BOOL hasTeam2;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBSportsTeam *team1; // @synthesize team1=_team1;
@property (strong, nonatomic) _SFPBSportsTeam *team2; // @synthesize team2=_team2;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

