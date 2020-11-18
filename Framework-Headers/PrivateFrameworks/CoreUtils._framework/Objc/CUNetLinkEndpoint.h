//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUNetLinkEndpoint : NSObject
{
    CDUnion_fab80606 _ipAddr;
    int _state;
    CDUnknownBlockType _stateChangedHandler;
    unsigned long long _expireTime;
    unsigned long long _expiredTicks;
    BOOL _present;
    unsigned int _seqNum;
    unsigned int _stateChanges;
    BOOL _client;
}

@property (readonly, nonatomic, getter=isClient) BOOL client; // @synthesize client=_client;
@property (nonatomic) CDUnion_fab80606 ipAddr; // @synthesize ipAddr=_ipAddr;
@property (readonly, nonatomic) int state; // @synthesize state=_state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;

@end

