//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUI/PXUIAssetBadgeViewDelegate-Protocol.h>

@class NSString, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate>
{
    PXUIAssetBadgeView *_toggleGlyphButton;
    id _target;
    SEL _action;
    BOOL _interactive;
    BOOL _toggled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property (readonly) Class superclass;
@property (nonatomic, getter=isToggled) BOOL toggled; // @synthesize toggled=_toggled;

- (void).cxx_destruct;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
