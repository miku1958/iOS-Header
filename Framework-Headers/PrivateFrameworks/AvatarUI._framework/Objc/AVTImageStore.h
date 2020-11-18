//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTImageCache-Protocol.h>

@class NSFileManager, NSString, NSURL;
@protocol AVTImageEncoder, AVTUILogger, OS_dispatch_queue;

@interface AVTImageStore : NSObject <AVTImageCache>
{
    BOOL _validateImages;
    NSURL *_location;
    NSFileManager *_fileManager;
    id<AVTImageEncoder> _imageEncoder;
    NSObject<OS_dispatch_queue> *_stateLock;
    id<AVTUILogger> _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<AVTImageEncoder> imageEncoder; // @synthesize imageEncoder=_imageEncoder;
@property (readonly, copy, nonatomic) NSURL *location; // @synthesize location=_location;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL validateImages; // @synthesize validateImages=_validateImages;

+ (void)clearContentAtLocation:(id)arg1 logger:(id)arg2;
+ (id)resourceURLForItem:(id)arg1 scope:(id)arg2 baseURL:(id)arg3 encoder:(id)arg4;
- (void).cxx_destruct;
- (id)_imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (BOOL)applyFileProtectionForResourceAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)copyImagesForPersistentIdentifierPrefix:(id)arg1 toPersistentIdentifierPrefix:(id)arg2 error:(id *)arg3;
- (BOOL)createDirectoryIfNeeded:(id *)arg1;
- (BOOL)deleteImagesForItemsWithPersistentIdentifierPrefix:(id)arg1 error:(id *)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)imageForItem:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (id)initWithEnvironment:(id)arg1 validateImages:(BOOL)arg2 location:(id)arg3;
- (id)initWithEnvironment:(id)arg1 validateImages:(BOOL)arg2 location:(id)arg3 encoder:(id)arg4;
- (void)performStateWork:(CDUnknownBlockType)arg1;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)resourceURLForItem:(id)arg1 scope:(id)arg2;
- (BOOL)saveImage:(id)arg1 forItem:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (BOOL)saveImage:(id)arg1 withImageData:(id)arg2 forItem:(id)arg3 scope:(id)arg4 error:(id *)arg5;

@end
