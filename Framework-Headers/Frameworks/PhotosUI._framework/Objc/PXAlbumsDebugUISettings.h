//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAlbumsDebugUISettings : PXSettings
{
    BOOL _showBestKeyFrameDebugAlbum;
    BOOL _showUtilitiesDebugAlbum;
}

@property (nonatomic) BOOL showBestKeyFrameDebugAlbum; // @synthesize showBestKeyFrameDebugAlbum=_showBestKeyFrameDebugAlbum;
@property (nonatomic) BOOL showUtilitiesDebugAlbum; // @synthesize showUtilitiesDebugAlbum=_showUtilitiesDebugAlbum;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end
