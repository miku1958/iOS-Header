//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HMDAuthServerDelegate;

@interface HMDAuthServer : HMFObject
{
    id<HMDAuthServerDelegate> _delegate;
}

@property (readonly, weak) id<HMDAuthServerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)getPPIDInfo:(id)arg1 model:(id)arg2 cert:(id)arg3 context:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)sendActivationConfirmation:(id)arg1 uuid:(id)arg2 context:(id)arg3;
- (void)sendActivationRequest:(id)arg1 uuid:(id)arg2 context:(id)arg3;
- (void)sendPPIDInfoRequest:(id)arg1 model:(id)arg2 token:(id)arg3 authFeatures:(unsigned long long)arg4 uuid:(id)arg5 context:(id)arg6;

@end

