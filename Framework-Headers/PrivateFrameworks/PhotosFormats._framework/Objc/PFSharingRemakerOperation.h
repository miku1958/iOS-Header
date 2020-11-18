//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PFPhotoSharingOperation, PFVideoSharingOperation;

@interface PFSharingRemakerOperation : NSObject
{
    NSURL *_imageOutputURL;
    NSURL *_videoOutputURL;
    NSString *__uuid;
    long long __inputType;
    PFVideoSharingOperation *__videoOperation;
    PFPhotoSharingOperation *__imageOperation;
}

@property (strong, nonatomic, setter=_setImageOperation:) PFPhotoSharingOperation *_imageOperation; // @synthesize _imageOperation=__imageOperation;
@property (nonatomic, setter=_setInputType:) long long _inputType; // @synthesize _inputType=__inputType;
@property (copy, nonatomic, setter=_setUUID:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property (strong, nonatomic, setter=_setVideoOperation:) PFVideoSharingOperation *_videoOperation; // @synthesize _videoOperation=__videoOperation;
@property (copy, nonatomic, setter=_setImageOutputURL:) NSURL *imageOutputURL; // @synthesize imageOutputURL=_imageOutputURL;
@property (copy, nonatomic, setter=_setVideoOutputURL:) NSURL *videoOutputURL; // @synthesize videoOutputURL=_videoOutputURL;

+ (id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4;
- (void).cxx_destruct;
- (id)init;

@end
