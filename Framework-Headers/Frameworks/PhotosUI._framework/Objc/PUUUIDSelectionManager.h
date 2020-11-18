//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUMutableUUIDSelectionManager-Protocol.h>
#import <PhotosUI/_PUOneUpSelectionIndicatorCompatibleManager-Protocol.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PUUUIDSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PUMutableUUIDSelectionManager>
{
    NSMutableSet *__mutableSelectedUUIDs;
}

@property (readonly, copy, nonatomic) NSMutableSet *_mutableSelectedUUIDs; // @synthesize _mutableSelectedUUIDs=__mutableSelectedUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSSet *selectedUUIDs;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSelectedUUID:(id)arg1;
- (void)deselectAllUUIDs;
- (id)init;
- (id)initWithSelectedUUIDs:(id)arg1;
- (BOOL)isSelectedUUID:(id)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (BOOL)pu_isAssetReferenceSelected:(id)arg1;
- (void)pu_registerSelectionIndicatorObserver:(id)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(id)arg1;
- (void)removeSelectedUUID:(id)arg1;
- (void)setSelectedUUIDs:(id)arg1;

@end

