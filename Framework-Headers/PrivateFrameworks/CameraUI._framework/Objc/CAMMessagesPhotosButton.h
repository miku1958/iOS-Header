//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSString;

@interface CAMMessagesPhotosButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;

+ (id)photosButton;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)imageForAccessibilityHUD;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;

@end

