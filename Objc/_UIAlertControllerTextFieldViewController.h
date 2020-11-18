//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewController.h>

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController : UICollectionViewController
{
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
    BOOL _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
    BOOL _hidden;
    id<_UIAlertControllerTextFieldViewControllerContaining> _container;
}

@property (weak, nonatomic) id<_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly) NSArray *textFields; // @synthesize textFields;
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;

- (void).cxx_destruct;
- (double)_bottomMarginForTextFields;
- (BOOL)_canShowWhileLocked;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)addTextFieldWithPlaceholder:(id)arg1;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfTextFields;
- (void)removeAllTextFields;
- (BOOL)resignFirstResponder;
- (id)textFieldAtIndex:(long long)arg1;
- (id)textFieldContainerViews;
- (void)updateTextFieldStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

