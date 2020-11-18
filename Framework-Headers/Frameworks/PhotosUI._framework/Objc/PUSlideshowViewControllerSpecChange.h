//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpecChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange
{
    BOOL _chromeVisibilityChanged;
    BOOL _shouldShowPlaceholderChanged;
    BOOL _shouldShowChromeBarsChanged;
    BOOL _shouldObserveAirplayRouteChanged;
    BOOL _shouldShowAirplayButtonChanged;
}

@property (readonly, nonatomic) BOOL chromeVisibilityChanged; // @synthesize chromeVisibilityChanged=_chromeVisibilityChanged;
@property (nonatomic) BOOL shouldObserveAirplayRouteChanged; // @synthesize shouldObserveAirplayRouteChanged=_shouldObserveAirplayRouteChanged;
@property (nonatomic) BOOL shouldShowAirplayButtonChanged; // @synthesize shouldShowAirplayButtonChanged=_shouldShowAirplayButtonChanged;
@property (nonatomic) BOOL shouldShowChromeBarsChanged; // @synthesize shouldShowChromeBarsChanged=_shouldShowChromeBarsChanged;
@property (nonatomic) BOOL shouldShowPlaceholderChanged; // @synthesize shouldShowPlaceholderChanged=_shouldShowPlaceholderChanged;

- (void)_setShouldObserveAirplayRouteChanged:(BOOL)arg1;
- (void)_setShouldShowAirplayButtonChanged:(BOOL)arg1;
- (void)_setShouldShowChromeBarsChanged:(BOOL)arg1;
- (void)_setShouldShowPlaceholderChanged:(BOOL)arg1;
- (BOOL)changed;

@end

