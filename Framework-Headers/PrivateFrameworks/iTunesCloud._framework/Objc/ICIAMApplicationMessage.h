//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMLocalNotification, ICIAMMessageRule, ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMApplicationMessage : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    int _assetPrefetchStrategy;
    NSMutableArray *_contentPages;
    int _globalPresentationPolicyGroup;
    ICIAMMetricEvent *_holdoutEvent;
    NSString *_identifier;
    ICIAMMetricEvent *_impressionEvent;
    ICIAMLocalNotification *_localNotification;
    int _maximumDisplays;
    int _messageType;
    int _modalPresentationStyle;
    NSMutableArray *_presentationTriggers;
    int _priority;
    ICIAMMessageRule *_rule;
    NSMutableArray *_targets;
    NSString *_templateURL;
    NSString *_webArchiveURL;
    BOOL _carousel;
    BOOL _hasCloseButton;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int assetPrefetchStrategy:1;
        unsigned int globalPresentationPolicyGroup:1;
        unsigned int maximumDisplays:1;
        unsigned int messageType:1;
        unsigned int modalPresentationStyle:1;
        unsigned int priority:1;
        unsigned int carousel:1;
        unsigned int hasCloseButton:1;
    } _has;
}

@property (nonatomic) int assetPrefetchStrategy; // @synthesize assetPrefetchStrategy=_assetPrefetchStrategy;
@property (nonatomic) BOOL carousel; // @synthesize carousel=_carousel;
@property (strong, nonatomic) NSMutableArray *contentPages; // @synthesize contentPages=_contentPages;
@property (nonatomic) double endDate; // @synthesize endDate=_endDate;
@property (nonatomic) int globalPresentationPolicyGroup; // @synthesize globalPresentationPolicyGroup=_globalPresentationPolicyGroup;
@property (nonatomic) BOOL hasAssetPrefetchStrategy;
@property (nonatomic) BOOL hasCarousel;
@property (nonatomic) BOOL hasCloseButton; // @synthesize hasCloseButton=_hasCloseButton;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasGlobalPresentationPolicyGroup;
@property (nonatomic) BOOL hasHasCloseButton;
@property (readonly, nonatomic) BOOL hasHoldoutEvent;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasImpressionEvent;
@property (readonly, nonatomic) BOOL hasLocalNotification;
@property (nonatomic) BOOL hasMaximumDisplays;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasModalPresentationStyle;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasRule;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasTemplateURL;
@property (readonly, nonatomic) BOOL hasWebArchiveURL;
@property (strong, nonatomic) ICIAMMetricEvent *holdoutEvent; // @synthesize holdoutEvent=_holdoutEvent;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) ICIAMMetricEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property (strong, nonatomic) ICIAMLocalNotification *localNotification; // @synthesize localNotification=_localNotification;
@property (nonatomic) int maximumDisplays; // @synthesize maximumDisplays=_maximumDisplays;
@property (nonatomic) int messageType; // @synthesize messageType=_messageType;
@property (nonatomic) int modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property (strong, nonatomic) NSMutableArray *presentationTriggers; // @synthesize presentationTriggers=_presentationTriggers;
@property (nonatomic) int priority; // @synthesize priority=_priority;
@property (strong, nonatomic) ICIAMMessageRule *rule; // @synthesize rule=_rule;
@property (nonatomic) double startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSMutableArray *targets; // @synthesize targets=_targets;
@property (strong, nonatomic) NSString *templateURL; // @synthesize templateURL=_templateURL;
@property (strong, nonatomic) NSString *webArchiveURL; // @synthesize webArchiveURL=_webArchiveURL;

+ (Class)contentPagesType;
+ (Class)presentationTriggersType;
+ (Class)targetType;
- (void).cxx_destruct;
- (int)StringAsAssetPrefetchStrategy:(id)arg1;
- (int)StringAsGlobalPresentationPolicyGroup:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (int)StringAsModalPresentationStyle:(id)arg1;
- (void)addContentPages:(id)arg1;
- (void)addPresentationTriggers:(id)arg1;
- (void)addTarget:(id)arg1;
- (id)assetPrefetchStrategyAsString:(int)arg1;
- (void)clearContentPages;
- (void)clearPresentationTriggers;
- (void)clearTargets;
- (id)contentPagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentPagesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalPresentationPolicyGroupAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (id)modalPresentationStyleAsString:(int)arg1;
- (id)presentationTriggersAtIndex:(unsigned long long)arg1;
- (unsigned long long)presentationTriggersCount;
- (BOOL)readFrom:(id)arg1;
- (id)targetAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetsCount;
- (void)writeTo:(id)arg1;

@end
