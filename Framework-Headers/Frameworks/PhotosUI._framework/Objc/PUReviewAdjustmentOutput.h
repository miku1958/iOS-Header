//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentOutput : NSObject
{
    NSURL *_renderedImageFileURL;
    NSURL *_renderedVideoFileURL;
    long long __adjustmentInputBaseVersion;
    NSURL *__baseImageURL;
    NSURL *__baseVideoURL;
}

@property (nonatomic, setter=_setAdjustmentInputBaseVersion:) long long _adjustmentInputBaseVersion; // @synthesize _adjustmentInputBaseVersion=__adjustmentInputBaseVersion;
@property (strong, nonatomic, setter=_setBaseImageURL:) NSURL *_baseImageURL; // @synthesize _baseImageURL=__baseImageURL;
@property (strong, nonatomic, setter=_setBaseVideoURL:) NSURL *_baseVideoURL; // @synthesize _baseVideoURL=__baseVideoURL;
@property (strong, nonatomic, setter=_setRenderedImageFileURL:) NSURL *renderedImageFileURL; // @synthesize renderedImageFileURL=_renderedImageFileURL;
@property (strong, nonatomic, setter=_setRenderedVideoFileURL:) NSURL *renderedVideoFileURL; // @synthesize renderedVideoFileURL=_renderedVideoFileURL;

- (void).cxx_destruct;

@end
