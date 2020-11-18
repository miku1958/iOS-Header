//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView
{
    UIImage *_value;
    UIImage *_alternate;
    BOOL _showAlternate;
}

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setAlternateImage:(id)arg1;
- (void)setCurrentImage;
- (void)setImage:(id)arg1;
- (void)showAlternateImage:(BOOL)arg1;

@end
