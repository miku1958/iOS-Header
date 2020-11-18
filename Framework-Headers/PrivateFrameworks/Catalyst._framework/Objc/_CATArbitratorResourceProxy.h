//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <Catalyst/CATArbitratorProxy-Protocol.h>

@class NSString, _CATArbitratorRegistrationEntry;

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy>
{
    id mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
    BOOL _isExclusive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isExclusive; // @synthesize isExclusive=_isExclusive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(BOOL)arg3;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

