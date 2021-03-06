//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPStoreRedownloadProductItem, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface MPStoreRedownloadProductResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // @synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // @synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL;
@property (readonly, nonatomic) MPStoreRedownloadProductItem *item;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;

@end

