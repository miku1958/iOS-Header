//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>
{
    NSData *_report;
    NSString *_virtualDeviceID;
}

@property (readonly, nonatomic) BOOL hasReport;
@property (readonly, nonatomic) BOOL hasVirtualDeviceID;
@property (strong, nonatomic) NSData *report; // @synthesize report=_report;
@property (strong, nonatomic) NSString *virtualDeviceID; // @synthesize virtualDeviceID=_virtualDeviceID;

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

