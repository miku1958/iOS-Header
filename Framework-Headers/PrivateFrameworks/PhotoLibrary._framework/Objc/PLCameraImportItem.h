//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString, PLManagedAsset, UIImage;

@interface PLCameraImportItem : NSObject
{
    NSMutableArray *_sortedRepresentations;
    BOOL _metadataRequested;
    BOOL _shouldImport;
    int _thumbnailState;
    NSString *_identifier;
    NSString *_parentFolder;
    NSString *_basePath;
    NSString *_eventName;
    PLManagedAsset *_importedAsset;
    NSError *_importError;
}

@property (strong, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property (strong, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSError *importError; // @synthesize importError=_importError;
@property (strong, nonatomic) PLManagedAsset *importedAsset; // @synthesize importedAsset=_importedAsset;
@property (readonly, copy, nonatomic) NSString *parentFolder; // @synthesize parentFolder=_parentFolder;
@property (nonatomic) BOOL shouldImport; // @synthesize shouldImport=_shouldImport;
@property (readonly, strong, nonatomic) UIImage *thumbnail;
@property (nonatomic) int thumbnailState; // @synthesize thumbnailState=_thumbnailState;

- (void).cxx_destruct;
- (void)_addRepresentation:(id)arg1;
- (id)_fileExtensionOfFirstRepresentationPassingTest:(CDUnknownBlockType)arg1;
- (id)_firstRepresentationPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)_hasAnyRepresentationPassingTest:(CDUnknownBlockType)arg1;
- (id)_masterRepresentation;
- (void)_removeRepresentation:(id)arg1;
- (void)addRepresentationForCameraFile:(id)arg1;
- (id)audioExtension;
- (BOOL)canRequestMetadata;
- (BOOL)canRequestThumbnail;
- (void)clearMetadata;
- (void)clearThumbnail;
- (id)creationDate;
- (id)description;
- (id)fileExtensions;
- (unsigned long long)fileSize;
- (BOOL)hasAllMetadata;
- (id)imageExtension;
- (id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2;
- (BOOL)isAudio;
- (BOOL)isImage;
- (BOOL)isInLibraryForce:(BOOL)arg1;
- (BOOL)isLocked;
- (BOOL)isMovie;
- (BOOL)isOnDisk;
- (BOOL)isRaw;
- (BOOL)isStandaloneMovie;
- (BOOL)isStandalonePhoto;
- (void)markAsInLibrary;
- (id)masterPath;
- (id)metadataForRepresentationWithFileExtension:(id)arg1;
- (id)movieExtension;
- (id)otherExtensions;
- (id)rawExtension;
- (void)removeRepresentationForCameraFile:(id)arg1;
- (id)representationForCameraFile:(id)arg1;
- (id)representations;
- (id)representationsSortedForImport;
- (void)requestMetadata;
- (void)requestThumbnail;

@end

