//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SOS/SOSClientProtocol-Protocol.h>

@protocol SOSInternalClientProtocol <SOSClientProtocol>
- (void)dismissClientSOSWithCompletion:(void (^)(BOOL))arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
@end

