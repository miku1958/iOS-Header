//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PLPairing : NSObject
{
    NSPredicate *_locatedInUsersPhotoLibrary;
    struct os_unfair_lock_s _lock;
}

+ (id)getMetadataForAsset:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)processPairingForEntireLibraryInContext:(id)arg1 error:(id *)arg2;
- (BOOL)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 deferredProcessingNeeded:(BOOL *)arg3 error:(id *)arg4;

@end

