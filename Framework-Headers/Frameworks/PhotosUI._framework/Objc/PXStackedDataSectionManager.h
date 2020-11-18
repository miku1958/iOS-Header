//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSectionManager.h>

#import <PhotosUICore/PXDataSectionManagerEnabling-Protocol.h>

@class NSString;

@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling>
{
    BOOL _enabled;
    BOOL _alwaysContainsObjects;
    id _additionalStorage;
}

@property (strong, nonatomic) id additionalStorage; // @synthesize additionalStorage=_additionalStorage;
@property (nonatomic) BOOL alwaysContainsObjects; // @synthesize alwaysContainsObjects=_alwaysContainsObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_updateDataSectionIfNecessary;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long *)arg2;
- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (BOOL)isDataSectionEmpty;

@end
