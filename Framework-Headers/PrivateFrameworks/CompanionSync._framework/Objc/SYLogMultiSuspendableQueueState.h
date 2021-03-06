//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogMultiSuspendableQueueState : PBCodable <NSCopying>
{
    NSString *_label;
    int _resumeCount;
    NSString *_target;
    struct {
        unsigned int resumeCount:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasResumeCount;
@property (readonly, nonatomic) BOOL hasTarget;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) int resumeCount; // @synthesize resumeCount=_resumeCount;
@property (strong, nonatomic) NSString *target; // @synthesize target=_target;

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

