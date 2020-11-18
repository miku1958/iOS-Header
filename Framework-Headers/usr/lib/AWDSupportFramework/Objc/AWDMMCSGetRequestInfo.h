//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying>
{
    long long _duration;
    long long _localBytes;
    long long _resumedBytes;
    long long _startTime;
    long long _timestamp;
    NSMutableArray *_authHttpInfos;
    NSMutableArray *_cancelErrors;
    int _cancelledErrorCode;
    NSString *_cancelledErrorDomain;
    NSString *_clientId;
    NSMutableArray *_completeHttpInfos;
    NSMutableArray *_containerHttpInfos;
    NSMutableArray *_errors;
    int _itemCount;
    int _itemsNeedingChunks;
    int _requestErrorCode;
    NSString *_requestErrorDomain;
    struct {
        unsigned int duration:1;
        unsigned int localBytes:1;
        unsigned int resumedBytes:1;
        unsigned int startTime:1;
        unsigned int timestamp:1;
        unsigned int cancelledErrorCode:1;
        unsigned int itemCount:1;
        unsigned int itemsNeedingChunks:1;
        unsigned int requestErrorCode:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *authHttpInfos; // @synthesize authHttpInfos=_authHttpInfos;
@property (strong, nonatomic) NSMutableArray *cancelErrors; // @synthesize cancelErrors=_cancelErrors;
@property (nonatomic) int cancelledErrorCode; // @synthesize cancelledErrorCode=_cancelledErrorCode;
@property (strong, nonatomic) NSString *cancelledErrorDomain; // @synthesize cancelledErrorDomain=_cancelledErrorDomain;
@property (strong, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property (strong, nonatomic) NSMutableArray *completeHttpInfos; // @synthesize completeHttpInfos=_completeHttpInfos;
@property (strong, nonatomic) NSMutableArray *containerHttpInfos; // @synthesize containerHttpInfos=_containerHttpInfos;
@property (nonatomic) long long duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property (nonatomic) BOOL hasCancelledErrorCode;
@property (readonly, nonatomic) BOOL hasCancelledErrorDomain;
@property (readonly, nonatomic) BOOL hasClientId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasItemCount;
@property (nonatomic) BOOL hasItemsNeedingChunks;
@property (nonatomic) BOOL hasLocalBytes;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (readonly, nonatomic) BOOL hasRequestErrorDomain;
@property (nonatomic) BOOL hasResumedBytes;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int itemCount; // @synthesize itemCount=_itemCount;
@property (nonatomic) int itemsNeedingChunks; // @synthesize itemsNeedingChunks=_itemsNeedingChunks;
@property (nonatomic) long long localBytes; // @synthesize localBytes=_localBytes;
@property (nonatomic) int requestErrorCode; // @synthesize requestErrorCode=_requestErrorCode;
@property (strong, nonatomic) NSString *requestErrorDomain; // @synthesize requestErrorDomain=_requestErrorDomain;
@property (nonatomic) long long resumedBytes; // @synthesize resumedBytes=_resumedBytes;
@property (nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property (nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;

- (void)addAuthHttpInfos:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addError:(id)arg1;
- (id)authHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned long long)arg1;
- (unsigned long long)cancelErrorsCount;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (void)clearErrors;
- (id)completeHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)completeHttpInfosCount;
- (id)containerHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerHttpInfosCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

