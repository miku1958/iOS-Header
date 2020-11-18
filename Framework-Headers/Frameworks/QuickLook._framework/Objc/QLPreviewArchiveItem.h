//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/QLPreviewUIItem-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSOperation, NSOperationQueue, NSString, NSURL, QLPreviewThumbnailGenerator, UIDocumentInteractionController, UIImage;

__attribute__((visibility("hidden")))
@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem>
{
    UIDocumentInteractionController *_archiveController;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
    NSURL *_unarchivedURL;
    NSOperation *_unarchiveOperation;
    NSOperationQueue *_unarchiveOperationQueue;
    NSMutableArray *_completionBlocks;
    NSError *_unarchivingError;
    NSString *_path;
    long long _previewItemIndex;
    long long _UIItemIndex;
    long long _level;
    NSURL *_rootUnzippingURL;
    NSArray *_subItems;
}

@property long long UIItemIndex; // @synthesize UIItemIndex=_UIItemIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIImage *icon;
@property (readonly) BOOL isFolder;
@property long long level; // @synthesize level=_level;
@property (strong) NSString *path; // @synthesize path=_path;
@property long long previewItemIndex; // @synthesize previewItemIndex=_previewItemIndex;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (strong) NSURL *rootUnzippingURL; // @synthesize rootUnzippingURL=_rootUnzippingURL;
@property (copy) NSArray *subItems; // @synthesize subItems=_subItems;
@property (readonly) Class superclass;
@property (readonly) BOOL unarchived;

- (void).cxx_destruct;
- (void)cancelIconUpdate;
- (void)cleanup;
- (id)initWithArchiveController:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1;
- (BOOL)isPromisedItem;
- (void)unarchiveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)unarchivingError;
- (void)updateIconWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
