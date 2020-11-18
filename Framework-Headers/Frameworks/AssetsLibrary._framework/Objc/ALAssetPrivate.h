//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibrary/ALAssetsLibraryAsset-Protocol.h>

@class ALAssetsLibrary, NSString, PLManagedAsset, PLPhotoLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary *_library;
    BOOL _isValid;
    PLManagedAsset *_photo;
    PLPhotoLibrary *_photoLibrary;
}

@property (strong, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property (nonatomic) ALAssetsLibrary *library;
@property (strong, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (void)libraryDidChange;

@end

