//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, WFRemoteFileListView;
@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFFilePickerResultsViewController : UIViewController
{
    NSArray *_files;
    id<WFRemoteFileListViewDelegate> _delegate;
    WFRemoteFileListView *_fileListView;
}

@property (readonly, weak, nonatomic) id<WFRemoteFileListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView; // @synthesize fileListView=_fileListView;
@property (copy, nonatomic) NSArray *files; // @synthesize files=_files;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFileListDelegate:(id)arg1;
- (void)loadView;
- (void)updateContentInset;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

