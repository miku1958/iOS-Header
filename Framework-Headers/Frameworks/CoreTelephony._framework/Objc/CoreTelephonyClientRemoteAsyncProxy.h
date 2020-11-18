//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <CoreTelephony/CTXPCServiceInterface-Protocol.h>

@class NSObject, NSString;
@protocol CTXPCServiceInterface;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface>
{
    NSObject<CTXPCServiceInterface> *_target;
    struct queue _userQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCObject:(id)arg1 userQueue:(struct queue)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
