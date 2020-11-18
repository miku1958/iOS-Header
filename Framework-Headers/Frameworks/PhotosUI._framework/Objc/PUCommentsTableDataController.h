//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PLCloudCommentsChangeObserver-Protocol.h>
#import <PhotosUI/PUPhotoCommentEntryViewDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSCache, NSString, PHAsset, PLCloudSharedComment, PLManagedAsset, PUPhotoCommentEntryView, UITableView;
@protocol PUCommentsTableDataControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsTableDataController : NSObject <PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSCache *_commentsHeightCache;
    PUPhotoCommentEntryView *_entryView;
    BOOL _editing;
    BOOL _shouldUseCompactCommentSeparators;
    UITableView *_tableView;
    PHAsset *_asset;
    id<PUCommentsTableDataControllerDelegate> _delegate;
    PLManagedAsset *_managedAsset;
    PLCloudSharedComment *_justInsertedComment;
}

@property (strong, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUCommentsTableDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PLCloudSharedComment *justInsertedComment; // @synthesize justInsertedComment=_justInsertedComment;
@property (strong, nonatomic) PLManagedAsset *managedAsset; // @synthesize managedAsset=_managedAsset;
@property (readonly, nonatomic) double minimumHeight;
@property (nonatomic) BOOL shouldUseCompactCommentSeparators; // @synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (long long)_assetOwnerCommentSection;
- (BOOL)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id *)arg2;
- (id)_commentText;
- (id)_currentEntryView;
- (void)_fontCacheDidChange:(id)arg1;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (BOOL)_isAssetOwnerSectionVisible;
- (BOOL)_isEditingAllowed;
- (long long)_postCommentSection;
- (void)_postCommentWithText:(id)arg1;
- (void)_scrollToComment:(id)arg1 animated:(BOOL)arg2;
- (long long)_smileCommentSection;
- (long long)_textCommentSection;
- (void)_updateFirstResponder;
- (void)_validateAndPostComment:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (BOOL)photoCommentEntryViewShouldEndEditing:(id)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

