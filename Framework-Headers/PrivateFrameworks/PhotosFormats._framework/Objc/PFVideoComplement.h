//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PFVideoComplement : NSObject
{
    NSString *_imagePath;
    NSString *_videoPath;
    NSDictionary *_metadata;
    NSString *_originalPairingIdentifier;
    CDStruct_1b6d18a9 _originalImageDisplayTime;
    CDStruct_1b6d18a9 _originalVideoDuration;
    BOOL _didReadOriginalMetadata;
}

@property (readonly, nonatomic) CDStruct_1b6d18a9 imageDisplayTime;
@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property (readonly, nonatomic) CDStruct_1b6d18a9 originalImageDisplayTime;
@property (readonly, copy, nonatomic) NSString *originalPairingIdentifier;
@property (readonly, nonatomic) CDStruct_1b6d18a9 originalVideoDuration;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

+ (id)currentFormatVersion;
- (void).cxx_destruct;
- (void)_readMetadataIfNeeded;
- (id)init;
- (id)initWithBundleAtURL:(id)arg1;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(CDStruct_1b6d18a9)arg3 pairingIdentifier:(id)arg4;
- (id)initWithPropertyList:(id)arg1;
- (BOOL)linkOrCopyPath:(id)arg1 toPath:(id)arg2 forceCopy:(BOOL)arg3 error:(id *)arg4;
- (id)propertyListRepresentation;
- (BOOL)writeToBundleAtURL:(id)arg1 error:(id *)arg2;

@end

