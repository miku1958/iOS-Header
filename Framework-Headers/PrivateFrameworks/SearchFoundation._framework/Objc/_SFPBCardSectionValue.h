//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCardSectionValue-Protocol.h>

@class NSData, NSString, _SFPBActivityIndicatorCardSection, _SFPBAppLinkCardSection, _SFPBAudioPlaybackCardSection, _SFPBDescriptionCardSection, _SFPBDetailedRowCardSection, _SFPBFlightCardSection, _SFPBImagesCardSection, _SFPBKeyValueDataCardSection, _SFPBMapCardSection, _SFPBMediaInfoCardSection, _SFPBMediaPlayerCardSection, _SFPBMessageCardSection, _SFPBMetaInfoCardSection, _SFPBNowPlayingCardSection, _SFPBRichTitleCardSection, _SFPBRowCardSection, _SFPBScoreboardCardSection, _SFPBSectionHeaderCardSection, _SFPBSelectableGridCardSection, _SFPBSocialMediaPostCardSection, _SFPBStockChartCardSection, _SFPBSuggestionCardSection, _SFPBTableHeaderRowCardSection, _SFPBTableRowCardSection, _SFPBTextColumnsCardSection, _SFPBTitleCardSection, _SFPBTrackListCardSection, _SFPBWebCardSection;

@interface _SFPBCardSectionValue : PBCodable <_SFPBCardSectionValue, NSSecureCoding>
{
    _SFPBAppLinkCardSection *_appLinkCardSection;
    _SFPBDescriptionCardSection *_descriptionCardSection;
    _SFPBKeyValueDataCardSection *_keyValueDataCardSection;
    _SFPBMapCardSection *_mapCardSection;
    _SFPBMediaInfoCardSection *_mediaInfoCardSection;
    _SFPBMediaPlayerCardSection *_mediaPlayerCardSection;
    _SFPBNowPlayingCardSection *_nowPlayingCardSection;
    _SFPBRichTitleCardSection *_richTitleCardSection;
    _SFPBRowCardSection *_rowCardSection;
    _SFPBScoreboardCardSection *_scoreboardCardSection;
    _SFPBSocialMediaPostCardSection *_socialMediaPostCardSection;
    _SFPBStockChartCardSection *_stockChartCardSection;
    _SFPBTableHeaderRowCardSection *_tableHeaderRowCardSection;
    _SFPBTableRowCardSection *_tableRowCardSection;
    _SFPBTextColumnsCardSection *_textColumnsCardSection;
    _SFPBTitleCardSection *_titleCardSection;
    _SFPBTrackListCardSection *_trackListCardSection;
    _SFPBAudioPlaybackCardSection *_audioPlaybackCardSection;
    _SFPBFlightCardSection *_flightCardSection;
    _SFPBActivityIndicatorCardSection *_activityIndicatorCardSection;
    _SFPBWebCardSection *_webCardSection;
    _SFPBMessageCardSection *_messageCardSection;
    _SFPBDetailedRowCardSection *_detailedRowCardSection;
    _SFPBImagesCardSection *_imagesCardSection;
    _SFPBSuggestionCardSection *_suggestionCardSection;
    _SFPBSelectableGridCardSection *_selectableGridCardSection;
    _SFPBSectionHeaderCardSection *_sectionHeaderCardSection;
    _SFPBMetaInfoCardSection *_metaInfoCardSection;
}

