//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKAnimatedImage, CKAttachmentItem, NSArray, NSObject, NSString, UIImage, UIImageView, UITapGestureRecognizer;
@protocol CKAttachmentCellDelegate;

__attribute__((visibility("hidden")))
@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate>
{
    BOOL _editing;
    BOOL _isIrisAsset;
    UIImage *_image;
    CKAnimatedImage *_animatedImage;
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    CKAttachmentItem *_representedObject;
    NSArray *_frames;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_irisBadgeView;
}

@property (strong, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property (strong, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAttachmentCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *iconImage;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIImageView *irisBadgeView; // @synthesize irisBadgeView=_irisBadgeView;
@property (nonatomic) BOOL isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property (strong, nonatomic) CKAttachmentItem *representedObject; // @synthesize representedObject=_representedObject;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;

- (void).cxx_destruct;
- (struct CGImage *)_cgImageForUIImage:(id)arg1;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)copy:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)more:(id)arg1;
- (void)prepareForReuse;
- (void)saveAttachment:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)updateAnimationTimerObserving;

@end
