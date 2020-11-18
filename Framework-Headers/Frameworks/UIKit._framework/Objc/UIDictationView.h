//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/SUICFlamesViewDelegate-Protocol.h>

@class NSString, SUICFlamesView, UIButton, UIDictationMeterView, UIKeyboardDicationBackground;
@protocol UIDictationViewDisplayDelegate;

@interface UIDictationView : UIView <SUICFlamesViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
    UIDictationMeterView *_meterView;
    id<UIDictationViewDisplayDelegate> _displayDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activeInstance;
+ (Class)dictationViewClass;
+ (struct CGSize)layoutSize;
+ (id)sharedInstance;
+ (struct CGSize)viewSize;
- (void)applicationEnteredBackground;
- (void)applicationWillResignActive;
- (float)audioLevelForFlamesView:(id)arg1;
- (struct CGPoint)backgroundOffset;
- (struct CGPoint)contentOffset;
- (struct CGSize)currentScreenSize;
- (void)dealloc;
- (BOOL)drawsOwnBackground;
- (id)endpointButton;
- (void)endpointButtonPressed;
- (void)finishReturnToKeyboard;
- (void)highlightEndpointButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isShowing;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)positionForShow;
- (void)prepareForReturnToKeyboard;
- (void)returnToKeyboard;
- (void)setState:(int)arg1;
- (void)show;
- (BOOL)visible;

@end
