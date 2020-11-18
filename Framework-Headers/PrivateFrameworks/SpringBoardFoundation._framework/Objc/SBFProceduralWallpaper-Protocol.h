//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, UIColor, UIImage, UIView;
@protocol SBFProceduralWallpaperDelegate;

@protocol SBFProceduralWallpaper <NSObject>

@property (nonatomic) id<SBFProceduralWallpaperDelegate> delegate;

+ (NSString *)identifier;
- (void)setAnimating:(BOOL)arg1;
- (UIView *)view;

@optional
+ (BOOL)colorChangesSignificantly;
+ (NSArray *)presetWallpaperOptions;
+ (NSString *)representativeThumbnailImageName;
+ (UIImage *)thumbnailImageForOptions:(NSDictionary *)arg1;
+ (NSString *)thumbnailImageName;
- (UIColor *)averageColorForRect:(struct CGRect)arg1;
- (UIColor *)averageLifetimeColor;
- (void *)copyBlurForRect:(inout struct CGRect *)arg1;
- (void *)copySnapshotImageForRect:(inout struct CGRect *)arg1;
- (void)setWallpaperOptions:(NSDictionary *)arg1;
- (void)setWallpaperVariant:(long long)arg1;
- (void)startComputingAverageColorForRect:(struct CGRect)arg1;
- (void)startGeneratingBlursForRect:(struct CGRect)arg1;
- (void)stopComputingAverageColor;
- (void)stopGeneratingBlurs;
@end
