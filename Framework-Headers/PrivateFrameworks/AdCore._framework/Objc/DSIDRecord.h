//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface DSIDRecord : NSObject <NSCopying>
{
    BOOL _dirty;
    int _nextReconcileTimestamp;
    BOOL _accountIsT13;
    BOOL _accountIsU13;
    BOOL _accountIsU18;
    BOOL _accountAgeUnknown;
    BOOL _isActiveRecord;
    BOOL _isRestrictedByEU_GDPR;
    BOOL _isDPIDManatee;
    BOOL _isPlaceholderAccount;
    BOOL _lastSentPersonalizedAdsStatus;
    BOOL _notificationRequired;
    int _personalizedAdsTimestamp;
    int _segmentDataTimestamp;
    int _lastSentSegmentDataTimestamp;
    int _lastSegmentServedTimestamp;
    int _lastSentPersonalizedAdsTimestamp;
    NSString *_DSID;
    NSString *_iCloudDSID;
    NSString *_segmentData;
    NSString *_iAdIDBeforeReset;
    NSMutableDictionary *_ADIDRecords;
    long long _lastJingleAccountStatus;
}

@property (strong) NSMutableDictionary *ADIDRecords; // @synthesize ADIDRecords=_ADIDRecords;
@property (strong, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property (nonatomic) BOOL accountAgeUnknown; // @synthesize accountAgeUnknown=_accountAgeUnknown;
@property (nonatomic) BOOL accountIsT13; // @synthesize accountIsT13=_accountIsT13;
@property (nonatomic) BOOL accountIsU13; // @synthesize accountIsU13=_accountIsU13;
@property (nonatomic) BOOL accountIsU18; // @synthesize accountIsU18=_accountIsU18;
@property (nonatomic) BOOL dirty;
@property (strong, nonatomic) NSString *iAdIDBeforeReset; // @synthesize iAdIDBeforeReset=_iAdIDBeforeReset;
@property (strong, nonatomic) NSString *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property (readonly, nonatomic) BOOL isActiveRecord; // @synthesize isActiveRecord=_isActiveRecord;
@property (nonatomic) BOOL isDPIDManatee; // @synthesize isDPIDManatee=_isDPIDManatee;
@property (nonatomic) BOOL isPlaceholderAccount; // @synthesize isPlaceholderAccount=_isPlaceholderAccount;
@property (readonly, nonatomic) BOOL isRestrictedByApple;
@property (readonly, nonatomic) BOOL isRestrictedByEU_GDPR; // @synthesize isRestrictedByEU_GDPR=_isRestrictedByEU_GDPR;
@property (nonatomic) long long lastJingleAccountStatus; // @synthesize lastJingleAccountStatus=_lastJingleAccountStatus;
@property (nonatomic) int lastSegmentServedTimestamp; // @synthesize lastSegmentServedTimestamp=_lastSegmentServedTimestamp;
@property (nonatomic) BOOL lastSentPersonalizedAdsStatus; // @synthesize lastSentPersonalizedAdsStatus=_lastSentPersonalizedAdsStatus;
@property (nonatomic) int lastSentPersonalizedAdsTimestamp; // @synthesize lastSentPersonalizedAdsTimestamp=_lastSentPersonalizedAdsTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp; // @synthesize lastSentSegmentDataTimestamp=_lastSentSegmentDataTimestamp;
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) BOOL notificationRequired; // @synthesize notificationRequired=_notificationRequired;
@property (nonatomic) int personalizedAdsTimestamp; // @synthesize personalizedAdsTimestamp=_personalizedAdsTimestamp;
@property (strong, nonatomic) NSString *segmentData; // @synthesize segmentData=_segmentData;
@property (nonatomic) int segmentDataTimestamp; // @synthesize segmentDataTimestamp=_segmentDataTimestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedIDForClientType:(long long)arg1;
- (BOOL)iAdIDRecordsDirty;
- (id)idAccountsDictionaryRepresentation;
- (id)idForClientType:(long long)arg1;
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;
- (void)setID:(id)arg1 forClientType:(long long)arg2;
- (BOOL)shouldSendNotification;

@end

