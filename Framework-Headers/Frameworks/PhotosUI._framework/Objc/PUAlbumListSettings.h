//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUAlbumListSettings : PXSettings
{
    BOOL _shouldUseEditorialLayout;
    BOOL _shouldShowSubscriberMonograms;
    BOOL _combinePeoplePlacesAndMediaTypesOnIpad;
    BOOL _allowNavigationTitleEditing;
    double _avatarSpacing;
}

@property (nonatomic) BOOL allowNavigationTitleEditing; // @synthesize allowNavigationTitleEditing=_allowNavigationTitleEditing;
@property (nonatomic) double avatarSpacing; // @synthesize avatarSpacing=_avatarSpacing;
@property (nonatomic) BOOL combinePeoplePlacesAndMediaTypesOnIpad; // @synthesize combinePeoplePlacesAndMediaTypesOnIpad=_combinePeoplePlacesAndMediaTypesOnIpad;
@property (nonatomic) BOOL shouldShowSubscriberMonograms; // @synthesize shouldShowSubscriberMonograms=_shouldShowSubscriberMonograms;
@property (nonatomic) BOOL shouldUseEditorialLayout; // @synthesize shouldUseEditorialLayout=_shouldUseEditorialLayout;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

