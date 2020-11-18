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
    NSData *_alertSuppressionContexts;
    NSData *_attachment;
    unsigned int _attachmentType;
    NSString *_bulletinID;
    NSString *_category;
    NSData *_context;
    BLTPBAction *_dismissAction;
    unsigned int _feed;
    NSString *_messageTitle;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionDisplayName;
    NSString *_sectionID;
    int _sectionSubtype;
    BLTPBAction *_snoozeAction;
    NSString *_sockPuppetAppBundleID;
    NSString *_soundAccountIdentifier;
    int _soundAlertType;
    NSString *_soundToneIdentifier;
    NSString *_subtitle;
    NSMutableArray *_supplementaryActions;
    NSString *_teamID;
    NSString *_title;
    NSString *_universalSectionID;
    BOOL _containsUpdatedAttachment;
    BOOL _includesSound;
    BOOL _loading;
    struct {
        unsigned int date:1;
        unsigned int publicationDate:1;
        unsigned int attachmentType:1;
        unsigned int sectionSubtype:1;
        unsigned int soundAlertType:1;
        unsigned int containsUpdatedAttachment:1;
        unsigned int loading:1;
    } _has;
}

@property (strong, nonatomic) NSData *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property (strong, nonatomic) NSData *attachment; // @synthesize attachment=_attachment;
@property (nonatomic) unsigned int attachmentType; // @synthesize attachmentType=_attachmentType;
@property (strong, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (nonatomic) BOOL containsUpdatedAttachment; // @synthesize containsUpdatedAttachment=_containsUpdatedAttachment;
@property (strong, nonatomic) NSData *context; // @synthesize context=_context;
@property (nonatomic) double date; // @synthesize date=_date;
@property (strong, nonatomic) BLTPBAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property (nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property (readonly, nonatomic) BOOL hasAlertSuppressionContexts;
@property (readonly, nonatomic) BOOL hasAttachment;
@property (nonatomic) BOOL hasAttachmentType;
@property (readonly, nonatomic) BOOL hasBulletinID;
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasContainsUpdatedAttachment;
@property (readonly, nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (nonatomic) BOOL hasLoading;
@property (readonly, nonatomic) BOOL hasMessageTitle;
@property (nonatomic) BOOL hasPublicationDate;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (readonly, nonatomic) BOOL hasSectionDisplayName;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) BOOL hasSectionSubtype;
@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (readonly, nonatomic) BOOL hasSockPuppetAppBundleID;
@property (readonly, nonatomic) BOOL hasSoundAccountIdentifier;
@property (nonatomic) BOOL hasSoundAlertType;
@property (readonly, nonatomic) BOOL hasSoundToneIdentifier;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTeamID;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (nonatomic) BOOL includesSound; // @synthesize includesSound=_includesSound;
@property (nonatomic) BOOL loading; // @synthesize loading=_loading;
@property (strong, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property (nonatomic) double publicationDate; // @synthesize publicationDate=_publicationDate;
@property (strong, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property (strong, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property (strong, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (nonatomic) int sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property (strong, nonatomic) BLTPBAction *snoozeAction; // @synthesize snoozeAction=_snoozeAction;
@property (strong, nonatomic) NSString *sockPuppetAppBundleID; // @synthesize sockPuppetAppBundleID=_sockPuppetAppBundleID;
@property (strong, nonatomic) NSString *soundAccountIdentifier; // @synthesize soundAccountIdentifier=_soundAccountIdentifier;
@property (nonatomic) int soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property (strong, nonatomic) NSString *soundToneIdentifier; // @synthesize soundToneIdentifier=_soundToneIdentifier;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSMutableArray *supplementaryActions; // @synthesize supplementaryActions=_supplementaryActions;
@property (strong, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;

+ (void)_addPrimaryAttachmentFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 isSockPuppetAppInstalled:(BOOL)arg3 observer:(id)arg4 feed:(unsigned long long)arg5 teamID:(id)arg6 universalSectionID:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void).cxx_destruct;
- (void)addSupplementaryActions:(id)arg1;
- (void)clearSupplementaryActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherMatchID;
- (BOOL)readFrom:(id)arg1;
- (id)supplementaryActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supplementaryActionsCount;
- (void)writeTo:(id)arg1;

@end
