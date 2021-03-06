//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/UITextFieldDelegate-Protocol.h>

@class NSString, _PXEditableNavigationTitleTextField;
@protocol PXEditableNavigationTitleViewDelegate;

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate>
{
    struct {
        BOOL textColor;
    } _needsUpdateFlags;
    BOOL _isPerformingUpdates;
    struct {
        BOOL validateNewText;
        BOOL didEndEditing;
    } _delegateRespondsTo;
    BOOL _editing;
    id<PXEditableNavigationTitleViewDelegate> _delegate;
    NSString *_text;
    _PXEditableNavigationTitleTextField *_textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXEditableNavigationTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (readonly, nonatomic) _PXEditableNavigationTitleTextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (void)_invalidateTextColor;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateTextColorIfNeeded;
- (void)dealloc;
- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)tintColorDidChange;

@end

