//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@class AWDMailMessage;

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying>
{
    long long _timeLoadingSpinnerIsVisibleInSeconds;
    unsigned long long _timestamp;
    AWDMailMessage *_message;
    struct {
        unsigned int timeLoadingSpinnerIsVisibleInSeconds:1;
        unsigned int timestamp:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasTimeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) AWDMailMessage *message; // @synthesize message=_message;
@property (nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds; // @synthesize timeLoadingSpinnerIsVisibleInSeconds=_timeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

