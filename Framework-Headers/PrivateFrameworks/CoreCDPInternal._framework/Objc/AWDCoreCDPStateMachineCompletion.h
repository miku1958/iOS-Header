//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreCDPInternal/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreCDPStateMachineCompletion : PBCodable <NSCopying>
{
    long long _errorCode;
    unsigned long long _timestamp;
    NSString *_errorDomain;
    BOOL _cloudDataProtectionEnabled;
    BOOL _shouldCompleteSignIn;
    CDStruct_a58e9fc9 _has;
}

@property (nonatomic) BOOL cloudDataProtectionEnabled; // @synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled;
@property (nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property (strong, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property (nonatomic) BOOL hasCloudDataProtectionEnabled;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasShouldCompleteSignIn;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL shouldCompleteSignIn; // @synthesize shouldCompleteSignIn=_shouldCompleteSignIn;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

