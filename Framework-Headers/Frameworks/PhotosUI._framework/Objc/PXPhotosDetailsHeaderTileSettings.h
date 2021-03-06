//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDetailsHeaderTileSettings : PXSettings
{
    BOOL _showAlways;
    BOOL _showSlideshow;
    BOOL _forceMiroCompelling;
    BOOL _fakeMiroViewController;
    double _aspectRatio;
    double _maximumHeightRelativeToScreenHeight;
    double _maximumAbsoluteHeight;
    double _fakeMiroViewAspectRatio;
    double _fakeMiroViewLoadingDuration;
}

@property (nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (nonatomic) double fakeMiroViewAspectRatio; // @synthesize fakeMiroViewAspectRatio=_fakeMiroViewAspectRatio;
@property (nonatomic) BOOL fakeMiroViewController; // @synthesize fakeMiroViewController=_fakeMiroViewController;
@property (nonatomic) double fakeMiroViewLoadingDuration; // @synthesize fakeMiroViewLoadingDuration=_fakeMiroViewLoadingDuration;
@property (nonatomic) BOOL forceMiroCompelling; // @synthesize forceMiroCompelling=_forceMiroCompelling;
@property (nonatomic) double maximumAbsoluteHeight; // @synthesize maximumAbsoluteHeight=_maximumAbsoluteHeight;
@property (nonatomic) double maximumHeightRelativeToScreenHeight; // @synthesize maximumHeightRelativeToScreenHeight=_maximumHeightRelativeToScreenHeight;
@property (nonatomic) BOOL showAlways; // @synthesize showAlways=_showAlways;
@property (nonatomic) BOOL showSlideshow; // @synthesize showSlideshow=_showSlideshow;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

