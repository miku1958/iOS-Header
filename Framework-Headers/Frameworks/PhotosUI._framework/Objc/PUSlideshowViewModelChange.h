//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModelChange : PUViewModelChange
{
    BOOL _currentStateDidChange;
    BOOL _wantsChromeVisibleDidChange;
}

@property (nonatomic) BOOL currentStateDidChange; // @synthesize currentStateDidChange=_currentStateDidChange;
@property (nonatomic) BOOL wantsChromeVisibleDidChange; // @synthesize wantsChromeVisibleDidChange=_wantsChromeVisibleDidChange;

- (void)_setCurrentStateDidChange:(BOOL)arg1;
- (void)_setWantsChromeVisibleDidChange:(BOOL)arg1;
- (BOOL)hasChanges;

@end

