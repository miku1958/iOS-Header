//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@protocol HMDSettingBaseProtocol <NSObject, NSSecureCoding>

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *parentIdentifier;

@end

