//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@protocol SBFUserAuthenticationModel;

@protocol SBFUserAuthenticationModelDelegate <NSObject>
- (void)deviceLockModelRequestsDeviceWipe:(id<SBFUserAuthenticationModel>)arg1;
- (void)deviceLockStateMayHaveChangedForModel:(id<SBFUserAuthenticationModel>)arg1;
@end

