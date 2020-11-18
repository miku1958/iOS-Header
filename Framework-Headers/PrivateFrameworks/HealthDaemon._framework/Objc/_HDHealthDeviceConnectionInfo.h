//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface _HDHealthDeviceConnectionInfo : NSObject
{
    unsigned long long _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _transitoryHandler;
    CDUnknownBlockType _characteristicsHandler;
    NSUUID *_peripheralUUID;
    long long _connectionState;
}

@property (readonly, nonatomic) CDUnknownBlockType characteristicsHandler; // @synthesize characteristicsHandler=_characteristicsHandler;
@property (nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property (readonly, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
@property (readonly, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property (nonatomic) unsigned long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) CDUnknownBlockType transitoryHandler; // @synthesize transitoryHandler=_transitoryHandler;

- (void).cxx_destruct;
- (id)initWithSessionHandler:(CDUnknownBlockType)arg1 transitoryHandler:(CDUnknownBlockType)arg2 characteristicsHandler:(CDUnknownBlockType)arg3 peripheralUUID:(id)arg4;

@end

