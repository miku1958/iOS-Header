//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _UIDraggingImageComponent : NSObject <NSCopying>
{
    BOOL _ignoresAccessibilityFilters;
    BOOL _hidesImage;
    UIView *_view;
    UIImage *_image;
    struct CGRect _frame;
}

@property (readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly, nonatomic) BOOL hidesImage; // @synthesize hidesImage=_hidesImage;
@property (readonly, nonatomic) BOOL ignoresAccessibilityFilters; // @synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (id)_initWithNoImageAndFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initHidingDragImage;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 ignoreAccessibilityFilters:(BOOL)arg3;
- (id)initWithView:(id)arg1;

@end
