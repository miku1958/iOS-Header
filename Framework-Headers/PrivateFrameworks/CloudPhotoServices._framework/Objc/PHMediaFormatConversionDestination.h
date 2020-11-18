//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoServices/PHMediaFormatConversionContent.h>

@class NSString, NSURL, PFVideoExportRangeCoordinator;

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent
{
    NSURL *_temporaryFilesURLToDelete;
    NSURL *_temporaryOutputDirectoryURL;
    NSURL *_temporaryOutputFileURL;
    PFVideoExportRangeCoordinator *_singlePassVideoExportRangeCoordinator;
    NSString *_outputPathExtension;
    unsigned long long _singlePassVideoConversionTargetLength;
}

@property (strong) NSString *outputPathExtension; // @synthesize outputPathExtension=_outputPathExtension;
@property unsigned long long singlePassVideoConversionTargetLength; // @synthesize singlePassVideoConversionTargetLength=_singlePassVideoConversionTargetLength;
@property (strong) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator; // @synthesize singlePassVideoExportRangeCoordinator=_singlePassVideoExportRangeCoordinator;
@property (readonly) NSURL *temporaryOutputDirectoryURL;
@property (readonly) NSURL *temporaryOutputFileURL;
@property (readonly) BOOL usesSinglePassVideoConversion;

+ (id)destinationForConversionReturningUnchangedSource:(id)arg1;
+ (id)sharedCleanupQueue;
- (void).cxx_destruct;
- (void)addAvailableRange:(struct _NSRange)arg1;
- (BOOL)createTemporaryOutputDirectoryWithError:(id *)arg1;
- (BOOL)createTemporaryOutputFileWithErrorError:(id *)arg1;
- (void)dealloc;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)arg1;
- (id)errorForSinglePassVideoConversionError:(id)arg1;
- (void)generateTemporaryOutputFileURLForRequest:(id)arg1;
- (unsigned long long)length;
- (BOOL)padImageToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id *)arg3;
- (BOOL)padToLength:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)padVideoToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id *)arg3;
- (void)removeTemporaryFiles;
- (void)removeTemporaryFilesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)temporaryDirectoryPrefix;
- (BOOL)waitForAvailabilityOfRange:(struct _NSRange)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;

@end

