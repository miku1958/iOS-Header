//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainerID, NSSet;

__attribute__((visibility("hidden")))
@interface CKDContainerPrivacySettings : NSObject
{
    CKContainerID *_containerID;
    NSSet *_applicationBundleIDs;
    long long _discoverable;
}

@property (copy, nonatomic) NSSet *applicationBundleIDs; // @synthesize applicationBundleIDs=_applicationBundleIDs;
@property (copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
