//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString;

@interface TRINamespaceInfo : TRIPBMessage
{
}

@property (strong, nonatomic) NSMutableArray *compatibilityVersionArray; // @dynamic compatibilityVersionArray;
@property (readonly, nonatomic) unsigned long long compatibilityVersionArray_Count; // @dynamic compatibilityVersionArray_Count;
@property (nonatomic) int deploymentEnvironment; // @dynamic deploymentEnvironment;
@property (nonatomic) BOOL hasDeploymentEnvironment; // @dynamic hasDeploymentEnvironment;
@property (nonatomic) BOOL hasIsServerCoordinated; // @dynamic hasIsServerCoordinated;
@property (nonatomic) BOOL hasNamespaceId; // @dynamic hasNamespaceId;
@property (nonatomic) BOOL hasProjectOwner; // @dynamic hasProjectOwner;
@property (nonatomic) BOOL isServerCoordinated; // @dynamic isServerCoordinated;
@property (copy, nonatomic) NSString *namespaceId; // @dynamic namespaceId;
@property (nonatomic) int projectOwner; // @dynamic projectOwner;

+ (id)descriptor;

@end
