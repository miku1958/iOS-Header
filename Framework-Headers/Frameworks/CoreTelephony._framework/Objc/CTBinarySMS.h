//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSData, NSString;

@interface CTBinarySMS : NSObject
{
    int _portAddressingScheme;
    int _srcPort;
    int _dstPort;
    NSData *_payload;
    NSString *_destinationAddress;
    NSString *_smscAddress;
    CTXPCServiceSubscriptionContext *_context;
}

@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property (copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property (nonatomic) int dstPort; // @synthesize dstPort=_dstPort;
@property (copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property (nonatomic) int portAddressingScheme; // @synthesize portAddressingScheme=_portAddressingScheme;
@property (copy, nonatomic) NSString *smscAddress; // @synthesize smscAddress=_smscAddress;
@property (nonatomic) int srcPort; // @synthesize srcPort=_srcPort;

- (void)dealloc;
- (id)init;
- (BOOL)isValid;

@end

