//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosExtras/VideosExtrasTemplateViewController.h>

#import <VideosExtras/UITableViewDataSource-Protocol.h>
#import <VideosExtras/UITableViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSString, UIImageView, UITableView, VideosExtrasViewElementViewController;

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    BOOL _tableViewLeft;
    UIImageView *_vignetteView;
    BOOL _relatedContentEmbedded;
    NSArray *_masterViewConstraints;
    NSArray *_detailViewConstraints;
    NSMapTable *_relatedContentViewControllerMap;
    NSIndexPath *_autohighlightIndexPath;
    VideosExtrasViewElementViewController *_relatedContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property (readonly) Class superclass;

+ (id)relatedContentViewControllerForElement:(id)arg1;
- (void).cxx_destruct;
- (void)_addConstraintsToTableView:(id)arg1;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_configureVignette:(BOOL)arg1;
- (void)_embedRelatedContentViewController;
- (void)_prepareLayout;
- (void)_pushRelatedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setDetailContraints;
- (void)_setNavigationConstraints;
- (void)_setRelatedContentEmbedded:(BOOL)arg1;
- (void)_unembedRelatedContent;
- (void)_updateForTemplate:(id)arg1;
- (void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (BOOL)showsPlaceholder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)templateElement;
- (void)viewDidLoad;

@end
