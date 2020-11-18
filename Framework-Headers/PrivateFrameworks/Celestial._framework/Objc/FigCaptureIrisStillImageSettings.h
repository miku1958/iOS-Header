//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureStillImageSettings.h>

#import <Celestial/NSCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class FigCaptureMovieFileRecordingSettings, NSArray, NSURL;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings <NSCoding, NSCopying>
{
    int _movieMode;
    FigCaptureMovieFileRecordingSettings *_movieRecordingSettings;
    NSURL *_movieURLForEV0Image;
    NSArray *_movieLevelMetadataForEV0Image;
}

@property (copy, nonatomic) NSArray *movieLevelMetadataForEV0Image; // @synthesize movieLevelMetadataForEV0Image=_movieLevelMetadataForEV0Image;
@property (nonatomic) int movieMode; // @synthesize movieMode=_movieMode;
@property (copy, nonatomic) FigCaptureMovieFileRecordingSettings *movieRecordingSettings; // @synthesize movieRecordingSettings=_movieRecordingSettings;
@property (copy, nonatomic) NSURL *movieURLForEV0Image; // @synthesize movieURLForEV0Image=_movieURLForEV0Image;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
