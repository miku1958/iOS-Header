//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CAAnimationDelegate-Protocol.h>

@class CIContext, NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate>
{
    BOOL _highlighted;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    int _drawMode;
    long long _defaultRenderingMode;
    BOOL _masksTemplateImages;
    unsigned long long _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
    BOOL _adjustsImageSizeForAccessibilityContentSizeCategory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;

@end

