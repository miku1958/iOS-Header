//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/MPRequestResponseControllerDelegate-Protocol.h>
#import <MediaControls/UITableViewDataSource-Protocol.h>
#import <MediaControls/UITableViewDelegate-Protocol.h>

@class MPRequestResponseController, NSArray, NSString, UITableView, UIView;
@protocol MediaControlsLanguageOptionsViewControllerDelegate;

@interface MediaControlsLanguageOptionsViewController : UIViewController <MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_languageOptionGroups;
    id<MediaControlsLanguageOptionsViewControllerDelegate> _delegate;
    MPRequestResponseController *_requestResponseController;
    UIView *_materialView;
    UITableView *_tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MediaControlsLanguageOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *languageOptionGroups; // @synthesize languageOptionGroups=_languageOptionGroups;
@property (strong, nonatomic) UIView *materialView; // @synthesize materialView=_materialView;
@property (strong, nonatomic) MPRequestResponseController *requestResponseController; // @synthesize requestResponseController=_requestResponseController;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (id)initWithRouteUID:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

