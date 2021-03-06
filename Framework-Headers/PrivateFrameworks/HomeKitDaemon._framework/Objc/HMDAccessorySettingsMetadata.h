//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDAccessorySettingGroupMetadata, NSArray, NSString;

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject>
{
    HMDAccessorySettingGroupMetadata *_rootGroup;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMDAccessorySettingGroupMetadata *rootGroup; // @synthesize rootGroup=_rootGroup;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;

@end

