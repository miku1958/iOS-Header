//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIShadowView : UIView
{
    UIImage *_image;
}

+ (id)bottomShadowImage;
+ (id)topShadowImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setShadowImage:(id)arg1 forEdge:(unsigned long long)arg2 inside:(BOOL)arg3;

@end

