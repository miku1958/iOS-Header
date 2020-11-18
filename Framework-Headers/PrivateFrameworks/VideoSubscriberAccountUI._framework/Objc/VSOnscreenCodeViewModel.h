//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSViewModel.h>

#import <VideoSubscriberAccountUI/VSLogoImageViewModel-Protocol.h>

@class NSItemProvider, NSString, NSURL, UIImage, VSMessageQueue;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel>
{
    BOOL _shouldShowRegenerateCodeButton;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    NSString *_webPagePreamble;
    NSURL *_webPageURL;
    NSString *_webPagePostamble;
    NSString *_onscreenCode;
    NSString *_regenerateCodeButtonTitle;
    VSMessageQueue *_regenerateCodeEventQueue;
    NSString *_footerText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property (copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property (strong, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
@property (copy, nonatomic) NSString *onscreenCode; // @synthesize onscreenCode=_onscreenCode;
@property (copy, nonatomic) NSString *regenerateCodeButtonTitle; // @synthesize regenerateCodeButtonTitle=_regenerateCodeButtonTitle;
@property (strong, nonatomic) VSMessageQueue *regenerateCodeEventQueue; // @synthesize regenerateCodeEventQueue=_regenerateCodeEventQueue;
@property (nonatomic) BOOL shouldShowRegenerateCodeButton; // @synthesize shouldShowRegenerateCodeButton=_shouldShowRegenerateCodeButton;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *webPagePostamble; // @synthesize webPagePostamble=_webPagePostamble;
@property (copy, nonatomic) NSString *webPagePreamble; // @synthesize webPagePreamble=_webPagePreamble;
@property (copy, nonatomic) NSURL *webPageURL; // @synthesize webPageURL=_webPageURL;

- (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)init;

@end

