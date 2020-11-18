//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, UITextField, UIView, WFWorkflowWizardNameClearButton, WFWorkflowWizardNameIconButton, WFWorkflowWizardNameRecordButton;
@protocol WFWorkflowWizardNameCellDataSource, WFWorkflowWizardNameCellDelegate;

@interface WFWorkflowWizardNameCell : UITableViewCell <UITextFieldDelegate>
{
    BOOL _showsHeySiri;
    BOOL _useDoneButtonOnKeyboard;
    BOOL _useHorizontalInset;
    id<WFWorkflowWizardNameCellDelegate> _delegate;
    id<WFWorkflowWizardNameCellDataSource> _dataSource;
    UIView *_platterView;
    UIView *_phraseView;
    WFWorkflowWizardNameIconButton *_iconButton;
    WFWorkflowWizardNameRecordButton *_recordButton;
    WFWorkflowWizardNameClearButton *_clearButton;
    UITextField *_shortcutNameTextField;
    NSArray *_horizontalConstraintsWithInset;
    NSArray *_horizontalConstraintsWithoutInset;
}

@property (strong, nonatomic) WFWorkflowWizardNameClearButton *clearButton; // @synthesize clearButton=_clearButton;
@property (weak, nonatomic) id<WFWorkflowWizardNameCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFWorkflowWizardNameCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *horizontalConstraintsWithInset; // @synthesize horizontalConstraintsWithInset=_horizontalConstraintsWithInset;
@property (strong, nonatomic) NSArray *horizontalConstraintsWithoutInset; // @synthesize horizontalConstraintsWithoutInset=_horizontalConstraintsWithoutInset;
@property (strong, nonatomic) WFWorkflowWizardNameIconButton *iconButton; // @synthesize iconButton=_iconButton;
@property (readonly, copy, nonatomic) NSString *name;
@property (strong, nonatomic) UIView *phraseView; // @synthesize phraseView=_phraseView;
@property (strong, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property (strong, nonatomic) WFWorkflowWizardNameRecordButton *recordButton; // @synthesize recordButton=_recordButton;
@property (strong, nonatomic) UITextField *shortcutNameTextField; // @synthesize shortcutNameTextField=_shortcutNameTextField;
@property (nonatomic) BOOL showsHeySiri; // @synthesize showsHeySiri=_showsHeySiri;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDoneButtonOnKeyboard; // @synthesize useDoneButtonOnKeyboard=_useDoneButtonOnKeyboard;
@property (nonatomic) BOOL useHorizontalInset; // @synthesize useHorizontalInset=_useHorizontalInset;

+ (double)defaultRowHeight;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)configureIconButton;
- (void)configureWithName:(id)arg1 showsHeySiri:(BOOL)arg2 icon:(id)arg3;
- (void)configureWithName:(id)arg1 showsHeySiri:(BOOL)arg2 useHorizontalInset:(BOOL)arg3 icon:(id)arg4;
- (void)configureWithName:(id)arg1 showsHeySiri:(BOOL)arg2 useHorizontalInset:(BOOL)arg3 icon:(id)arg4 customImageData:(id)arg5;
- (void)didTapClearButton;
- (void)didTapIconButton;
- (void)didTapRecordButton;
- (id)dropdownMenuIconButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)regularIconButton;
- (void)setDropdownMenuForIconButton:(id)arg1;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;
- (void)setIconButtonConstraints;
- (void)setName:(id)arg1;
- (void)setUseHorizontalContraints:(BOOL)arg1;
- (BOOL)shortcutNameIsEmpty;
- (void)textFieldDidChange;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateButtonVisibility;
- (void)updateViewForDoneButton;
- (void)updateViewForHorizontalConstraints;
- (BOOL)useDropdownMenuIconButton;

@end
