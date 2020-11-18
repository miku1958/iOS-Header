//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol PageRangeDelegate;

__attribute__((visibility("hidden")))
@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    BOOL _inRange;
    BOOL _menuPresented;
    BOOL _thisCellIsPresentingMenu;
    BOOL _menuHiddenByTapInThisCell;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_imageView;
    UIView *_dimmingView;
    id<PageRangeDelegate> _delegate;
    long long _pageIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PageRangeDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1;
- (BOOL)canModifyPageRange;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)gestureRecognizers;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)menuDidHide:(id)arg1;
- (void)prepareForReuse;
- (void)removePage:(id)arg1;
- (void)setEndPage:(id)arg1;
- (void)setInRange:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStartPage:(id)arg1;
- (void)showMenu;

@end

