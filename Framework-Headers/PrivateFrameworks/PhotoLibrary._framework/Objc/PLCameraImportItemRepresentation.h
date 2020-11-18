//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ICCameraFile, NSDictionary, NSString, UIImage;

@interface PLCameraImportItemRepresentation : NSObject
{
    BOOL _inLibrary;
    BOOL _canRequestMetadata;
    BOOL _canRequestThumbnail;
    BOOL _isRender;
    ICCameraFile *_cameraFile;
    NSDictionary *_metadata;
    NSString *_path;
    NSString *_name;
    NSString *_fileExtension;
    UIImage *_thumbnail;
}

@property (readonly, nonatomic) ICCameraFile *cameraFile; // @synthesize cameraFile=_cameraFile;
@property (nonatomic) BOOL canRequestMetadata; // @synthesize canRequestMetadata=_canRequestMetadata;
@property (nonatomic) BOOL canRequestThumbnail; // @synthesize canRequestThumbnail=_canRequestThumbnail;
@property (readonly, copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isRaw;
@property (readonly, nonatomic) BOOL isRender; // @synthesize isRender=_isRender;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;
@property (readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;

+ (CDUnknownBlockType)_fileTypeComparator;
+ (CDUnknownBlockType)_originalFirstComparator;
+ (CDUnknownBlockType)_renderFirstComparator;
+ (CDUnknownBlockType)importComparator;
+ (CDUnknownBlockType)itemComparator;
- (void).cxx_destruct;
- (BOOL)_checkIfIsInLibrary;
- (long long)_fileTypeSortOrder;
- (BOOL)_utiConformsTo:(struct __CFString *)arg1;
- (void)clearThumbnail;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCameraFile:(id)arg1;
- (BOOL)isInLibraryForce:(BOOL)arg1;
- (void)markAsInDatabase;
- (void)requestThumbnail;
- (void)setThumbnailWithImageRef:(struct CGImage *)arg1;

@end

