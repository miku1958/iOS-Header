//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/AKSignatureCreationControllerDelegate-Protocol.h>
#import <AnnotationKit/UINavigationBarDelegate-Protocol.h>
#import <AnnotationKit/UITableViewDataSource-Protocol.h>
#import <AnnotationKit/UITableViewDelegate-Protocol.h>

@class AKController, NSArray, NSString, UIColor, UINavigationBar, UIResponder, UITableView;
@protocol AKSignaturesViewControllerDelegate;

@interface AKSignaturesViewController_iOS : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate>
{
    BOOL _presentedInAlert;
    BOOL _showsNavigationBar;
    BOOL _allowsEdits;
    BOOL _showAddEditButtonRow;
    AKController *_controller;
    id<AKSignaturesViewControllerDelegate> _delegate;
    UIColor *_tableBackgroundColor;
    UITableView *_tableView;
    UINavigationBar *_navBar;
    NSArray *_rightBarItems;
    NSArray *_editingLeftBarItems;
    NSArray *_leftBarItems;
    UIResponder *_responderToRestore;
}

@property (nonatomic) BOOL allowsEdits; // @synthesize allowsEdits=_allowsEdits;
@property (weak, nonatomic) AKController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AKSignaturesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *editingLeftBarItems; // @synthesize editingLeftBarItems=_editingLeftBarItems;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double idealHeight;
@property (strong, nonatomic) NSArray *leftBarItems; // @synthesize leftBarItems=_leftBarItems;
@property (strong, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property (nonatomic) BOOL presentedInAlert; // @synthesize presentedInAlert=_presentedInAlert;
@property (weak, nonatomic) UIResponder *responderToRestore; // @synthesize responderToRestore=_responderToRestore;
@property (strong, nonatomic) NSArray *rightBarItems; // @synthesize rightBarItems=_rightBarItems;
@property (nonatomic) BOOL showAddEditButtonRow; // @synthesize showAddEditButtonRow=_showAddEditButtonRow;
@property (nonatomic) BOOL showsNavigationBar; // @synthesize showsNavigationBar=_showsNavigationBar;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tableBackgroundColor; // @synthesize tableBackgroundColor=_tableBackgroundColor;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_cancelPicker:(id)arg1;
- (void)_configureUI;
- (void)_continueToCreateSignature:(id)arg1;
- (void)_deleteSignature:(id)arg1;
- (id)_signatures;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)initWithController:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

