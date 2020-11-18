//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, UIImage, WRCannedRepliesStore;

@interface WRCannedRepliesViewController : PSListController
{
    WRCannedRepliesStore *_repliesStore;
    PSSpecifier *_addNewSpecifier;
    PSSpecifier *_smartRepliesSpecifier;
    UIImage *_accessoryImage;
    UIImage *_highlightedAccessoryImage;
    BOOL _supportedEnhancedEditing;
    unsigned long long _category;
}

@property (readonly, nonatomic) unsigned long long category; // @synthesize category=_category;

- (void).cxx_destruct;
- (void)_returnKeyPressed:(id)arg1;
- (void)addNewReply:(id)arg1;
- (id)cannedReplies;
- (id)cannedRepliesFromSpecifiers;
- (void)configureCellAccessoryImage:(id)arg1;
- (id)customReply:(id)arg1;
- (id)includeSmartReplies;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadRepliesStoreIfNeeded;
- (id)newCannedReplySpecifier;
- (unsigned long long)numberOfDefaultReplySpecifiers;
- (void)returnPressedAtEnd;
- (void)saveReplies;
- (void)setCustomReply:(id)arg1 specifier:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIncludeSmartReplies:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)updateEditDoneButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

