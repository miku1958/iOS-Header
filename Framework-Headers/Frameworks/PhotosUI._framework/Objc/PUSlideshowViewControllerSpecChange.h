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
@property (nonatomic, setter=_setShouldObserveAirplayRouteChanged:) BOOL shouldObserveAirplayRouteChanged; // @synthesize shouldObserveAirplayRouteChanged=_shouldObserveAirplayRouteChanged;
@property (nonatomic, setter=_setShouldShowAirplayButtonChanged:) BOOL shouldShowAirplayButtonChanged; // @synthesize shouldShowAirplayButtonChanged=_shouldShowAirplayButtonChanged;
@property (nonatomic, setter=_setShouldShowChromeBarsChanged:) BOOL shouldShowChromeBarsChanged; // @synthesize shouldShowChromeBarsChanged=_shouldShowChromeBarsChanged;
@property (nonatomic, setter=_setShouldShowPlaceholderChanged:) BOOL shouldShowPlaceholderChanged; // @synthesize shouldShowPlaceholderChanged=_shouldShowPlaceholderChanged;

- (BOOL)changed;

@end

