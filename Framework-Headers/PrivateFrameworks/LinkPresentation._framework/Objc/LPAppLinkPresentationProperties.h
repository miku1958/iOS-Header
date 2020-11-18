//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPLinkPresentationPropertyProvider-Protocol.h>

@class LPCaptionBarPresentationProperties, LPImage, LPVideo, NSString, UIColor;

@interface LPAppLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>
{
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_topCaption;
    NSString *_bottomCaption;
    NSString *_trailingTopCaption;
    NSString *_trailingBottomCaption;
    NSString *_mediaTopCaption;
    NSString *_mediaBottomCaption;
    LPImage *_image;
    LPImage *_icon;
    LPVideo *_video;
    UIColor *_backgroundColor;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy, nonatomic) NSString *bottomCaption; // @synthesize bottomCaption=_bottomCaption;
@property (strong, nonatomic) LPCaptionBarPresentationProperties *captionBar; // @synthesize captionBar=_captionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property (strong, nonatomic) LPImage *image; // @synthesize image=_image;
@property (copy, nonatomic) NSString *mediaBottomCaption; // @synthesize mediaBottomCaption=_mediaBottomCaption;
@property (strong, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property (copy, nonatomic) NSString *mediaTopCaption; // @synthesize mediaTopCaption=_mediaTopCaption;
@property (strong, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topCaption; // @synthesize topCaption=_topCaption;
@property (copy, nonatomic) NSString *trailingBottomCaption; // @synthesize trailingBottomCaption=_trailingBottomCaption;
@property (copy, nonatomic) NSString *trailingTopCaption; // @synthesize trailingTopCaption=_trailingTopCaption;
@property (strong, nonatomic) LPVideo *video; // @synthesize video=_video;

- (void).cxx_destruct;
- (long long)style;

@end

