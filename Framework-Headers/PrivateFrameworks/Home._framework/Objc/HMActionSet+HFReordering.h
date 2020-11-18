//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMActionSet.h>

#import <Home/HFReorderableHomeKitObject-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMActionSet (HFReordering) <HFReorderableHomeKitObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property (readonly, copy, nonatomic) NSString *hf_displayName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (id)hf_updateDateAdded:(id)arg1;
@end
