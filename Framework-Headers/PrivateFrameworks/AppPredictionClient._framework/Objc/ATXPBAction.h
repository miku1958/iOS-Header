//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class ATXPBAVRouteInfo, ATXPBActionCriteria, NSData, NSMutableArray, NSString;

@interface ATXPBAction : PBCodable <NSCopying>
{
    long long _actionType;
    long long _userActivityHash;
    NSString *_activityString;
    NSString *_bundleId;
    NSData *_contentAttributeSet;
    ATXPBActionCriteria *_criteria;
    NSString *_heuristic;
    NSMutableArray *_heuristicMetadatas;
    NSData *_intent;
    NSString *_itemIdentifier;
    NSString *_languageCode;
    ATXPBAVRouteInfo *_routeInfo;
    NSString *_subtitle;
    NSString *_title;
    NSData *_userActivityProxy;
    NSString *_uuid;
    BOOL _isFutureMedia;
    struct {
        unsigned int actionType:1;
        unsigned int userActivityHash:1;
        unsigned int isFutureMedia:1;
    } _has;
}

@property (nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property (strong, nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
@property (strong, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (strong, nonatomic) NSData *contentAttributeSet; // @synthesize contentAttributeSet=_contentAttributeSet;
@property (strong, nonatomic) ATXPBActionCriteria *criteria; // @synthesize criteria=_criteria;
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasActivityString;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasContentAttributeSet;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (readonly, nonatomic) BOOL hasHeuristic;
@property (readonly, nonatomic) BOOL hasIntent;
@property (nonatomic) BOOL hasIsFutureMedia;
@property (readonly, nonatomic) BOOL hasItemIdentifier;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasRouteInfo;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasUserActivityHash;
@property (readonly, nonatomic) BOOL hasUserActivityProxy;
@property (readonly, nonatomic) BOOL hasUuid;
@property (strong, nonatomic) NSString *heuristic; // @synthesize heuristic=_heuristic;
@property (strong, nonatomic) NSMutableArray *heuristicMetadatas; // @synthesize heuristicMetadatas=_heuristicMetadatas;
@property (strong, nonatomic) NSData *intent; // @synthesize intent=_intent;
@property (nonatomic) BOOL isFutureMedia; // @synthesize isFutureMedia=_isFutureMedia;
@property (strong, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (strong, nonatomic) ATXPBAVRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long userActivityHash; // @synthesize userActivityHash=_userActivityHash;
@property (strong, nonatomic) NSData *userActivityProxy; // @synthesize userActivityProxy=_userActivityProxy;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (Class)heuristicMetadataType;
- (void).cxx_destruct;
- (void)addHeuristicMetadata:(id)arg1;
- (void)clearHeuristicMetadatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)heuristicMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)heuristicMetadatasCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

