//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HelpKit/HLPHelpLoadingViewDelegate-Protocol.h>
#import <HelpKit/HLPHelpTopicViewControllerDelegate-Protocol.h>
#import <HelpKit/UIGestureRecognizerDelegate-Protocol.h>
#import <HelpKit/UIWebViewDelegate-Protocol.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpTopicHistoryItem, HLPHelpUsageController, HLPURLSession, NSArray, NSCache, NSMutableArray, NSString, NSURL, UIBarButtonItem, UITapGestureRecognizer, UIWebView;
@protocol HLPHelpTopicViewControllerDelegate;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, UIWebViewDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate>
{
    id _interactivePopGestureRecognizerDelegate;
    BOOL _canShowTOC;
    BOOL _webViewLoaded;
    BOOL _RTL;
    HLPURLSession *_URLSession;
    HLPHelpBookController *_helpBookController;
    NSCache *_topicCache;
    NSMutableArray *_topicHistory;
    UIBarButtonItem *_tocBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _displayHelpTopicsOnly;
    BOOL _hideDoneButton;
    BOOL _showTopicNameAsTitle;
    id<HLPHelpTopicViewControllerDelegate> _delegate;
    NSURL *_helpBookURL;
    UIWebView *_webView;
    HLPHelpTopicHistoryItem *_currentTopicHistoryItem;
    HLPHelpLoadingView *_loadingView;
    HLPHelpUsageController *_usageController;
    NSArray *_searchTerms;
}

@property (strong, nonatomic) HLPHelpTopicHistoryItem *currentTopicHistoryItem; // @synthesize currentTopicHistoryItem=_currentTopicHistoryItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HLPHelpTopicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayHelpTopicsOnly; // @synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property (strong, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property (nonatomic) BOOL hideDoneButton; // @synthesize hideDoneButton=_hideDoneButton;
@property (strong, nonatomic) HLPHelpLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property (strong, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property (nonatomic) BOOL showTopicNameAsTitle; // @synthesize showTopicNameAsTitle=_showTopicNameAsTitle;
@property (readonly) Class superclass;
@property (strong, nonatomic) HLPHelpUsageController *usageController; // @synthesize usageController=_usageController;
@property (strong, nonatomic) UIWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (void)backButtonTapped;
- (void)dealloc;
- (void)dismiss;
- (void)dismissWelcomeHelpTopic;
- (void)forwardButtonTapped;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (id)init;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4;
- (void)reloadCurrentTopic;
- (void)saveCurrentTopicItem;
- (void)showHelpBookInfo:(id)arg1;
- (void)showTableOfContent;
- (void)showWebViewDelay;
- (void)updateDoneButton;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;
- (void)updateNavigationButtons;
- (void)updateScrollPositionForCurrentTopicItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end

