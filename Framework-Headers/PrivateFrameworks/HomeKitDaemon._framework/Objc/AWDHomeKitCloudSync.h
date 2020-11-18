//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitCloudSync : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _dataSyncState;
    unsigned int _fetchCount;
    unsigned int _pushCount;
    NSMutableArray *_topErrors;
    NSMutableArray *_topReasons;
    unsigned int _uploadCount;
    unsigned int _uploadErrorCount;
    BOOL _hasDecryptionFailed;
    BOOL _lastDecryptionFailed;
    BOOL _uploadMaximumDelayReached;
    struct {
        unsigned int timestamp:1;
        unsigned int dataSyncState:1;
        unsigned int fetchCount:1;
        unsigned int pushCount:1;
        unsigned int uploadCount:1;
        unsigned int uploadErrorCount:1;
        unsigned int hasDecryptionFailed:1;
        unsigned int lastDecryptionFailed:1;
        unsigned int uploadMaximumDelayReached:1;
    } _has;
}

@property (nonatomic) int dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property (nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property (nonatomic) BOOL hasDataSyncState;
@property (nonatomic) BOOL hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property (nonatomic) BOOL hasFetchCount;
@property (nonatomic) BOOL hasHasDecryptionFailed;
@property (nonatomic) BOOL hasLastDecryptionFailed;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUploadCount;
@property (nonatomic) BOOL hasUploadErrorCount;
@property (nonatomic) BOOL hasUploadMaximumDelayReached;
@property (nonatomic) BOOL lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property (nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSMutableArray *topErrors; // @synthesize topErrors=_topErrors;
@property (strong, nonatomic) NSMutableArray *topReasons; // @synthesize topReasons=_topReasons;
@property (nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property (nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property (nonatomic) BOOL uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;

+ (Class)topErrorsType;
+ (Class)topReasonsType;
- (void).cxx_destruct;
- (int)StringAsDataSyncState:(id)arg1;
- (void)addTopErrors:(id)arg1;
- (void)addTopReasons:(id)arg1;
- (void)clearTopErrors;
- (void)clearTopReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataSyncStateAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)topErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topErrorsCount;
- (id)topReasonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topReasonsCount;
- (void)writeTo:(id)arg1;

@end

