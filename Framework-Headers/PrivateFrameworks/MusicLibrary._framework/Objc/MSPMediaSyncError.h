//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSString;

@interface MSPMediaSyncError : PBCodable <NSCopying>
{
    int _errorCode;
    NSString *_errorDescription;
    struct {
        unsigned int errorCode:1;
    } _has;
}

@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (strong, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;

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
