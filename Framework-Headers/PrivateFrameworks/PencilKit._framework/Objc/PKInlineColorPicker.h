//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, UIColor, UIScrollView;
@protocol PKInlineColorPickerDelegate;

@interface PKInlineColorPicker : UIView <UIScrollViewDelegate>
{
    BOOL _isUsedOnDarkBackground;
    BOOL _shouldEmboss;
    unsigned long long _sizeState;
    unsigned long long _selectionState;
    id<PKInlineColorPickerDelegate> _delegate;
    unsigned long long _colorSet;
    NSArray *_colors;
    unsigned long long _selectedColorIndex;
    NSArray *_buttonItems;
    UIScrollView *_scrollView;
    UIView *_leftOverflowView;
    UIView *_rightOverflowView;
}

@property (strong, nonatomic) NSArray *buttonItems; // @synthesize buttonItems=_buttonItems;
@property (nonatomic) unsigned long long colorSet; // @synthesize colorSet=_colorSet;
@property (strong, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKInlineColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property (strong, nonatomic) UIView *leftOverflowView; // @synthesize leftOverflowView=_leftOverflowView;
@property (strong, nonatomic) UIView *rightOverflowView; // @synthesize rightOverflowView=_rightOverflowView;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) UIColor *selectedColor;
@property (nonatomic) unsigned long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property (nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property (nonatomic) BOOL shouldEmboss; // @synthesize shouldEmboss=_shouldEmboss;
@property (nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg1;
- (id)_axLabelForColorButton:(id)arg1;
- (void)_commonInit;
- (unsigned long long)colorIndexClosestToColor:(id)arg1;
- (void)colorPressed:(id)arg1;
- (void)colorTappedInCompactChooseColorState:(id)arg1;
- (void)colorTappedInCompactChooseToolState:(id)arg1;
- (void)colorTappedInRegularState:(id)arg1;
- (void)colorUnpressed:(id)arg1;
- (id)colorsForColorSet:(unsigned long long)arg1;
- (id)createColorButtonItemWithColor:(id)arg1 shouldEmboss:(BOOL)arg2;
- (id)initWithEmbossing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showOverflowViewsIfNeeded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;

@end
