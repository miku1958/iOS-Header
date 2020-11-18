//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest
{
    NSArray *_subrequests;
}

@property (strong) NSArray *subrequests; // @synthesize subrequests=_subrequests;

- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (id)outputFileType;
- (id)outputPathExtension;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)prepareWithError:(id *)arg1;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;

@end
