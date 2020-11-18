//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBAction, NSData, NSMutableArray, NSString;

@interface BLTPBBulletin : PBCodable <NSCopying>
{
    double _date;
    double _publicationDate;
    double _requiredExpirationDate;
    double _soundMaximumDuration;
    NSMutableArray *_additionalAttachments;
    NSData *_alertSuppressionContexts;
    NSData *_alertSuppressionContextsNulls;
    NSData *_attachment;
    NSString *_attachmentID;
    unsigned int _attachmentType;
    NSString *_attachmentURL;
    NSString *_bulletinID;
    NSString *_category;
    NSString *_categoryID;
    NSData *_context;
    NSData *_contextNulls;
    BLTPBAction *_dismissAction;
    NSString *_dismissalID;
    unsigned int _feed;
    NSString *_messageTitle;
    NSMutableArray *_peopleIDs;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_replyToken;
    NSString *_sectionDisplayName;
    NSString *_sectionID;
    int _sectionSubtype;
    BLTPBAction *_snoozeAction;
    NSString *_sockPuppetAppBundleID;
    NSString *_soundAccountIdentifier;
    int _soundAlertType;
    NSString *_soundToneIdentifier;
    NSMutableArray *_subsectionIDs;
    NSString *_subtitle;
    NSMutableArray *_supplementaryActions;
    NSString *_teamID;
    NSString *_threadID;
    NSString *_title;
    NSString *_universalSectionID;
    BOOL _containsUpdatedAttachment;
    BOOL _ignoresQuietMode;
    BOOL _includesSound;
    BOOL _loading;
    BOOL _soundShouldIgnoreRingerSwitch;
    BOOL _soundShouldRepeat;
    BOOL _turnsOnDisplay;
    struct {
        unsigned int date:1;
        unsigned int publicationDate:1;
        unsigned int requiredExpirationDate:1;
        unsigned int soundMaximumDuration:1;
        unsigned int attachmentType:1;
        unsigned int sectionSubtype:1;
        unsigned int soundAlertType:1;
        unsigned int containsUpdatedAttachment:1;
        unsigned int ignoresQuietMode:1;
        unsigned int loading:1;
        unsigned int soundShouldIgnoreRingerSwitch:1;
        unsigned int soundShouldRepeat:1;
        unsigned int turnsOnDisplay:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property (strong, nonatomic) NSData *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property (strong, nonatomic) NSData *alertSuppressionContextsNulls; // @synthesize alertSuppressionContextsNulls=_alertSuppressionContextsNulls;
@property (strong, nonatomic) NSData *attachment; // @synthesize attachment=_attachment;
@property (strong, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property (nonatomic) unsigned int attachmentType; // @synthesize attachmentType=_attachmentType;
@property (strong, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property (strong, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (strong, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property (nonatomic) BOOL containsUpdatedAttachment; // @synthesize containsUpdatedAttachment=_containsUpdatedAttachment;
@property (strong, nonatomic) NSData *context; // @synthesize context=_context;
@property (strong, nonatomic) NSData *contextNulls; // @synthesize contextNulls=_contextNulls;
@property (nonatomic) double date; // @synthesize date=_date;
@property (strong, nonatomic) BLTPBAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property (strong, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property (nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property (readonly, nonatomic) BOOL hasAlertSuppressionContexts;
@property (readonly, nonatomic) BOOL hasAlertSuppressionContextsNulls;
@property (readonly, nonatomic) BOOL hasAttachment;
@property (readonly, nonatomic) BOOL hasAttachmentID;
@property (nonatomic) BOOL hasAttachmentType;
@property (readonly, nonatomic) BOOL hasAttachmentURL;
@property (readonly, nonatomic) BOOL hasBulletinID;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (nonatomic) BOOL hasContainsUpdatedAttachment;
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasContextNulls;
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (readonly, nonatomic) BOOL hasDismissalID;
@property (nonatomic) BOOL hasIgnoresQuietMode;
@property (nonatomic) BOOL hasLoading;
@property (readonly, nonatomic) BOOL hasMessageTitle;
@property (nonatomic) BOOL hasPublicationDate;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (readonly, nonatomic) BOOL hasReplyToken;
@property (nonatomic) BOOL hasRequiredExpirationDate;
@property (readonly, nonatomic) BOOL hasSectionDisplayName;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) BOOL hasSectionSubtype;
@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (readonly, nonatomic) BOOL hasSockPuppetAppBundleID;
@property (readonly, nonatomic) BOOL hasSoundAccountIdentifier;
@property (nonatomic) BOOL hasSoundAlertType;
@property (nonatomic) BOOL hasSoundMaximumDuration;
@property (nonatomic) BOOL hasSoundShouldIgnoreRingerSwitch;
@property (nonatomic) BOOL hasSoundShouldRepeat;
@property (readonly, nonatomic) BOOL hasSoundToneIdentifier;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTeamID;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTurnsOnDisplay;
@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (nonatomic) BOOL ignoresQuietMode; // @synthesize ignoresQuietMode=_ignoresQuietMode;
@property (nonatomic) BOOL includesSound; // @synthesize includesSound=_includesSound;
@property (nonatomic) BOOL loading; // @synthesize loading=_loading;
@property (strong, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property (strong, nonatomic) NSMutableArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property (nonatomic) double publicationDate; // @synthesize publicationDate=_publicationDate;
@property (strong, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property (strong, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property (strong, nonatomic) NSString *replyToken; // @synthesize replyToken=_replyToken;
@property (nonatomic) double requiredExpirationDate; // @synthesize requiredExpirationDate=_requiredExpirationDate;
@property (strong, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (nonatomic) int sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property (strong, nonatomic) BLTPBAction *snoozeAction; // @synthesize snoozeAction=_snoozeAction;
@property (strong, nonatomic) NSString *sockPuppetAppBundleID; // @synthesize sockPuppetAppBundleID=_sockPuppetAppBundleID;
@property (strong, nonatomic) NSString *soundAccountIdentifier; // @synthesize soundAccountIdentifier=_soundAccountIdentifier;
@property (nonatomic) int soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property (nonatomic) double soundMaximumDuration; // @synthesize soundMaximumDuration=_soundMaximumDuration;
@property (nonatomic) BOOL soundShouldIgnoreRingerSwitch; // @synthesize soundShouldIgnoreRingerSwitch=_soundShouldIgnoreRingerSwitch;
@property (nonatomic) BOOL soundShouldRepeat; // @synthesize soundShouldRepeat=_soundShouldRepeat;
@property (strong, nonatomic) NSString *soundToneIdentifier; // @synthesize soundToneIdentifier=_soundToneIdentifier;
@property (strong, nonatomic) NSMutableArray *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSMutableArray *supplementaryActions; // @synthesize supplementaryActions=_supplementaryActions;
@property (strong, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property (strong, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) BOOL turnsOnDisplay; // @synthesize turnsOnDisplay=_turnsOnDisplay;
@property (strong, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;

+ (void)_addAttachmentsFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_attachmentFromBBAttachmentMetadata:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 favorFile:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
+ (Class)additionalAttachmentsType;
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 isSockPuppetAppInstalled:(BOOL)arg3 observer:(id)arg4 feed:(unsigned long long)arg5 teamID:(id)arg6 universalSectionID:(id)arg7 isCriticalBulletin:(BOOL)arg8 replyToken:(id)arg9 completion:(CDUnknownBlockType)arg10;
+ (Class)peopleIDsType;
+ (Class)subsectionIDsType;
+ (Class)supplementaryActionsType;
- (void).cxx_destruct;
- (void)addAdditionalAttachments:(id)arg1;
- (void)addPeopleIDs:(id)arg1;
- (void)addSubsectionIDs:(id)arg1;
- (void)addSupplementaryActions:(id)arg1;
- (id)additionalAttachmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalAttachmentsCount;
- (id)attachmentKey:(id)arg1;
- (id)attachmentURLURL;
- (void)clearAdditionalAttachments;
- (void)clearPeopleIDs;
- (void)clearSubsectionIDs;
- (void)clearSupplementaryActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peopleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleIDsCount;
- (id)publisherMatchID;
- (BOOL)readFrom:(id)arg1;
- (id)subsectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionIDsCount;
- (id)supplementaryActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supplementaryActionsCount;
- (void)writeTo:(id)arg1;

@end

