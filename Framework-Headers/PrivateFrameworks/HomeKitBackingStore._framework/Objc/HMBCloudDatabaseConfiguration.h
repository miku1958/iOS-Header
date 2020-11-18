//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@class CKContainerID, CKOperationConfiguration, HMFScheduler, NSString;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _manateeContainer;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKOperationConfiguration *_defaultOperationConfiguration;
    HMFScheduler *_apsRegistrationScheduler;
}

@property (strong, nonatomic) HMFScheduler *apsRegistrationScheduler; // @synthesize apsRegistrationScheduler=_apsRegistrationScheduler;
@property (readonly, copy) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration; // @synthesize defaultOperationConfiguration=_defaultOperationConfiguration;
@property (getter=isManateeContainer) BOOL manateeContainer; // @synthesize manateeContainer=_manateeContainer;
@property (copy) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
