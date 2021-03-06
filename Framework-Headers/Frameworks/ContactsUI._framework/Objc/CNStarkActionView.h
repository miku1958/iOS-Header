//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNContactQuickActionPresentation-Protocol.h>

@class NSString, UIButton, UIColor, UIImage, UILabel;
@protocol CNStarkActionViewDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionView : UIView <CNContactQuickActionPresentation>
{
    BOOL _enabled;
    BOOL _selected;
    BOOL _disabledButtonFocused;
    NSString *_actionType;
    NSString *_title;
    id<CNStarkActionViewDelegate> _delegate;
    double _actionPlatterSize;
    double _actionLabelOffset;
    double _actionBorderWidth;
    UIColor *_disabledStrokeColor;
    UIColor *_disabledFillColor;
    UIColor *_disabledGlyphColor;
    UIColor *_enabledStrokeColor;
    UIColor *_enabledFillColor;
    UIColor *_enabledGlyphColor;
    UIColor *_selectedStrokeColor;
    UIColor *_selectedFillColor;
    UIColor *_selectedGlyphColor;
    UIImage *_image;
    UIButton *_button;
    UILabel *_label;
}

@property (nonatomic) double actionBorderWidth; // @synthesize actionBorderWidth=_actionBorderWidth;
@property (nonatomic) double actionLabelOffset; // @synthesize actionLabelOffset=_actionLabelOffset;
@property (nonatomic) double actionPlatterSize; // @synthesize actionPlatterSize=_actionPlatterSize;
@property (strong, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property (readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<CNStarkActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabledButtonFocused; // @synthesize disabledButtonFocused=_disabledButtonFocused;
@property (strong, nonatomic) UIColor *disabledFillColor; // @synthesize disabledFillColor=_disabledFillColor;
@property (strong, nonatomic) UIColor *disabledGlyphColor; // @synthesize disabledGlyphColor=_disabledGlyphColor;
@property (strong, nonatomic) UIColor *disabledStrokeColor; // @synthesize disabledStrokeColor=_disabledStrokeColor;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) UIColor *enabledFillColor; // @synthesize enabledFillColor=_enabledFillColor;
@property (strong, nonatomic) UIColor *enabledGlyphColor; // @synthesize enabledGlyphColor=_enabledGlyphColor;
@property (strong, nonatomic) UIColor *enabledStrokeColor; // @synthesize enabledStrokeColor=_enabledStrokeColor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (strong, nonatomic) UIColor *selectedFillColor; // @synthesize selectedFillColor=_selectedFillColor;
@property (strong, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property (strong, nonatomic) UIColor *selectedStrokeColor; // @synthesize selectedStrokeColor=_selectedStrokeColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)propertyTransportButtonWithDelegate:(id)arg1;
+ (id)quickActionButtonWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)actionViewTapped:(id)arg1;
- (void)actionViewTouchDown:(id)arg1;
- (void)actionViewTouchUp:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)choose;
- (void)clickGestureDidUpdate:(id)arg1;
- (void)deselect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)notifyDelegateAboutUserChoice;
- (void)select;
- (void)setupButton;
- (void)setupClickGestureRecognizer;
- (void)setupConstraints;
- (void)setupLabel;
- (void)stateUpdated;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForFocusedState:(BOOL)arg1;

@end