@property (strong, nonatomic) _SFPBActivityIndicatorCardSection *activityIndicatorCardSection; // @synthesize activityIndicatorCardSection=_activityIndicatorCardSection;
@property (strong, nonatomic) _SFPBAppLinkCardSection *appLinkCardSection; // @synthesize appLinkCardSection=_appLinkCardSection;
@property (strong, nonatomic) _SFPBAudioPlaybackCardSection *audioPlaybackCardSection; // @synthesize audioPlaybackCardSection=_audioPlaybackCardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _SFPBDescriptionCardSection *descriptionCardSection; // @synthesize descriptionCardSection=_descriptionCardSection;
@property (strong, nonatomic) _SFPBDetailedRowCardSection *detailedRowCardSection; // @synthesize detailedRowCardSection=_detailedRowCardSection;
@property (strong, nonatomic) _SFPBFlightCardSection *flightCardSection; // @synthesize flightCardSection=_flightCardSection;
@property (readonly, nonatomic) BOOL hasActivityIndicatorCardSection;
@property (readonly, nonatomic) BOOL hasAppLinkCardSection;
@property (readonly, nonatomic) BOOL hasAudioPlaybackCardSection;
@property (readonly, nonatomic) BOOL hasDescriptionCardSection;
@property (readonly, nonatomic) BOOL hasDetailedRowCardSection;
@property (readonly, nonatomic) BOOL hasFlightCardSection;
@property (readonly, nonatomic) BOOL hasImagesCardSection;
@property (readonly, nonatomic) BOOL hasKeyValueDataCardSection;
@property (readonly, nonatomic) BOOL hasMapCardSection;
@property (readonly, nonatomic) BOOL hasMediaInfoCardSection;
@property (readonly, nonatomic) BOOL hasMediaPlayerCardSection;
@property (readonly, nonatomic) BOOL hasMessageCardSection;
@property (readonly, nonatomic) BOOL hasMetaInfoCardSection;
@property (readonly, nonatomic) BOOL hasNowPlayingCardSection;
@property (readonly, nonatomic) BOOL hasRichTitleCardSection;
@property (readonly, nonatomic) BOOL hasRowCardSection;
@property (readonly, nonatomic) BOOL hasScoreboardCardSection;
@property (readonly, nonatomic) BOOL hasSectionHeaderCardSection;
@property (readonly, nonatomic) BOOL hasSelectableGridCardSection;
@property (readonly, nonatomic) BOOL hasSocialMediaPostCardSection;
@property (readonly, nonatomic) BOOL hasStockChartCardSection;
@property (readonly, nonatomic) BOOL hasSuggestionCardSection;
@property (readonly, nonatomic) BOOL hasTableHeaderRowCardSection;
@property (readonly, nonatomic) BOOL hasTableRowCardSection;
@property (readonly, nonatomic) BOOL hasTextColumnsCardSection;
@property (readonly, nonatomic) BOOL hasTitleCardSection;
@property (readonly, nonatomic) BOOL hasTrackListCardSection;
@property (readonly, nonatomic) BOOL hasWebCardSection;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _SFPBImagesCardSection *imagesCardSection; // @synthesize imagesCardSection=_imagesCardSection;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBKeyValueDataCardSection *keyValueDataCardSection; // @synthesize keyValueDataCardSection=_keyValueDataCardSection;
@property (strong, nonatomic) _SFPBMapCardSection *mapCardSection; // @synthesize mapCardSection=_mapCardSection;
@property (strong, nonatomic) _SFPBMediaInfoCardSection *mediaInfoCardSection; // @synthesize mediaInfoCardSection=_mediaInfoCardSection;
@property (strong, nonatomic) _SFPBMediaPlayerCardSection *mediaPlayerCardSection; // @synthesize mediaPlayerCardSection=_mediaPlayerCardSection;
@property (strong, nonatomic) _SFPBMessageCardSection *messageCardSection; // @synthesize messageCardSection=_messageCardSection;
@property (strong, nonatomic) _SFPBMetaInfoCardSection *metaInfoCardSection; // @synthesize metaInfoCardSection=_metaInfoCardSection;
@property (strong, nonatomic) _SFPBNowPlayingCardSection *nowPlayingCardSection; // @synthesize nowPlayingCardSection=_nowPlayingCardSection;
@property (strong, nonatomic) _SFPBRichTitleCardSection *richTitleCardSection; // @synthesize richTitleCardSection=_richTitleCardSection;
@property (strong, nonatomic) _SFPBRowCardSection *rowCardSection; // @synthesize rowCardSection=_rowCardSection;
@property (strong, nonatomic) _SFPBScoreboardCardSection *scoreboardCardSection; // @synthesize scoreboardCardSection=_scoreboardCardSection;
@property (strong, nonatomic) _SFPBSectionHeaderCardSection *sectionHeaderCardSection; // @synthesize sectionHeaderCardSection=_sectionHeaderCardSection;
@property (strong, nonatomic) _SFPBSelectableGridCardSection *selectableGridCardSection; // @synthesize selectableGridCardSection=_selectableGridCardSection;
@property (strong, nonatomic) _SFPBSocialMediaPostCardSection *socialMediaPostCardSection; // @synthesize socialMediaPostCardSection=_socialMediaPostCardSection;
@property (strong, nonatomic) _SFPBStockChartCardSection *stockChartCardSection; // @synthesize stockChartCardSection=_stockChartCardSection;
@property (strong, nonatomic) _SFPBSuggestionCardSection *suggestionCardSection; // @synthesize suggestionCardSection=_suggestionCardSection;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBTableHeaderRowCardSection *tableHeaderRowCardSection; // @synthesize tableHeaderRowCardSection=_tableHeaderRowCardSection;
@property (strong, nonatomic) _SFPBTableRowCardSection *tableRowCardSection; // @synthesize tableRowCardSection=_tableRowCardSection;
@property (strong, nonatomic) _SFPBTextColumnsCardSection *textColumnsCardSection; // @synthesize textColumnsCardSection=_textColumnsCardSection;
@property (strong, nonatomic) _SFPBTitleCardSection *titleCardSection; // @synthesize titleCardSection=_titleCardSection;
@property (strong, nonatomic) _SFPBTrackListCardSection *trackListCardSection; // @synthesize trackListCardSection=_trackListCardSection;
@property (strong, nonatomic) _SFPBWebCardSection *webCardSection; // @synthesize webCardSection=_webCardSection;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

