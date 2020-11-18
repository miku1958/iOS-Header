//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage, UIKeyboardDockItemButton, UILongPressGestureRecognizer, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockItem : NSObject
{
    NSString *_identifier;
    NSString *_imageName;
    UIImage *_image;
    UIKeyboardDockItemButton *_button;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _touchDownPoint;
}

@property (nonatomic) BOOL active;
@property (strong, nonatomic) UIKeyboardDockItemButton *button; // @synthesize button=_button;
@property (nonatomic) BOOL enabled;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (strong, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (nonatomic) struct CGPoint touchDownPoint; // @synthesize touchDownPoint=_touchDownPoint;
@property (readonly, nonatomic) UIKeyboardDockItemButton *view;

+ (id)_darkStyleGlyphColor;
+ (id)_standardGlyphColor;
- (void).cxx_destruct;
- (id)imageWithRenderConfig:(id)arg1;
- (id)initWithImageName:(id)arg1 identifier:(id)arg2;

@end

