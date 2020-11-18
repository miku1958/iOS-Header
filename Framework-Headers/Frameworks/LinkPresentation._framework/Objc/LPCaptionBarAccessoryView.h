//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface LPCaptionBarAccessoryView : LPComponentView
{
    long long _type;
    BOOL _shouldFlipHorizontally;
    UIColor *_color;
    UIImageView *_accessoryView;
}

@property (readonly, nonatomic) struct CGSize size;

- (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)arg1;
- (void)componentViewDidMoveToWindow;
- (id)ensureAccessoryView;
- (id)init;
- (id)initWithType:(long long)arg1 side:(long long)arg2;
- (void)layoutComponentView;

@end
