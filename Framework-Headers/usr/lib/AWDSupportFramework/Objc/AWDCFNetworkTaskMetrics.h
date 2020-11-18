//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying>
{
    unsigned long long _didCompleteWithError;
    long long _error;
    unsigned long long _numberOfRedirects;
    unsigned long long _numberOfRetries;
    unsigned long long _taskResume;
    unsigned long long _timestamp;
    long long _underlyingError;
    long long _underlyingErrorDomain;
    NSString *_activityUUID;
    int _taskType;
    NSMutableArray *_transactionMetrics;
    BOOL _isBackground;
    struct {
        unsigned int didCompleteWithError:1;
        unsigned int error:1;
        unsigned int numberOfRedirects:1;
        unsigned int numberOfRetries:1;
        unsigned int taskResume:1;
        unsigned int timestamp:1;
        unsigned int underlyingError:1;
        unsigned int underlyingErrorDomain:1;
        unsigned int taskType:1;
        unsigned int isBackground:1;
    } _has;
}

@property (strong, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property (nonatomic) unsigned long long didCompleteWithError; // @synthesize didCompleteWithError=_didCompleteWithError;
@property (nonatomic) long long error; // @synthesize error=_error;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (nonatomic) BOOL hasDidCompleteWithError;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasIsBackground;
@property (nonatomic) BOOL hasNumberOfRedirects;
@property (nonatomic) BOOL hasNumberOfRetries;
@property (nonatomic) BOOL hasTaskResume;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnderlyingError;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) BOOL isBackground; // @synthesize isBackground=_isBackground;
@property (nonatomic) unsigned long long numberOfRedirects; // @synthesize numberOfRedirects=_numberOfRedirects;
@property (nonatomic) unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property (nonatomic) unsigned long long taskResume; // @synthesize taskResume=_taskResume;
@property (nonatomic) int taskType; // @synthesize taskType=_taskType;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSMutableArray *transactionMetrics; // @synthesize transactionMetrics=_transactionMetrics;
@property (nonatomic) long long underlyingError; // @synthesize underlyingError=_underlyingError;
@property (nonatomic) long long underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;

+ (Class)transactionMetricsType;
- (int)StringAsTaskType:(id)arg1;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)writeTo:(id)arg1;

@end

