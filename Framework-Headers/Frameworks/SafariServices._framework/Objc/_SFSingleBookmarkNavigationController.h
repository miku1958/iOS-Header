//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SafariServices/_SFBookmarkInfoViewControllerDelegate-Protocol.h>

@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;
@protocol _SFSingleBookmarkNavigationControllerDelegate;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate>
{
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    BOOL _delegateNotifiedOfResult;
    id<_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;
}

@property (weak, nonatomic) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate; // @synthesize bookmarkNavDelegate=_bookmarkNavDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newBookmarkInfoViewControllerWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4 willBeDisplayedModally:(BOOL)arg5;
- (void).cxx_destruct;
- (id)_initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4;
- (void)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (id)initForAddingToFavoritesInCollection:(id)arg1;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2;
- (id)initWithCollection:(id)arg1;
- (BOOL)prepareForPresentationForAddingBookmark:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end

