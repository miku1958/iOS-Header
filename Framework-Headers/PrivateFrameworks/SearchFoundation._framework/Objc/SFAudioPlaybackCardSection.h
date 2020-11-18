//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAudioPlaybackCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFImage, SFRichText, SFText;

@interface SFAudioPlaybackCardSection : SFCardSection <SFAudioPlaybackCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_29067556 _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    int _separatorStyle;
    int _state;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFImage *_topImage;
    SFText *_topText;
    NSString *_topSecondaryText;
    SFImage *_bottomImage;
    SFText *_bottomText;
    SFText *_bottomSubtitle;
    NSString *_topImageEmoji;
    NSString *_bottomImageEmoji;
    NSArray *_playCommands;
    NSArray *_stopCommands;
    SFRichText *_detailText;
    SFRichText *_title;
    SFRichText *_subtitle;
    SFImage *_thumbnail;
}

@property (strong, nonatomic) SFColor *backgroundColor;
@property (strong, nonatomic) SFImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property (copy, nonatomic) NSString *bottomImageEmoji; // @synthesize bottomImageEmoji=_bottomImageEmoji;
@property (strong, nonatomic) SFText *bottomSubtitle; // @synthesize bottomSubtitle=_bottomSubtitle;
@property (strong, nonatomic) SFText *bottomText; // @synthesize bottomText=_bottomText;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SFRichText *detailText; // @synthesize detailText=_detailText;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *playCommands; // @synthesize playCommands=_playCommands;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int state; // @synthesize state=_state;
@property (copy, nonatomic) NSArray *stopCommands; // @synthesize stopCommands=_stopCommands;
@property (strong, nonatomic) SFRichText *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (strong, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property (strong, nonatomic) SFRichText *title; // @synthesize title=_title;
@property (strong, nonatomic) SFImage *topImage; // @synthesize topImage=_topImage;
@property (copy, nonatomic) NSString *topImageEmoji; // @synthesize topImageEmoji=_topImageEmoji;
@property (copy, nonatomic) NSString *topSecondaryText; // @synthesize topSecondaryText=_topSecondaryText;
@property (strong, nonatomic) SFText *topText; // @synthesize topText=_topText;
@property (copy, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasState;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

