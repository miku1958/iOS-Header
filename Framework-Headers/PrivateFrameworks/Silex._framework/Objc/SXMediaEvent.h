//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class NSDictionary, NSString;

@interface SXMediaEvent : SXAnalyticsEvent
{
    unsigned long long _mediaType;
    unsigned long long _galleryType;
    unsigned long long _videoType;
    NSString *_mediaId;
    NSDictionary *_metaData;
}

@property (nonatomic) unsigned long long galleryType; // @synthesize galleryType=_galleryType;
@property (strong, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property (nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property (strong, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property (nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;

- (void).cxx_destruct;

@end

