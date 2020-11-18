//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying>
{
    int _widgetAppearanceType;
    int _widgetArticleCount;
    int _widgetHeadlineExposureCount;
    NSMutableArray *_widgetPersonalizationFeatureCTRPairs;
    NSMutableArray *_widgetSectionsArticleCountPairs;
    struct {
        unsigned int widgetAppearanceType:1;
        unsigned int widgetArticleCount:1;
        unsigned int widgetHeadlineExposureCount:1;
    } _has;
}

@property (nonatomic) BOOL hasWidgetAppearanceType;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) BOOL hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetAppearanceType; // @synthesize widgetAppearanceType=_widgetAppearanceType;
@property (nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
@property (nonatomic) int widgetHeadlineExposureCount; // @synthesize widgetHeadlineExposureCount=_widgetHeadlineExposureCount;
@property (strong, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs; // @synthesize widgetPersonalizationFeatureCTRPairs=_widgetPersonalizationFeatureCTRPairs;
@property (strong, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs; // @synthesize widgetSectionsArticleCountPairs=_widgetSectionsArticleCountPairs;

+ (Class)widgetPersonalizationFeatureCTRPairType;
+ (Class)widgetSectionsArticleCountPairType;
- (void).cxx_destruct;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)arg1;
- (void)addWidgetSectionsArticleCountPair:(id)arg1;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (void)clearWidgetSectionsArticleCountPairs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)arg1;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)arg1;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
- (void)writeTo:(id)arg1;

@end

