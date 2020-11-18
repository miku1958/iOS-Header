//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <FuseUI/UITextViewDelegate-Protocol.h>

@class MusicMediaDetailTintInformation, MusicProductDescription, NSString, UIButton, UILabel, UITextView;
@protocol MusicProductDescriptionTableViewCellDelegate;

@interface MusicProductDescriptionTableViewCell : UITableViewCell <UITextViewDelegate>
{
    UILabel *_descriptionHeaderLabel;
    BOOL _hasValidMoreButtonSize;
    BOOL _needsForcedTextViewUpdate;
    UIButton *_moreButton;
    UITextView *_placeholderTextView;
    UITextView *_textView;
    struct {
        unsigned int productDescriptionDidChange:1;
    } _delegateRespondsToSelector;
    BOOL _expanded;
    id<MusicProductDescriptionTableViewCellDelegate> _delegate;
    MusicMediaDetailTintInformation *_detailTintInformation;
    MusicProductDescription *_productDescription;
    long long _productDescriptionTextStyle;
    NSString *_productDescriptionTitle;
    long long _productDescriptionMaximumLengthForTextInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MusicProductDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) MusicMediaDetailTintInformation *detailTintInformation; // @synthesize detailTintInformation=_detailTintInformation;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) MusicProductDescription *productDescription; // @synthesize productDescription=_productDescription;
@property (nonatomic) long long productDescriptionMaximumLengthForTextInput; // @synthesize productDescriptionMaximumLengthForTextInput=_productDescriptionMaximumLengthForTextInput;
@property (nonatomic) long long productDescriptionTextStyle; // @synthesize productDescriptionTextStyle=_productDescriptionTextStyle;
@property (copy, nonatomic) NSString *productDescriptionTitle; // @synthesize productDescriptionTitle=_productDescriptionTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedTextWithProductDescriptionStoreEditorNotes:(id)arg1 textColor:(id)arg2;
- (struct CGRect)_calculateContentBoundsWithBounds:(struct CGRect)arg1;
- (struct CGRect)_calculateHeaderLabelFrameWithinContentBounds:(struct CGRect)arg1;
- (unsigned long long)_calculateTextViewMaximumNumberOfLinesWithEditing:(BOOL)arg1;
- (void)_handlePreferredContentSizeDidChangeNotification:(id)arg1;
- (id)_loadTextAttributes;
- (void)_moreButtonAction:(id)arg1;
- (id)_newTextView;
- (id)_placeholderAttributedText;
- (void)_updateForPreferredFontChange;
- (void)_updateMaximumNumberOfLinesWithEditing:(BOOL)arg1;
- (void)_updateMoreButtonPropertiesWithTextViewSize:(struct CGSize)arg1 positionYDelta:(double)arg2;
- (void)_updatePlaceholderTextViewVisibility;
- (void)_updateTextViewEditabilityForced:(BOOL)arg1 withEditing:(BOOL)arg2;
- (void)_updateTextViewWithProductDescriptionWithLayout:(BOOL)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end

