//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ATXPBInfoSuggestion : PBCodable <NSCopying>
{
    long long _confidenceLevel;
    double _endDate;
    long long _layouts;
    double _relevanceScore;
    double _startDate;
    NSString *_appBundleIdentifier;
    NSData *_archivedIntent;
    NSData *_archivedMetadata;
    NSString *_clientModelId;
    NSString *_criterion;
    NSString *_sourceIdentifier;
    NSString *_suggestionIdentifier;
    NSString *_widgetBundleIdentifier;
    NSString *_widgetKind;
    struct {
        unsigned int confidenceLevel:1;
        unsigned int endDate:1;
        unsigned int layouts:1;
        unsigned int relevanceScore:1;
        unsigned int startDate:1;
    } _has;
}

@property (strong, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (strong, nonatomic) NSData *archivedIntent; // @synthesize archivedIntent=_archivedIntent;
@property (strong, nonatomic) NSData *archivedMetadata; // @synthesize archivedMetadata=_archivedMetadata;
@property (strong, nonatomic) NSString *clientModelId; // @synthesize clientModelId=_clientModelId;
@property (nonatomic) long long confidenceLevel; // @synthesize confidenceLevel=_confidenceLevel;
@property (strong, nonatomic) NSString *criterion; // @synthesize criterion=_criterion;
@property (nonatomic) double endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasArchivedIntent;
@property (readonly, nonatomic) BOOL hasArchivedMetadata;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasConfidenceLevel;
@property (readonly, nonatomic) BOOL hasCriterion;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasLayouts;
@property (nonatomic) BOOL hasRelevanceScore;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasSuggestionIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetBundleIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (nonatomic) long long layouts; // @synthesize layouts=_layouts;
@property (nonatomic) double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property (strong, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property (nonatomic) double startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSString *suggestionIdentifier; // @synthesize suggestionIdentifier=_suggestionIdentifier;
@property (strong, nonatomic) NSString *widgetBundleIdentifier; // @synthesize widgetBundleIdentifier=_widgetBundleIdentifier;
@property (strong, nonatomic) NSString *widgetKind; // @synthesize widgetKind=_widgetKind;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

