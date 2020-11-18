//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableData, NSString, _MRTransactionKeyProtobuf, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject <NSCopying>
{
    NSMutableData *_data;
    struct _MRTransactionKeyProtobuf *_key;
    unsigned long long _writeLength;
    unsigned long long _writePosition;
    NSString *_identifier;
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
}

@property (readonly, nonatomic) unsigned long long actualLength;
@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) _MRTransactionKeyProtobuf *key; // @synthesize key=_key;
@property (readonly, nonatomic) _MRTransactionPacketProtobuf *protobuf;
@property (readonly, nonatomic, getter=isReadComplete) BOOL readComplete;
@property (readonly, nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property (readonly, nonatomic) unsigned long long totalWritePosition; // @synthesize totalWritePosition=_totalWritePosition;
@property (readonly, nonatomic, getter=isWriteComplete) BOOL writeComplete;
@property (nonatomic) unsigned long long writeLength; // @synthesize writeLength=_writeLength;
@property (readonly, nonatomic) unsigned long long writePosition; // @synthesize writePosition=_writePosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithData:(id)arg1 forKey:(struct _MRTransactionKeyProtobuf *)arg2;
- (id)initWithPackets:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (BOOL)isComplete;
- (void)writeComplete;

@end

