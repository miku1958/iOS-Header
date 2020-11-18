//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RemoteUI/UIWebViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, RUIBarButtonItem, RUIElement, RUIObjectModel, RUIPasscodeView, RUISpinnerView, RUIStyle, RUITableView, RUIWebView, UIBarButtonItem, UILabel, UIToolbar, UIView;
@protocol RUITopLevelPageElement;

@interface RUIPage : UIViewController <UIWebViewDelegate>
{
    NSString *_pageID;
    UIView *_containerView;
    RUITableView *_tableViewOM;
    RUIWebView *_webViewOM;
    RUIPasscodeView *_passcodeViewOM;
    RUISpinnerView *_spinnerViewOM;
    NSString *_validationFunction;
    BOOL _loading;
    NSString *_navTitle;
    NSString *_loadingTitle;
    BOOL _hidesBackButton;
    UIToolbar *_toolbar;
    UIBarButtonItem *_leftToolbarItem;
    UIBarButtonItem *_rightToolbarItem;
    UIBarButtonItem *_middleFlexSpace;
    UIBarButtonItem *_leftFlexSpace;
    RUIPage *_parentPage;
    NSMutableArray *_childPages;
    NSMutableArray *_didAppearCallbacks;
    BOOL _showsTitlesAsHeaderViews;
    RUIElement<RUITopLevelPageElement> *_primaryElement;
    RUIStyle *_style;
    NSString *_backButtonTitle;
    long long _loadingIndicatorStyle;
    RUIBarButtonItem *_rightNavigationBarButtonItem;
    RUIBarButtonItem *_leftNavigationBarButtonItem;
    RUIBarButtonItem *_rightToolbarButtonItem;
    RUIBarButtonItem *_leftToolbarButtonItem;
    RUIBarButtonItem *_middleToolbarButtonItem;
    UIBarButtonItem *_middleToolbarItem;
    RUIObjectModel *_objectModel;
    double _customMargin;
    struct UIEdgeInsets _titleLabelPadding;
    struct UIEdgeInsets _customEdgeInsets;
}

@property (readonly, nonatomic) NSArray *accessoryViews;
@property (copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property (readonly, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSArray *childPages; // @synthesize childPages=_childPages;
@property (readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (nonatomic) struct UIEdgeInsets customEdgeInsets; // @synthesize customEdgeInsets=_customEdgeInsets;
@property (nonatomic) double customMargin; // @synthesize customMargin=_customMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property (strong, nonatomic) NSDictionary *leftNavigationBarButton;
@property (strong, nonatomic) RUIBarButtonItem *leftNavigationBarButtonItem; // @synthesize leftNavigationBarButtonItem=_leftNavigationBarButtonItem;
@property (strong, nonatomic) NSDictionary *leftToolbarButton;
@property (strong, nonatomic) RUIBarButtonItem *leftToolbarButtonItem; // @synthesize leftToolbarButtonItem=_leftToolbarButtonItem;
@property (strong, nonatomic) UIBarButtonItem *leftToolbarItem; // @synthesize leftToolbarItem=_leftToolbarItem;
@property (nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property (nonatomic) long long loadingIndicatorStyle; // @synthesize loadingIndicatorStyle=_loadingIndicatorStyle;
@property (copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property (strong, nonatomic) NSDictionary *middleToolbarButton;
@property (strong, nonatomic) RUIBarButtonItem *middleToolbarButtonItem; // @synthesize middleToolbarButtonItem=_middleToolbarButtonItem;
@property (strong, nonatomic) UIBarButtonItem *middleToolbarItem; // @synthesize middleToolbarItem=_middleToolbarItem;
@property (copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property (weak, nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property (copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property (readonly, weak, nonatomic) RUIPage *parentPage; // @synthesize parentPage=_parentPage;
@property (readonly, nonatomic) RUIPasscodeView *passcodeViewOM;
@property (strong, nonatomic) RUIElement<RUITopLevelPageElement> *primaryElement; // @synthesize primaryElement=_primaryElement;
@property (strong, nonatomic) NSDictionary *rightNavigationBarButton;
@property (strong, nonatomic) RUIBarButtonItem *rightNavigationBarButtonItem; // @synthesize rightNavigationBarButtonItem=_rightNavigationBarButtonItem;
@property (strong, nonatomic) NSDictionary *rightToolbarButton;
@property (strong, nonatomic) RUIBarButtonItem *rightToolbarButtonItem; // @synthesize rightToolbarButtonItem=_rightToolbarButtonItem;
@property (strong, nonatomic) UIBarButtonItem *rightToolbarItem; // @synthesize rightToolbarItem=_rightToolbarItem;
@property (nonatomic) BOOL showsTitlesAsHeaderViews; // @synthesize showsTitlesAsHeaderViews=_showsTitlesAsHeaderViews;
@property (readonly, nonatomic) RUISpinnerView *spinnerViewOM;
@property (strong, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RUITableView *tableViewOM;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct UIEdgeInsets titleLabelPadding; // @synthesize titleLabelPadding=_titleLabelPadding;
@property (readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property (copy, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property (readonly, nonatomic) RUIWebView *webViewOM;

- (void).cxx_destruct;
- (void)_addChildPage:(id)arg1;
- (void)_barButtonPressed:(id)arg1 isRight:(BOOL)arg2 isNavbar:(BOOL)arg3;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_leftNavigationBarButtonPressed:(id)arg1;
- (void)_leftToolbarButtonPressed:(id)arg1;
- (void)_middleToolbarButtonPressed:(id)arg1;
- (void)_reloadTitleLabel;
- (void)_rightNavigationBarButtonPressed:(id)arg1;
- (void)_rightToolbarButtonPressed:(id)arg1;
- (void)_setContentInset:(double)arg1;
- (void)_setParentPage:(id)arg1;
- (void)_updateLoadingUI;
- (void)_updateParentPage;
- (void)_updateToolbar;
- (void)_updateWithCompletedChild:(id)arg1;
- (void)addDidAppearBlock:(CDUnknownBlockType)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)elementsWithName:(id)arg1;
- (id)flexibleSpace;
- (BOOL)hasPasscodeView;
- (BOOL)hasSpinnerView;
- (BOOL)hasTableView;
- (BOOL)hasWebView;
- (id)init;
- (void)loadView;
- (BOOL)needsToShowToolbarInPrefsAppRoot;
- (void)populatePostbackDictionary:(id)arg1;
- (id)preferredFocusedView;
- (void)setButton:(id)arg1 enabled:(BOOL)arg2;
- (void)setHasToolbar;
- (void)setLeftNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2;
- (void)setRightNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

