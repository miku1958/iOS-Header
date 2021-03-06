//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSortDescriptor, NSString, PHAssetCollection, PHCollectionList, PHImportSource, PHPhotoLibrary;

@interface PHImportOptions : NSObject
{
    struct options_bits _options_bits;
    PHAssetCollection *_destinationAlbum;
    PHCollectionList *_destinationFolder;
    NSSortDescriptor *_sortDescriptor;
    NSMutableDictionary *_userIptcMetadata;
    NSString *_personId;
    PHImportSource *_importSource;
    PHPhotoLibrary *_library;
}

@property (nonatomic) BOOL allowDuplicates;
@property (nonatomic) BOOL deleteAfterImport;
@property (strong, nonatomic) PHAssetCollection *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
@property (strong, nonatomic) PHCollectionList *destinationFolder; // @synthesize destinationFolder=_destinationFolder;
@property (nonatomic) unsigned char fileOperation;
@property (nonatomic) BOOL hideProgress;
@property (strong, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
@property (strong, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property (nonatomic) unsigned char metadataAddMode;
@property (strong, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property (nonatomic) BOOL preserveFolderStructure;
@property (nonatomic) BOOL shouldImportAsReferenced;
@property (nonatomic) BOOL skipAlertWhenFinished;
@property (nonatomic) BOOL skipDiskSpaceCheck;
@property (strong, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property (strong, nonatomic) NSMutableDictionary *userIptcMetadata; // @synthesize userIptcMetadata=_userIptcMetadata;

- (void).cxx_destruct;
- (BOOL)allowUnsupported;
- (short)importedBy;
- (id)init;
- (BOOL)omitImportComplete;
- (void)setAllowUnsupported:(BOOL)arg1;
- (void)setImportedBy:(short)arg1;
- (void)setOmitImportComplete:(BOOL)arg1;

@end

