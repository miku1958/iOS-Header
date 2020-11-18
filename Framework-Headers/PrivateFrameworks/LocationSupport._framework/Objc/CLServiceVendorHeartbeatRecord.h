//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject
{
    int _synCount;
    int _ackCount;
    int _residentCount;
    CLSilo *_silo;
    Class _svcClass;
}

@property (readonly, nonatomic) int ackCount; // @synthesize ackCount=_ackCount;
@property (nonatomic) int residentCount; // @synthesize residentCount=_residentCount;
@property (readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
@property (readonly, nonatomic) Class svcClass; // @synthesize svcClass=_svcClass;
@property (readonly, nonatomic) int synCount; // @synthesize synCount=_synCount;

- (void).cxx_destruct;
- (void)ack;
- (id)initTrackingServiceClass:(Class)arg1;
- (void)syn;

@end
