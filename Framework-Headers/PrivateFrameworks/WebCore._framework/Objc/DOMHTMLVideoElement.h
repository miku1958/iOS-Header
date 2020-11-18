//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMHTMLMediaElement.h>

@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement
{
}

@property unsigned int height;
@property BOOL playsInline;
@property (copy) NSString *poster;
@property (readonly) unsigned int videoHeight;
@property (readonly) unsigned int videoWidth;
@property (readonly) BOOL webkitDisplayingFullscreen;
@property (readonly) BOOL webkitSupportsFullscreen;
@property unsigned int width;

- (void)webkitEnterFullScreen;
- (void)webkitEnterFullscreen;
- (void)webkitExitFullScreen;
- (void)webkitExitFullscreen;

@end
