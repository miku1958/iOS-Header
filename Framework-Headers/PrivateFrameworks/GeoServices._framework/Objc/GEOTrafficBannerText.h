//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray;

@interface GEOTrafficBannerText : PBCodable <NSCopying>
{
    GEOFormattedString *_bannerLargeText;
    GEOFormattedString *_bannerSmallText;
    int _bannerStyle;
    unsigned int _hideAtDistance;
    unsigned int _incidentDistance;
    unsigned int _incidentIndex;
    NSMutableArray *_localizedIncidentBanners;
    NSMutableArray *_localizedIncidentSpokenTexts;
    NSMutableArray *_localizedIncidentSubBanners;
    int _previousBannerChange;
    unsigned int _secondsSaved;
    unsigned int _showAtDistance;
    GEOFormattedString *_spokenPrompt;
    BOOL _disableFasterRerouteByDefault;
    struct {
        unsigned int bannerStyle:1;
        unsigned int hideAtDistance:1;
        unsigned int incidentDistance:1;
        unsigned int incidentIndex:1;
        unsigned int previousBannerChange:1;
        unsigned int secondsSaved:1;
        unsigned int showAtDistance:1;
        unsigned int disableFasterRerouteByDefault:1;
    } _has;
}

@property (strong, nonatomic) GEOFormattedString *bannerLargeText; // @synthesize bannerLargeText=_bannerLargeText;
@property (strong, nonatomic) GEOFormattedString *bannerSmallText; // @synthesize bannerSmallText=_bannerSmallText;
@property (nonatomic) int bannerStyle; // @synthesize bannerStyle=_bannerStyle;
@property (nonatomic) BOOL disableFasterRerouteByDefault; // @synthesize disableFasterRerouteByDefault=_disableFasterRerouteByDefault;
@property (readonly, nonatomic) BOOL hasBannerLargeText;
@property (readonly, nonatomic) BOOL hasBannerSmallText;
@property (nonatomic) BOOL hasBannerStyle;
@property (nonatomic) BOOL hasDisableFasterRerouteByDefault;
@property (nonatomic) BOOL hasHideAtDistance;
@property (nonatomic) BOOL hasIncidentDistance;
@property (nonatomic) BOOL hasIncidentIndex;
@property (nonatomic) BOOL hasPreviousBannerChange;
@property (nonatomic) BOOL hasSecondsSaved;
@property (nonatomic) BOOL hasShowAtDistance;
@property (readonly, nonatomic) BOOL hasSpokenPrompt;
@property (nonatomic) unsigned int hideAtDistance; // @synthesize hideAtDistance=_hideAtDistance;
@property (nonatomic) unsigned int incidentDistance; // @synthesize incidentDistance=_incidentDistance;
@property (nonatomic) unsigned int incidentIndex; // @synthesize incidentIndex=_incidentIndex;
@property (strong, nonatomic) NSMutableArray *localizedIncidentBanners; // @synthesize localizedIncidentBanners=_localizedIncidentBanners;
@property (strong, nonatomic) NSMutableArray *localizedIncidentSpokenTexts; // @synthesize localizedIncidentSpokenTexts=_localizedIncidentSpokenTexts;
@property (strong, nonatomic) NSMutableArray *localizedIncidentSubBanners; // @synthesize localizedIncidentSubBanners=_localizedIncidentSubBanners;
@property (nonatomic) int previousBannerChange; // @synthesize previousBannerChange=_previousBannerChange;
@property (nonatomic) unsigned int secondsSaved; // @synthesize secondsSaved=_secondsSaved;
@property (nonatomic) unsigned int showAtDistance; // @synthesize showAtDistance=_showAtDistance;
@property (strong, nonatomic) GEOFormattedString *spokenPrompt; // @synthesize spokenPrompt=_spokenPrompt;

+ (Class)localizedIncidentBannerType;
+ (Class)localizedIncidentSpokenTextType;
+ (Class)localizedIncidentSubBannerType;
- (void).cxx_destruct;
- (int)StringAsBannerStyle:(id)arg1;
- (int)StringAsPreviousBannerChange:(id)arg1;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (id)bannerStyleAsString:(int)arg1;
- (void)clearLocalizedIncidentBanners;
- (void)clearLocalizedIncidentSpokenTexts;
- (void)clearLocalizedIncidentSubBanners;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentBannersCount;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)mergeFrom:(id)arg1;
- (id)previousBannerChangeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

