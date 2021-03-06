//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class AVAssetImageGenerator, LPLinkMetadata, LPMediaAssetFetcher;

__attribute__((visibility("hidden")))
@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    BOOL _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)done;
- (void)fail;
- (void)start;

@end

