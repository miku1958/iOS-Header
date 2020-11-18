//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol GEOMapItemPhoto;

__attribute__((visibility("hidden")))
@interface MKMapItemPhoto : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    id<GEOMapItemPhoto> _geoMapItemPhoto;
}

@property (readonly, nonatomic) BOOL displayFullPhotoInline;
@property (readonly, nonatomic) long long format;
@property (strong, nonatomic) id<GEOMapItemPhoto> geoMapItemPhoto; // @synthesize geoMapItemPhoto=_geoMapItemPhoto;
@property (readonly, nonatomic) NSURL *largestPhotoURL;
@property (readonly, nonatomic) NSString *license;
@property (readonly, nonatomic) NSString *photoID;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) BOOL useGallery;

- (void).cxx_destruct;
- (id)initWithGeoMapItemPhoto:(id)arg1;
- (id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithPictureItem:(id)arg1;
- (id)urlForBestPhotoForSize:(struct CGSize)arg1;

@end

