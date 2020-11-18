//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingGroupModel.h>

#import <HomeKitDaemon/HMDConflictResolutionModel-Protocol.h>

@class NSUUID;

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>
{
}

@property (copy, nonatomic) NSUUID *conflictResolutionToken; // @dynamic conflictResolutionToken;

+ (id)hmbProperties;
- (id)copyWithNewParentModelID:(id)arg1;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;
- (id)nameForKeyPath;

@end
