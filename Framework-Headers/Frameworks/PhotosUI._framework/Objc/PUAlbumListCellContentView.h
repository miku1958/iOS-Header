//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UITextFieldDelegate-Protocol.h>

@class NSString, PUStackView, PXUIButton, UIFont, UILabel, UITextField;
@protocol PUAlbumListCellDelegate;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate>
{
    BOOL _combinesPhotoDecorations;
    BOOL _editing;
    BOOL _enabled;
    BOOL _showsDeleteButtonWhenEditing;
    BOOL _highlighted;
    BOOL __showsTitleAndSubtitle;
    id<PUAlbumListCellDelegate> _delegate;
    PUStackView *_stackView;
    UIView *_customImageView;
    NSString *_title;
    NSString *_subtitle;
    double _xInset;
    long long _layout;
    unsigned long long _editCapabilities;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UITextField *__titleTextField;
    UILabel *__subtitleLabel;
    PXUIButton *__deleteButton;
}

@property (strong, nonatomic, setter=_setDeleteButton:) PXUIButton *_deleteButton; // @synthesize _deleteButton=__deleteButton;
@property (nonatomic, setter=_setShowsTitleAndSubtitle:) BOOL _showsTitleAndSubtitle; // @synthesize _showsTitleAndSubtitle=__showsTitleAndSubtitle;
@property (strong, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;
@property (strong, nonatomic, setter=_setTitleTextField:) UITextField *_titleTextField; // @synthesize _titleTextField=__titleTextField;
@property (nonatomic) BOOL combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property (strong, nonatomic) UIView *customImageView; // @synthesize customImageView=_customImageView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUAlbumListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long editCapabilities; // @synthesize editCapabilities=_editCapabilities;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (nonatomic) long long layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL showsDeleteButtonWhenEditing; // @synthesize showsDeleteButtonWhenEditing=_showsDeleteButtonWhenEditing;
@property (strong, nonatomic, setter=_setStackView:) PUStackView *stackView; // @synthesize stackView=_stackView;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property (nonatomic) double xInset; // @synthesize xInset=_xInset;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (struct CGPoint)_deleteButtonCenter;
- (double)_titleFieldAlpha;
- (long long)_titleTextFieldClearButtonModeForLayout:(long long)arg1;
- (void)_updateDeleteButtonAnimated:(BOOL)arg1;
- (void)_updateStackViewAnimated:(BOOL)arg1;
- (void)_updateSubtitleLabelAnimated:(BOOL)arg1;
- (void)_updateSubtitleLabelStyle;
- (void)_updateSubviewOrdering;
- (void)_updateTitleFieldAnimated:(BOOL)arg1;
- (void)_updateTitleTextFieldsStyle;
- (void)cancelPerformRetitleAction;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEditCapabilities:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsTitle:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

