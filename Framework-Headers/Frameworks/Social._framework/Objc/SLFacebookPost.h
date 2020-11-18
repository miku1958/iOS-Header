//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, SLFacebookAlbum, SLFacebookPlace, SLFacebookPostPrivacySetting;

@interface SLFacebookPost : NSObject <NSSecureCoding>
{
    NSMutableArray *_imageData;
    NSMutableArray *_imageAssetURLs;
    NSMutableArray *_videoData;
    NSMutableArray *_videoAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_text;
    NSString *_videoExportPreset;
    NSURL *_link;
    SLFacebookPlace *_place;
    SLFacebookAlbum *_album;
    SLFacebookPostPrivacySetting *_privacySetting;
    NSArray *_taggedUserIDs;
}

@property (strong) SLFacebookAlbum *album; // @synthesize album=_album;
@property (strong) NSArray *imageAssetURLs; // @dynamic imageAssetURLs;
@property (strong) NSArray *imageData; // @dynamic imageData;
@property (strong) NSURL *link; // @synthesize link=_link;
@property (strong) NSString *maskedApplicationID; // @synthesize maskedApplicationID=_maskedApplicationID;
@property (strong) SLFacebookPlace *place; // @synthesize place=_place;
@property (strong) SLFacebookPostPrivacySetting *privacySetting; // @synthesize privacySetting=_privacySetting;
@property (strong) NSArray *taggedUserIDs; // @synthesize taggedUserIDs=_taggedUserIDs;
@property (strong) NSString *text; // @synthesize text=_text;
@property (strong) NSArray *videoAssetURLs; // @dynamic videoAssetURLs;
@property (strong) NSArray *videoData; // @dynamic videoData;
@property (strong) NSString *videoExportPreset; // @synthesize videoExportPreset=_videoExportPreset;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_encodableObjectProperties;
- (void)addImageAssetURL:(id)arg1;
- (void)addImageData:(id)arg1;
- (void)addVideoAssetURL:(id)arg1;
- (void)addVideoData:(id)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
