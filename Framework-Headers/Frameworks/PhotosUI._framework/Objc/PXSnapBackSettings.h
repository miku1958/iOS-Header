//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXSnapBackSettings : PXSettings
{
    BOOL _allowSnapBackHistoryMenu;
}

@property (nonatomic) BOOL allowSnapBackHistoryMenu; // @synthesize allowSnapBackHistoryMenu=_allowSnapBackHistoryMenu;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void)setDefaultValues;

@end

