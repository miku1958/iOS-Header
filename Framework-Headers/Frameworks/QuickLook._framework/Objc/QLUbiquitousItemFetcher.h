//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemFetcher.h>

@class NSFileCoordinator, NSMutableArray, NSNumber, NSURL, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLUbiquitousItemFetcher : QLItemFetcher
{
    QLURLHandler *_urlHandler;
    NSFileCoordinator *_fileCoordinator;
    NSMutableArray *_updateBlocks;
    id _progressSubscriber;
    NSNumber *_sizeTotalUnitCount;
    QLURLHandler *_zipPackageUrlHandler;
    BOOL _shouldZipPackageIfNeeded;
}

@property (readonly, nonatomic) NSURL *fileURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_createURLForPackageIfNeeded;
- (void)_deleteTempraryZipPackageFileIfNeeded;
- (void)_removeUpdateBlockIfNeeded:(CDUnknownBlockType)arg1;
- (BOOL)canBeCanceled;
- (void)cancelFetch;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)fetchedContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2;
- (id)initWithZippingPackageIfNeeded:(BOOL)arg1;
- (BOOL)isLongFetchOperation;
- (id)itemSize;
- (id)newItemProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)shareableItem;
- (void)subscribeToPreviewItemProgress;

@end

