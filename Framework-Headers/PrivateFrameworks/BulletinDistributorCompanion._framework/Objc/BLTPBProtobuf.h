//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/IDSProtobuf.h>

@class PBCodable;

@interface BLTPBProtobuf : IDSProtobuf
{
    BOOL _hasSequenceNumber;
    BOOL _isInitialSequenceNumber;
    PBCodable *_protobuf;
    unsigned long long _sequenceNumber;
    IDSProtobuf *_idsProtobuf;
}

@property (nonatomic) BOOL hasSequenceNumber; // @synthesize hasSequenceNumber=_hasSequenceNumber;
@property (strong, nonatomic) IDSProtobuf *idsProtobuf; // @synthesize idsProtobuf=_idsProtobuf;
@property (readonly, nonatomic) BOOL isInitialSequenceNumber; // @synthesize isInitialSequenceNumber=_isInitialSequenceNumber;
@property (strong, nonatomic) PBCodable *protobuf; // @synthesize protobuf=_protobuf;
@property (nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

- (void).cxx_destruct;
- (id)initWithIDSProtobuf:(id)arg1;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 sequenceNumber:(unsigned long long)arg4 isInitialSequenceNumber:(BOOL)arg5;

@end
