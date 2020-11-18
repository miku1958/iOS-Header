//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUI/PUMutablePhotosGlobalFooterView-Protocol.h>
#import <PhotosUI/UITextViewDelegate-Protocol.h>

@class NSString, UILabel, UIProgressView, UITextView, UIView;
@protocol PUPhotosGlobalFooterViewDelegate, PUPhotosGlobalFooterViewLayoutDelegate;

@interface PUPhotosGlobalFooterView : UICollectionReusableView <PUMutablePhotosGlobalFooterView, UITextViewDelegate>
{
    UILabel *_titleLabel;
    UITextView *_subtitle1TextView;
    UILabel *_subtitle2Label;
    UIProgressView *_progressView;
    double _currentHeight;
    BOOL _isPresentingAlert;
    struct {
        BOOL title;
        BOOL subtitle1;
        BOOL subtitle2;
        BOOL progress;
        BOOL layout;
    } _needToUpdate;
    BOOL _isPerformingChanges;
    BOOL _paused;
    NSString *_title;
    NSString *_subtitle1;
    NSString *_subtitle2;
    double _progress;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertButtonTitle;
    CDUnknownBlockType _action;
    UIView *_accessoryView;
    id<PUPhotosGlobalFooterViewDelegate> _delegate;
    id<PUPhotosGlobalFooterViewLayoutDelegate> _layoutDelegate;
}

@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property (copy, nonatomic) NSString *actionConfirmationAlertButtonTitle; // @synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertTitle; // @synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle;
@property (copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotosGlobalFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PUPhotosGlobalFooterViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (copy, nonatomic) NSString *subtitle1; // @synthesize subtitle1=_subtitle1;
@property (copy, nonatomic) NSString *subtitle2; // @synthesize subtitle2=_subtitle2;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)_attributedStringForInputString:(id)arg1 actionTitle:(id)arg2 textAttributes:(id)arg3 linkTextAttributes:(id)arg4;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_invalidateLayout;
- (void)_invalidateProgress;
- (void)_invalidateSubtitle1;
- (void)_invalidateSubtitle2;
- (void)_invalidateTitle;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_updateLayout;
- (void)_updateLayoutIfNeeded;
- (void)_updateProgress;
- (void)_updateProgressIfNeeded;
- (void)_updateSubtitle1;
- (void)_updateSubtitle1IfNeeded;
- (void)_updateSubtitle2;
- (void)_updateSubtitle2IfNeeded;
- (void)_updateTitle;
- (void)_updateTitleIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidChangeSelection:(id)arg1;

@end
