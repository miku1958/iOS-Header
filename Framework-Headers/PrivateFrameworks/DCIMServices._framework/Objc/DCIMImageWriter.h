//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DCIMImageWriter : NSObject
{
}

+ (id)avalanchePathExtension;
+ (id)defaultFileExtensionForAssetType:(short)arg1;
+ (id)diagnosticPathExtension;
+ (id)incomingAssetFilenameDelimiter;
+ (id)incomingDirectoryPath;
+ (id)incomingDirectoryPathForPhotoStream;
+ (id)largeThumbnailInflightPathExtension;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)sharedDCIMWriter;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(BOOL)arg3;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString *)arg4 exifProperties:(id)arg5 imageOrientation:(long long)arg6 thumbnailDataOut:(id *)arg7 imageUTITypeOut:(id *)arg8 exifPropertiesOut:(id *)arg9 isJPEGOut:(BOOL *)arg10 imageDataOut:(id *)arg11;
+ (void)writeableDataForImageData:(id)arg1 thumbnailDataOut:(id *)arg2 imageUTITypeOut:(id *)arg3 exifPropertiesOut:(id *)arg4 isJPEGOut:(BOOL *)arg5 imageDataOut:(id *)arg6;
- (id)_cameraAssetExtensionForType:(short)arg1;
- (BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5;
- (BOOL)saveImageJobToDisk:(id)arg1;
- (BOOL)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4;

@end

