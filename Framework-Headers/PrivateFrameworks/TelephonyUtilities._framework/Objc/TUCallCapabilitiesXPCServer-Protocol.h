//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@protocol TUCallCapabilitiesXPCClient;

@protocol TUCallCapabilitiesXPCServer <TUCallCapabilitiesXPCServerActions>
- (oneway void)callCapabilitiesState:(void (^)(TUCallCapabilitiesState *))arg1;
- (void)registerClient:(id<TUCallCapabilitiesXPCClient>)arg1;
- (void)unregisterClient:(id<TUCallCapabilitiesXPCClient>)arg1;
@end

