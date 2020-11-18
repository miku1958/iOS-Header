//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAudioPlaybackCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBAudioPlaybackCardSection : PBCodable <_SFPBAudioPlaybackCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    int _separatorStyle;
    int _state;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSArray *_playCommands;
    NSArray *_stopCommands;
    _SFPBRichText *_detailText;
    _SFPBRichText *_title;
    _SFPBRichText *_subtitle;
    _SFPBImage *_thumbnail;
}

@property (strong, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _SFPBRichText *detailText; // @synthesize detailText=_detailText;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *playCommands; // @synthesize playCommands=_playCommands;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (nonatomic) int state; // @synthesize state=_state;
@property (copy, nonatomic) NSArray *stopCommands; // @synthesize stopCommands=_stopCommands;
@property (strong, nonatomic) _SFPBRichText *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property (strong, nonatomic) _SFPBRichText *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addPlayCommands:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)addStopCommands:(id)arg1;
- (void)clearPlayCommands;
- (void)clearPunchoutOptions;
- (void)clearStopCommands;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (BOOL)readFrom:(id)arg1;
- (id)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
- (void)writeTo:(id)arg1;

@end

