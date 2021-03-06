//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeer, CBUUID, NSInputStream, NSOutputStream;

@interface CBL2CAPChannel : NSObject
{
    unsigned short _PSM;
    int _socketFD;
    CBPeer *_peer;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    CBUUID *_serviceUUID;
}

@property (readonly, nonatomic) unsigned short PSM; // @synthesize PSM=_PSM;
@property (readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (readonly, nonatomic) CBPeer *peer; // @synthesize peer=_peer;
@property (strong, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property (readonly, nonatomic) int socketFD; // @synthesize socketFD=_socketFD;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)arg1 info:(id)arg2;

@end

