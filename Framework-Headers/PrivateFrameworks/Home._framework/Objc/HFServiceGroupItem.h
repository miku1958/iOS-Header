//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMHome, HMServiceGroup, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>
{
    id<HFCharacteristicValueSource> _valueSource;
    HMServiceGroup *_serviceGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) HMServiceGroup *serviceGroup; // @synthesize serviceGroup=_serviceGroup;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;
+ (BOOL)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (BOOL)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;
- (void).cxx_destruct;
- (id)_aggregatedValueSource;
- (double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_buildControlItemsForServiceItems:(id)arg1;
- (id)_buildServiceItems;
- (long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_sortDescriptorsForServiceItems;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)accessories;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)allControlItems;
- (BOOL)containsActions;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)primaryStateControlItem;
- (id)serviceLikeBuilderInHome:(id)arg1;

@end

