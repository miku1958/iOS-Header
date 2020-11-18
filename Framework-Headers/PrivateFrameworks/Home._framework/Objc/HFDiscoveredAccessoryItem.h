//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HFDiscoveredAccessory, NSString;
@protocol HFHomeKitObject;

@interface HFDiscoveredAccessoryItem : HFItem <HFHomeKitItemProtocol>
{
    HFDiscoveredAccessory *_discoveredAccessory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessory; // @synthesize discoveredAccessory=_discoveredAccessory;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) Class superclass;

+ (id)_iconDescriptorForAccessoryCategory:(id)arg1;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithDiscoveredAccessory:(id)arg1;

@end

