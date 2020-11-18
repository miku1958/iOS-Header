//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPTimeMarker : NSObject
{
    double _duration;
    unsigned long long _index;
    double _time;
    NSString *_title;
    NSURL *_url;
    int _markerType;
    NSDictionary *_metadata;
}

@property (readonly, nonatomic) double comparableTime;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasArtworkAtPlaybackTime;
@property (nonatomic) unsigned long long index; // @synthesize index=_index;
@property (readonly, nonatomic) int markerType; // @synthesize markerType=_markerType;
@property (readonly, nonatomic) double maxTime;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (nonatomic) double time; // @synthesize time=_time;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMarkerType:(int)arg1;
- (id)urlTitleTrimmingCharacterSet;

@end
