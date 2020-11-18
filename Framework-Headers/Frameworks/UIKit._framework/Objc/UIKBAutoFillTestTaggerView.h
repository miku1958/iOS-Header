//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIKBAutoFillTestTagRequest, UILabel, UIPickerView, UIToolbar, UIVisualEffectView;
@protocol UIKBAutoFillTestTaggerViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTaggerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIKBAutoFillTestTagRequest *_currentRequest;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_nextBarButtoItem;
    UIBarButtonItem *_previousBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIVisualEffectView *_visualEffectView;
    UILabel *_titleLabel;
    id<UIKBAutoFillTestTaggerViewDelegate> _delegate;
    NSArray *_tagRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIKBAutoFillTestTaggerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tagRequests; // @synthesize tagRequests=_tagRequests;

- (void).cxx_destruct;
- (void)_doneBarButtonAction:(id)arg1;
- (id)_formTypes;
- (void)_nextBarButtonAction:(id)arg1;
- (void)_performTagRequest:(id)arg1;
- (void)_previousBarButtonAction:(id)arg1;
- (id)_textFieldTypes;
- (void)_updateTitle;
- (void)_updateToolbarButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

@end
