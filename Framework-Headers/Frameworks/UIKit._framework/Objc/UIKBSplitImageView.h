//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIKBSplitImageView : UIView
{
    BOOL _canStretchAsFullWidth;
    UIImageView *_fullView;
    UIImageView *_splitLeft;
    UIImageView *_splitRight;
    NSString *_currentFilterType;
}

@property (strong, nonatomic) NSString *filterType; // @synthesize filterType=_currentFilterType;

- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)clearImages;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 canStretchAsFullWidth:(BOOL)arg2;
- (void)insertSubviewAtBottom:(id)arg1;
- (void)prepareForDisplay:(BOOL)arg1;
- (void)setContentsMultiplyColor:(id)arg1;
- (void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3;
- (void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4;

@end

