//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSManagedObjectID, NSString, PLPhotoLibrary;

@protocol _PLThumbnailLoadingAsset <NSObject>
- (long long)cloudPlaceholderKind;
- (BOOL)complete;
- (unsigned long long)effectiveThumbnailIndex;
- (NSManagedObjectID *)objectID;
- (PLPhotoLibrary *)pl_photoLibrary;

@optional
- (struct CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (NSString *)uuid;
@end
