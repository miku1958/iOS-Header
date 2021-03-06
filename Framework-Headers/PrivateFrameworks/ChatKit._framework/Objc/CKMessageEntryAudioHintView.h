//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKMessageEntryAudioHintView : UIView
{
    BOOL _shouldAnimateReferenceButton;
    UIButton *_referenceButton;
    UILabel *_hintLabel;
    UIImageView *_hintImageView;
    UIButton *_hintButton;
    struct UIEdgeInsets _coverInsets;
}

@property (nonatomic) struct UIEdgeInsets coverInsets; // @synthesize coverInsets=_coverInsets;
@property (strong, nonatomic) UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property (strong, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
@property (strong, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property (strong, nonatomic) UIButton *referenceButton; // @synthesize referenceButton=_referenceButton;
@property (nonatomic) BOOL shouldAnimateReferenceButton; // @synthesize shouldAnimateReferenceButton=_shouldAnimateReferenceButton;

- (void).cxx_destruct;
- (id)initWithReferenceButton:(id)arg1 coverInsets:(struct UIEdgeInsets)arg2;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

