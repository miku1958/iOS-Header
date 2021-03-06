//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCRTCPPacket : NSObject
{
    unsigned char _packetType;
    unsigned int _SSRC;
}

@property (nonatomic) unsigned int SSRC; // @synthesize SSRC=_SSRC;
@property (nonatomic) unsigned char packetType; // @synthesize packetType=_packetType;

+ (id)newPacketWithRTCPPacket:(struct tagRTCPPACKET *)arg1;
- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end

