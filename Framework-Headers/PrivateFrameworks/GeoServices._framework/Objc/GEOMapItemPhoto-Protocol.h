//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString, NSURL;
@protocol GEOMapItemPhotoInfo;

@protocol GEOMapItemPhoto <NSObject>

@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) BOOL displayFullPhotoInline;
@property (readonly, nonatomic) NSString *licenseDescription;
@property (readonly, nonatomic) NSURL *licenseURL;
@property (readonly, nonatomic) double sizeRatio;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) BOOL useGallery;

- (id<GEOMapItemPhotoInfo>)bestPhotoForSize:(struct CGSize)arg1 allowSmaller:(BOOL)arg2;
- (id<GEOMapItemPhotoInfo>)largestPhoto;
@end

