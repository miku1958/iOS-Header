//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction
{
}

@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *networkPassword;
@property (readonly, copy, nonatomic) NSString *networkSSID;

- (id)init;
- (id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3;

@end

