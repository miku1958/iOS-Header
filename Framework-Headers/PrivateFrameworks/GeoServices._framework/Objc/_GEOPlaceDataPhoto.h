//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemPhoto-Protocol.h>

@class GEOPDCaptionedPhoto, GEOPDPhoto, NSArray, NSString, NSURL;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto>
{
    GEOPDPhoto *_photo;
    GEOPDCaptionedPhoto *_captionedPhoto;
    NSArray *_sortedPhotoInfos;
}

@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) BOOL businessProvided;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displayFullPhotoInline;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL highQuality;
@property (readonly, nonatomic) NSString *licenseDescription;
@property (readonly, nonatomic) NSURL *licenseURL;
@property (readonly, nonatomic) double sizeRatio;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) BOOL useGallery;

- (void).cxx_destruct;
- (id)bestPhotoForSize:(struct CGSize)arg1 allowSmaller:(BOOL)arg2;
- (id)initWithCaptionedPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1;
- (id)largestPhoto;

@end

