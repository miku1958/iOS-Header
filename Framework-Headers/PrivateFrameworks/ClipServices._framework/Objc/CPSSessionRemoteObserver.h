//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/CPSSessionObserving-Protocol.h>

@class NSString;
@protocol NSXPCProxyCreating;

@interface CPSSessionRemoteObserver : NSObject <CPSSessionObserving>
{
    id<NSXPCProxyCreating> _xpcProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)observerWithXPCProxy:(id)arg1;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithXPCProxy:(id)arg1;

@end

