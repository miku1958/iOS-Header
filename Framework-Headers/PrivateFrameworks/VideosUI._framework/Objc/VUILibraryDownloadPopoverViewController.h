//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, VUILibraryListItemView;
@protocol VUILibraryDownloadPopoverViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadPopoverViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id<VUILibraryDownloadPopoverViewControllerDelegate> _delegate;
    VUILibraryListItemView *_listView;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUILibraryDownloadPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUILibraryListItemView *listView; // @synthesize listView=_listView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)loadView;
- (void)popoverPressed:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

