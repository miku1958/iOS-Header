//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetImportStatusManager-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface PXPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager>
{
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
    BOOL _supportsStateSimulation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsStateSimulation; // @synthesize supportsStateSimulation=_supportsStateSimulation;

- (void).cxx_destruct;
- (void)_notifySimulationObserversForAssetReference:(id)arg1;
- (long long)_simulatedStateForAsset:(id)arg1;
- (void)addAssetImportStatusObserver:(id)arg1;
- (void)beginSimulatedImportForAssetReference:(id)arg1;
- (void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(BOOL)arg2;
- (long long)importStateForAsset:(id)arg1;
- (id)init;
- (id)initAllowingSimulation:(BOOL)arg1;
- (void)removeAssetImportStatusObserver:(id)arg1;

@end

