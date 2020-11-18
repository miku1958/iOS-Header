//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage
{
    BOOL _hidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
    UIImage *_shadowImage;
    UIImage *_topShadowImage;
}

@property (strong, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property (nonatomic) BOOL hidesShadow; // @synthesize hidesShadow=_hidesShadow;
@property (strong, nonatomic) UIImage *miniBackgroundImage; // @synthesize miniBackgroundImage=_miniBackgroundImage;
@property (strong, nonatomic) UIImage *miniTopBackgroundImage; // @synthesize miniTopBackgroundImage=_miniTopBackgroundImage;
@property (strong, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property (strong, nonatomic) UIImage *topBackgroundImage; // @synthesize topBackgroundImage=_topBackgroundImage;
@property (strong, nonatomic) UIImage *topShadowImage; // @synthesize topShadowImage=_topShadowImage;

+ (long long)typicalBarPosition;
- (void).cxx_destruct;

@end

