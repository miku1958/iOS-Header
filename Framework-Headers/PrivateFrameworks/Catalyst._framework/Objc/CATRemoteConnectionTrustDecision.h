//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject
{
    CATRemoteConnection *mConnection;
    _Atomic BOOL mHasResponded;
    id _trust;
}

@property (readonly) id trust; // @synthesize trust=_trust;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 trust:(struct __SecTrust *)arg2;
- (void)respondWithDecisionToAllowUntrustedConnection:(BOOL)arg1;

@end

