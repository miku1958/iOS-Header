//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPLinkMetadata, LPURLFetcher;

__attribute__((visibility("hidden")))
@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    BOOL _cancelled;
    LPURLFetcher *_fetcher;
    LPLinkMetadata *_metadata;
    CDUnknownBlockType _completionHandler;
}

+ (BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (unsigned long long)specialization;
- (void).cxx_destruct;

@end
