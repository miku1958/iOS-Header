//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/CAAnimationDelegate-Protocol.h>
#import <RemoteUI/PSPasscodeFieldDelegate-Protocol.h>
#import <RemoteUI/RUITableFooterDelegate-Protocol.h>
#import <RemoteUI/RUITopLevelPageElement-Protocol.h>

@class NSString, PSPasscodeField, RUIHTMLHeaderElement, RUIHTMLHeaderView, RUIHeaderElement, RUIObjectModel, RUIPage, UIColor, UIScrollView, UITextField, UIView;
@protocol RUIHeader, RemoteUITableFooter;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, PSPasscodeFieldDelegate, CAAnimationDelegate, RUITopLevelPageElement>
{
    UIScrollView *_containerView;
    UIView<RUIHeader> *_headerView;
    RUIHTMLHeaderView *_HTMLHeaderView;
    UITextField *_complexPasscodeField;
    RUIElement *_footer;
    UIView<RemoteUITableFooter> *_footerView;
    NSString *_pendingAutoFillToken;
    BOOL _appeared;
    unsigned long long _passcodeValidationAttempts;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    NSString *_headerTitle;
    PSPasscodeField *_passcodeField;
    UIColor *_foregroundColor;
    NSString *_submittedPIN;
    long long _keyboardAppearance;
    unsigned long long _numberOfEntryFields;
    RUIHeaderElement *_header;
    RUIHTMLHeaderElement *_HTMLHeader;
}

@property (strong, nonatomic) RUIHTMLHeaderElement *HTMLHeader; // @synthesize HTMLHeader=_HTMLHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RUIElement *footer; // @synthesize footer=_footer;
@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RUIHeaderElement *header; // @synthesize header=_header;
@property (copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property (nonatomic) unsigned long long numberOfEntryFields; // @synthesize numberOfEntryFields=_numberOfEntryFields;
@property (weak, nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property (weak, nonatomic) RUIPage *page; // @synthesize page=_page;
@property (readonly, nonatomic) PSPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property (copy, nonatomic) NSString *submittedPIN; // @synthesize submittedPIN=_submittedPIN;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)HTMLHeaderView;
- (void)_clearPasscode;
- (void)_complexPasscodeFieldDidChange:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_jiggleView:(id)arg1;
- (BOOL)_requiresLocalPasscodeValidation;
- (void)_updateFieldSpacer;
- (void)autofillWithToken:(id)arg1;
- (id)footerView;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)headerView;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeView;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (id)sourceURL;
- (id)subElementWithID:(id)arg1;
- (void)submitPIN;
- (id)titleLabel;
- (id)view;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

