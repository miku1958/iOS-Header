//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUVideoExportRequest.h>

@class NSString, NSURL;

@interface PIAutoLoopExportRequest : NUVideoExportRequest
{
    NSString *_destinationUTI;
    NSURL *_destinationLongExposureURL;
    NSURL *_destinationMaskURL;
}

@property (readonly) NSURL *destinationLongExposureURL; // @synthesize destinationLongExposureURL=_destinationLongExposureURL;
@property (readonly) NSURL *destinationMaskURL; // @synthesize destinationMaskURL=_destinationMaskURL;
@property (readonly) NSString *destinationUTI; // @synthesize destinationUTI=_destinationUTI;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5;
- (id)initWithRequest:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(CDUnknownBlockType)arg1;

@end

