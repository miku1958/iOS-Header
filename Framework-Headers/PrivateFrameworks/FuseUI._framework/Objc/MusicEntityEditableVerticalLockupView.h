//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicEntityVerticalLockupView.h>

@class UIView;
@protocol MusicEntityEditableVerticalLockupViewDelegate;

@interface MusicEntityEditableVerticalLockupView : MusicEntityVerticalLockupView
{
    UIView *_artworkEditingOverlayView;
    BOOL _editing;
}

@property (weak, nonatomic) id<MusicEntityEditableVerticalLockupViewDelegate> delegate; // @dynamic delegate;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;

- (void).cxx_destruct;
- (void)_layoutEditingSubviews;
- (void)_layoutEditingSubviewsForEditing:(BOOL)arg1 editingViewsAlpha:(double)arg2;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end

