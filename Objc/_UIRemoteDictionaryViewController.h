//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableDictionary, _UIDictionaryManager;

__attribute__((visibility("hidden")))
@interface _UIRemoteDictionaryViewController : UITableViewController
{
    NSArray *_availableDictionaries;
    _UIDictionaryManager *_dictionaryAssetManager;
    NSMutableDictionary *_downloadingAssets;
}

@property (strong, nonatomic) _UIDictionaryManager *dictionaryAssetManager; // @synthesize dictionaryAssetManager=_dictionaryAssetManager;
@property (strong, nonatomic) NSMutableDictionary *downloadingAssets; // @synthesize downloadingAssets=_downloadingAssets;

- (void).cxx_destruct;
- (id)_cloudBackgroundImage;
- (id)_downloadArrowImage;
- (id)_downloadButton;
- (id)_downloadImageWithTintColor:(id)arg1;
- (void)_handleDownloadButton:(id)arg1;
- (void)_startDownloadForDictionary:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end

