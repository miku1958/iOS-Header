//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface RCAudioRouteBarButton : UIButton
{
    UIImage *_imageAirPlay;
    UIImage *_imageBT;
    UIImage *_imageSpeaker;
    BOOL _needsUpdateDisplay;
    UIColor *_routeToSpeakerOrWirelessColor;
    UIColor *_routeToHandsetOrHeadphoneColor;
}

@property (strong, nonatomic) UIColor *routeToHandsetOrHeadphoneColor; // @synthesize routeToHandsetOrHeadphoneColor=_routeToHandsetOrHeadphoneColor;
@property (strong, nonatomic) UIColor *routeToSpeakerOrWirelessColor; // @synthesize routeToSpeakerOrWirelessColor=_routeToSpeakerOrWirelessColor;

- (void).cxx_destruct;
- (void)_audioRouteInfoDidChangeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateDisplay;
- (void)willMoveToWindow:(id)arg1;

@end

