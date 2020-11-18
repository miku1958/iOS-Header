//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface GKMatchPacket : NSObject
{
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    BOOL _valid;
    NSData *_data;
}

@property (nonatomic) unsigned short checksum; // @synthesize checksum=_checksum;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) unsigned char packetType; // @synthesize packetType=_packetType;
@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property (nonatomic) BOOL valid; // @synthesize valid=_valid;
@property (nonatomic) unsigned char version; // @synthesize version=_version;

- (void)dealloc;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)message;

@end

