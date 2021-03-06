//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMIrisDiskUtilities : NSObject
{
}

+ (id)_delimiterForFilenames;
+ (id)_substituteForDotInBundleIdentifier;
+ (BOOL)hasPendingWork;
+ (id)irisVideoDirectoryPath;
+ (id)irisVideoDirectoryPathCreateIfNeeded:(BOOL)arg1;
+ (BOOL)isValidVideoDestinationPath:(id)arg1;
+ (BOOL)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id *)arg2 videoPersistenceUUID:(id *)arg3 captureDevice:(long long *)arg4 captureOrientation:(long long *)arg5 captureTime:(double *)arg6 persistenceOptions:(long long *)arg7 temporaryPersistenceOptions:(long long *)arg8 bundleIdentifier:(id *)arg9 filterName:(id *)arg10;
+ (id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(BOOL)arg3 bundleIdentifier:(id)arg4;
+ (id)videoPathExtension;

@end

