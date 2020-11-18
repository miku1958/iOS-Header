//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying>
{
    BOOL _disabledAppearance;
    BOOL _flattenImage;
    BOOL _scaleImage;
    NSString *_title;
    UIImage *_image;
    UIView *_customView;
    struct UIEdgeInsets _imageInsets;
}

@property (strong, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property (nonatomic) BOOL disabledAppearance; // @synthesize disabledAppearance=_disabledAppearance;
@property (nonatomic) BOOL flattenImage; // @synthesize flattenImage=_flattenImage;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property (nonatomic) BOOL scaleImage; // @synthesize scaleImage=_scaleImage;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)HUDItemForBarButtonItem:(id)arg1;
+ (id)HUDItemForTabBarItem:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithCustomView:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 scaleImage:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;

@end

