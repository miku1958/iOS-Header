//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSUUID;

@protocol HMDWACDevice

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isConfigured;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ssid;
@property (readonly, nonatomic) BOOL supportsAirPlay2;
@property (readonly, nonatomic) id underlyingDevice;

- (void)cancelConfigurationWithCompletionHandler:(void (^)(void))arg1;
- (void)startConfigurationWithCompletionHandler:(void (^)(NSError *))arg1;
@end

