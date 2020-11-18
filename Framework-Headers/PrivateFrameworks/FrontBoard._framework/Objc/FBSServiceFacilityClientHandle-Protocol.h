//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class BSProcessHandle, NSString, RBSProcessIdentity;
@protocol FBSServiceFacilityClientContext;

@protocol FBSServiceFacilityClientHandle <NSObject>

@property (strong, nonatomic) id<FBSServiceFacilityClientContext> context;
@property (readonly, copy, nonatomic) NSString *facilityID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

@end
