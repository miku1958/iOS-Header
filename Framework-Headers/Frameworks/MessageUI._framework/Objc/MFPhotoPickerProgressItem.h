//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession;

@interface MFPhotoPickerProgressItem : NSObject
{
    int _imageRequestID;
    double _progress;
    AVAssetExportSession *_exportSession;
}

@property (strong, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property (nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property (nonatomic) double progress; // @synthesize progress=_progress;

- (void).cxx_destruct;
- (id)description;

@end
