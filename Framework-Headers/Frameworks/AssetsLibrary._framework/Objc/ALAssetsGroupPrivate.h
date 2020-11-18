//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AssetsLibrary/ALAssetsLibraryAsset-Protocol.h>

@class ALAssetsFilter, ALAssetsLibrary, NSMutableDictionary, NSString, PLPhotoLibrary;
@protocol PLAlbumProtocol;

__attribute__((visibility("hidden")))
@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset>
{
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
    BOOL _isValid;
    BOOL _isCloudSharedGroup;
    BOOL _applyHyperionFilter;
    struct NSObject *_album;
    ALAssetsFilter *_assetsFilter;
    unsigned long long _groupType;
    NSMutableDictionary *_propertyValues;
    PLPhotoLibrary *_photoLibrary;
}

@property (strong, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property (strong, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
@property (nonatomic) BOOL applyHyperionFilter; // @synthesize applyHyperionFilter=_applyHyperionFilter;
@property (strong, nonatomic) ALAssetsFilter *assetsFilter; // @synthesize assetsFilter=_assetsFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCloudSharedGroup; // @synthesize isCloudSharedGroup=_isCloudSharedGroup;
@property (nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property (nonatomic) ALAssetsLibrary *library;
@property (strong, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property (readonly) Class superclass;

- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (int)albumFilter;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1 library:(id)arg2;
- (void)libraryDidChange;
- (void)populateAssets;
- (void)resetAssets;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)updateAlbumFiltering;
- (id)valueForProperty:(id)arg1;

@end

