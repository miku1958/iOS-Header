//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAMediaConversionServiceImagingUtilities : NSObject
{
}

+ (BOOL)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(struct CGImageDestination *)arg2 maximumSize:(struct CGSize)arg3 error:(id *)arg4;
+ (BOOL)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(struct CGSize)arg3 outputFileType:(id)arg4 error:(id *)arg5;
+ (BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id *)arg2 maximumSize:(struct CGSize)arg3 outputFileType:(id)arg4 error:(id *)arg5;
+ (id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(struct CGSize *)arg3;
+ (id)imagePropertiesForFileAtURL:(id)arg1;

@end

