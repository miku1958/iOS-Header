//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

@class NSString, UIImageView, UILabel, UIVisualEffectView;
@protocol CKTitledImageBalloonViewDelegate;

@interface CKTitledImageBalloonView : CKImageBalloonView
{
    UIImageView *_chevron;
    UILabel *_titleLabel;
    UIVisualEffectView *_effectView;
}

@property (strong, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property (weak, nonatomic) id<CKTitledImageBalloonViewDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property (copy, nonatomic) NSString *title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)configureForLocatingChatItem:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setOrientation:(BOOL)arg1;
- (void)tapGestureRecognized:(id)arg1;

@end

