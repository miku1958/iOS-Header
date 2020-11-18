//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFCharacteristicWriteActionBuilderFactory-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMService, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating>
{
    id<HFCharacteristicValueSource> _valueSource;
    HMService *_service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

+ (id)_serviceTypeToServiceItemClassMap;
+ (Class)itemClassForService:(id)arg1;
+ (id)serviceItemForService:(id)arg1 valueSource:(id)arg2;
- (void).cxx_destruct;
- (id)_allRepresentedCharacteristics;
- (id)_allRepresentedServices;
- (id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)allControlItems;
- (BOOL)containsActionableCharacteristics;
- (id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)controlItemValueSourceForPrimaryService;
- (id)controlItemValueSourceForServices:(id)arg1;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createControlItems;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)incrementalStateControlItem;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2;
- (id)init;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2;
- (id)primaryStateControlItem;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;

@end

