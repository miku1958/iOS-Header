//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPLinkPresentationPropertyProvider-Protocol.h>

@class LPCaptionBarPresentationProperties, LPImage, LPVideo, LPiTunesPlaybackInformation, NSString, UIColor;

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>
{
    BOOL _preliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPVideo *_video;
    UIColor *_backgroundColor;
    LPiTunesPlaybackInformation *_iTunesPlaybackInformation;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) LPCaptionBarPresentationProperties *captionBar; // @synthesize captionBar=_captionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LPiTunesPlaybackInformation *iTunesPlaybackInformation; // @synthesize iTunesPlaybackInformation=_iTunesPlaybackInformation;
@property (strong, nonatomic) LPImage *image; // @synthesize image=_image;
@property (strong, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property (strong, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property (nonatomic, getter=isPreliminary) BOOL preliminary; // @synthesize preliminary=_preliminary;
@property (copy, nonatomic) NSString *quotedText; // @synthesize quotedText=_quotedText;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (strong, nonatomic) LPVideo *video; // @synthesize video=_video;

- (void).cxx_destruct;

@end

