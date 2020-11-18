//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXDragAndDropSettings : PXSettings
{
    BOOL _useData;
    BOOL _dragOutEnabled;
    BOOL _alwaysAllowDragsWithinUserAlbums;
    BOOL _springLoadingEnabled;
    BOOL _useFileProvider;
    BOOL _oneUpDragOutEnabled;
    long long _oneUpStyle;
    double _longPressDuration;
    double _longPressRadius;
    long long _reorderCadence;
}

@property (nonatomic) BOOL alwaysAllowDragsWithinUserAlbums; // @synthesize alwaysAllowDragsWithinUserAlbums=_alwaysAllowDragsWithinUserAlbums;
@property (nonatomic) BOOL dragOutEnabled; // @synthesize dragOutEnabled=_dragOutEnabled;
@property (nonatomic) double longPressDuration; // @synthesize longPressDuration=_longPressDuration;
@property (nonatomic) double longPressRadius; // @synthesize longPressRadius=_longPressRadius;
@property (nonatomic) BOOL oneUpDragOutEnabled; // @synthesize oneUpDragOutEnabled=_oneUpDragOutEnabled;
@property (nonatomic) long long oneUpStyle; // @synthesize oneUpStyle=_oneUpStyle;
@property (nonatomic) long long reorderCadence; // @synthesize reorderCadence=_reorderCadence;
@property (nonatomic) BOOL springLoadingEnabled; // @synthesize springLoadingEnabled=_springLoadingEnabled;
@property (nonatomic) BOOL useData; // @synthesize useData=_useData;
@property (nonatomic) BOOL useFileProvider; // @synthesize useFileProvider=_useFileProvider;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

