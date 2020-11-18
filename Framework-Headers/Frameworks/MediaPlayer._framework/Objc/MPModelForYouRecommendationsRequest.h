//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest
{
    long long _filteringPolicy;
    NSURL *_customForYouURL;
}

@property (copy, nonatomic) NSURL *customForYouURL; // @synthesize customForYouURL=_customForYouURL;
@property (nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end

