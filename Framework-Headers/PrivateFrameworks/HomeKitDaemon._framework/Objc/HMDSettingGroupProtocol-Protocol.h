//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingBaseProtocol-Protocol.h>

@class NSArray, NSCoder;

@protocol HMDSettingGroupProtocol <HMDSettingBaseProtocol>

@property (readonly, copy) NSArray *groups;
@property (readonly, copy) NSArray *settings;

- (id)init;
- (id)initWithCoder:(NSCoder *)arg1;
@end
