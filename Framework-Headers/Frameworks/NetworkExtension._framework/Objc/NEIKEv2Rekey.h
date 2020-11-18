//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSObject-Protocol.h>

@class NSString;

@interface NEIKEv2Rekey : NSObject <NSObject>
{
    int _ikeLifetimeMinutes;
    int _childLifetimeMinutes;
    CDUnknownBlockType _ikeRekeyHandler;
    CDUnknownBlockType _childRekeyHandler;
}

@property int childLifetimeMinutes; // @synthesize childLifetimeMinutes=_childLifetimeMinutes;
@property (copy) CDUnknownBlockType childRekeyHandler; // @synthesize childRekeyHandler=_childRekeyHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int ikeLifetimeMinutes; // @synthesize ikeLifetimeMinutes=_ikeLifetimeMinutes;
@property (copy) CDUnknownBlockType ikeRekeyHandler; // @synthesize ikeRekeyHandler=_ikeRekeyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearTimers;
- (void)dealloc;
- (void)invokeChildRekeyHandler;
- (void)invokeIKERekeyHandler;
- (void)startChildTimer:(int)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)startIKETimer:(int)arg1 timeoutHandler:(CDUnknownBlockType)arg2;

@end
