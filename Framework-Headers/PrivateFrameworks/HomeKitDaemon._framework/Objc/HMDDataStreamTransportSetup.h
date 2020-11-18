//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDDataStreamTransportCommand, HMDDataStreamTransportTransportType, NSData;

@interface HMDDataStreamTransportSetup : NSObject <NSCopying>
{
    HMDDataStreamTransportCommand *_command;
    HMDDataStreamTransportTransportType *_transportType;
    NSData *_controllerKeySalt;
}

@property (strong, nonatomic) HMDDataStreamTransportCommand *command; // @synthesize command=_command;
@property (strong, nonatomic) NSData *controllerKeySalt; // @synthesize controllerKeySalt=_controllerKeySalt;
@property (strong, nonatomic) HMDDataStreamTransportTransportType *transportType; // @synthesize transportType=_transportType;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end
