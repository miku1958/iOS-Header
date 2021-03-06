//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPreviewItem-Protocol.h>

@class NSDictionary, NSString, NSURL, UIColor;

@protocol QLPreviewItemPrivateProtocol <QLPreviewItem>

@property (readonly) NSString *MIMEType;
@property (readonly) double autoPlaybackPosition;
@property (readonly) UIColor *backgroundColorOverride;
@property (readonly, nonatomic) BOOL isPromisedItem;
@property (readonly, nonatomic) NSString *previewItemContentType;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property (readonly) BOOL wantsDefaultMediaPlayer;


@optional
@end

