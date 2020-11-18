//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@interface PUToolbarViewModelChange : PUViewModelChange
{
    BOOL _toolbarItemsChanged;
    BOOL _accessoryViewChanged;
    BOOL _accessoryViewTopOutsetChanged;
    BOOL _maximumHeightChanged;
}

@property (nonatomic) BOOL accessoryViewChanged; // @synthesize accessoryViewChanged=_accessoryViewChanged;
@property (nonatomic) BOOL accessoryViewTopOutsetChanged; // @synthesize accessoryViewTopOutsetChanged=_accessoryViewTopOutsetChanged;
@property (nonatomic) BOOL maximumHeightChanged; // @synthesize maximumHeightChanged=_maximumHeightChanged;
@property (nonatomic) BOOL toolbarItemsChanged; // @synthesize toolbarItemsChanged=_toolbarItemsChanged;

- (void)_setAccessoryViewChanged:(BOOL)arg1;
- (void)_setAccessoryViewTopOutsetChanged:(BOOL)arg1;
- (void)_setMaximumHeightChanged:(BOOL)arg1;
- (void)_setToolbarItemsChanged:(BOOL)arg1;
- (BOOL)hasChanges;

@end
