//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSProcessedImageRequestType-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface NEFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType>
{
    MISSING_TYPE *assetHandles;
    MISSING_TYPE *feedNavImageSize;
    MISSING_TYPE *scale;
    MISSING_TYPE *cornerRadius;
}

@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(struct CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4;

@end
