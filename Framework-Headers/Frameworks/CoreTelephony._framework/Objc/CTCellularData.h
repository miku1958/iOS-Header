//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CTCellularData : NSObject
{
    struct cellular_usage_policy_client_s *_cuPolicyClient;
    struct queue _cuPolicyClientQueue;
    unsigned long long _restrictedState;
    CDUnknownBlockType _cellularDataRestrictionDidUpdateNotifier;
}

@property (copy) CDUnknownBlockType cellularDataRestrictionDidUpdateNotifier; // @synthesize cellularDataRestrictionDidUpdateNotifier=_cellularDataRestrictionDidUpdateNotifier;
@property (readonly, nonatomic) unsigned long long restrictedState; // @synthesize restrictedState=_restrictedState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setCellularDataRestrictionStateFromPolicies:(void *)arg1;

@end

