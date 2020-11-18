//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HelpKit/HLPHelpLoadingViewDelegate-Protocol.h>
#import <HelpKit/HLPHelpTableOfContentViewControllerDelegate-Protocol.h>
#import <HelpKit/HLPHelpTopicViewControllerDelegate-Protocol.h>
#import <HelpKit/HLPReachabilityManagerDelegate-Protocol.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocaleController, HLPHelpTableOfContentViewController, HLPHelpTopicViewController, HLPHelpUsageController, HLPReachabilityManager, NSArray, NSMutableDictionary, NSString, NSURL, UIBarButtonItem;
@protocol HLPHelpViewControllerDelegate;

@interface HLPHelpViewController : UIViewController <HLPHelpTableOfContentViewControllerDelegate, HLPHelpTopicViewControllerDelegate, HLPReachabilityManagerDelegate, HLPHelpLoadingViewDelegate>
{
    BOOL _showingHelpTopic;
    NSString *_helpBookBasePath;
    NSString *_helpbookVersion;
    NSURL *_helpBookURL;
    NSMutableDictionary *_localHelpBookNameIDMap;
    UIBarButtonItem *_doneBarButtonItem;
    HLPHelpUsageController *_usageController;
    HLPHelpLocaleController *_localeListController;
    HLPHelpBookController *_helpBookController;
    HLPHelpTopicViewController *_topicViewController;
    BOOL _hideDoneButton;
    BOOL _displayHelpTopicsOnly;
    BOOL _showTopicNameAsTitle;
    BOOL _showTopicViewOnLoad;
    id<HLPHelpViewControllerDelegate> _delegate;
    NSString *_identifier;
    NSString *_version;
    NSString *_subpath;
    NSURL *_localHelpBookFileURL;
    NSString *_selectedHelpTopicID;
    NSArray *_preferredLanguagesOverride;
    NSString *_selectedHelpTopicName;
    HLPReachabilityManager *_reachabilityManager;
    HLPHelpLoadingView *_loadingView;
    HLPHelpTableOfContentViewController *_tableOfContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HLPHelpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayHelpTopicsOnly; // @synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) HLPHelpLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property (copy, nonatomic) NSURL *localHelpBookFileURL; // @synthesize localHelpBookFileURL=_localHelpBookFileURL;
@property (copy, nonatomic) NSArray *preferredLanguagesOverride; // @synthesize preferredLanguagesOverride=_preferredLanguagesOverride;
@property (strong, nonatomic) HLPReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property (copy, nonatomic) NSString *selectedHelpTopicID; // @synthesize selectedHelpTopicID=_selectedHelpTopicID;
@property (copy, nonatomic) NSString *selectedHelpTopicName; // @synthesize selectedHelpTopicName=_selectedHelpTopicName;
@property (nonatomic) BOOL showTopicNameAsTitle; // @synthesize showTopicNameAsTitle=_showTopicNameAsTitle;
@property (nonatomic) BOOL showTopicViewOnLoad; // @synthesize showTopicViewOnLoad=_showTopicViewOnLoad;
@property (copy, nonatomic) NSString *subpath; // @synthesize subpath=_subpath;
@property (readonly) Class superclass;
@property (strong, nonatomic) HLPHelpTableOfContentViewController *tableOfContentViewController; // @synthesize tableOfContentViewController=_tableOfContentViewController;
@property (copy, nonatomic) NSString *version; // @synthesize version=_version;

+ (id)helpViewController;
+ (id)helpViewControllerWithIdentifier:(id)arg1 version:(id)arg2;
+ (id)helpViewControllerWithLocalHelpBookFileURL:(id)arg1;
+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3;
+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3 subpath:(id)arg4;
- (void).cxx_destruct;
- (id)currentHelpTopicItemForTableOfContentViewController:(id)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
- (id)init;
- (void)loadHelpBook;
- (void)popWelcomeTopicView;
- (void)reachabilityManagerConnectionStatusChanged:(id)arg1 connected:(BOOL)arg2;
- (void)setupTableContentViewController;
- (void)showHelpBookInfo:(id)arg1;
- (void)showHelpTopicItem:(id)arg1 anchor:(id)arg2 animate:(BOOL)arg3;
- (void)showMessageForError:(id)arg1;
- (void)showTopicView;
- (void)tableOfContentViewController:(id)arg1 showHelpTopicItem:(id)arg2;
- (void)tableOfContentViewControllerShowHelpBookInfo:(id)arg1;
- (id)topicIDForTopicName:(id)arg1 locale:(id)arg2;
- (void)updateDoneButton;
- (void)updateTOCButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

