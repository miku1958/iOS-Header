//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKEnumeratableFaceCollection-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSUUID, NTKFace;

@interface NTKFaceCollection : NSObject <NTKFaceObserver, NTKEnumeratableFaceCollection>
{
    NSString *_logIdentifier;
    NSUUID *_selectedUUID;
    NSMutableArray *_orderedUUIDs;
    NSMutableDictionary *_facesByUUID;
    NSMapTable *_UUIDsByFace;
    NSHashTable *_observers;
    NSString *_collectionIdentifier;
    NSUUID *_deviceUUID;
    NSString *_debugName;
}

@property (readonly, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property (readonly, nonatomic, getter=hasLoaded) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NTKFace *selectedFace;
@property (readonly, nonatomic) unsigned long long selectedFaceIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUIDsByFace;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 suppressingCallbackToObserver:(id)arg4;
- (id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)arg1;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)_notifyAddedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)_notifyReorderedFacesOmittingObserver:(id)arg1;
- (void)_notifySelectedFaceOmittingObserver:(id)arg1;
- (void)_removeFaceForUUID:(id)arg1;
- (void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_selectFaceUUID:(id)arg1 notify:(BOOL)arg2;
- (void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3;
- (void)_setSelectedUUID:(id)arg1 notify:(BOOL)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)_updateLogIdentifier;
- (void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(BOOL)arg2;
- (void)_upgradeFace:(id)arg1 forUUID:(id)arg2;
- (void)addFace:(id)arg1 atIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (BOOL)containsFace:(id)arg1;
- (void)enumerateFaceNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFacesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFacesWithIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (id)faceForUUID:(id)arg1;
- (id)facesByUUID;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (id)logIdentifier;
- (void)moveFace:(id)arg1 toIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (unsigned long long)numberOfFaces;
- (id)observers;
- (id)orderedUUIDs;
- (void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeFaceAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)reset;
- (id)selectedUUID;
- (void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)setSelectedFaceIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
- (id)uuidForFace:(id)arg1;

@end

