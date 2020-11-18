//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PLPairingProcessor : NSObject
{
    NSPredicate *_locatedInUsersPhotoLibrary;
}

@property (strong, nonatomic) NSPredicate *locatedInUsersPhotoLibrary; // @synthesize locatedInUsersPhotoLibrary=_locatedInUsersPhotoLibrary;

- (void).cxx_destruct;
- (BOOL)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)_copyResourceOfType:(unsigned int)arg1 onAsset:(id)arg2 toType:(unsigned int)arg3 onAsset:(id)arg4 error:(id *)arg5;
- (void)_deleteResourceOfType:(unsigned int)arg1 forAsset:(id)arg2 verifyInserted:(BOOL)arg3 deleteFile:(BOOL)arg4;
- (id)combinePair:(id)arg1 error:(id *)arg2;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)groupIDForAsset:(id)arg1;
- (id)init;
- (BOOL)processPairingForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)setDeferredProcessingIfNescessaryForAsset:(id)arg1;
- (BOOL)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2;

@end
