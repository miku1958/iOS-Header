//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSystemImageVisualStyle : NSObject
{
    UIImage *_closeImage;
    UIImage *_cameraImage;
    UIImage *_actionsImage;
    UIImage *_checkmarkImage;
    UIImage *_strokedCheckmarkImage;
    NSCache *__systemImageCache;
}

@property (strong, nonatomic) NSCache *_systemImageCache; // @synthesize _systemImageCache=__systemImageCache;
@property (readonly, nonatomic) UIImage *actionsImage; // @synthesize actionsImage=_actionsImage;
@property (readonly, nonatomic) UIImage *addImage;
@property (readonly, nonatomic) UIImage *cameraImage; // @synthesize cameraImage=_cameraImage;
@property (readonly, nonatomic) UIImage *checkmarkImage; // @synthesize checkmarkImage=_checkmarkImage;
@property (readonly, nonatomic) UIImage *closeImage; // @synthesize closeImage=_closeImage;
@property (readonly, nonatomic) UIImage *removeImage;
@property (readonly, nonatomic) UIImage *strokedCheckmarkImage; // @synthesize strokedCheckmarkImage=_strokedCheckmarkImage;
@property (readonly, nonatomic) UIImage *systemTableViewCellDetailedDisclosureIndicatorImage;
@property (readonly, nonatomic) UIImage *systemTableViewCellDisclosureIndicatorImage;

+ (id)_iosVisualStyle;
+ (id)styleForConfiguration:(id)arg1;
+ (id)styleForThemeKey:(id)arg1;
- (void).cxx_destruct;
- (id)_addImageWithColor:(id)arg1 name:(id)arg2;
- (id)_cachedSystemImageForType:(id)arg1 withColor:(id)arg2;
- (id)_removeImageWithColor:(id)arg1 name:(id)arg2;
- (id)addImageWithColor:(id)arg1;
- (id)init;
- (id)removeImageWithColor:(id)arg1;

@end
