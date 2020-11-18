//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSHTTPURLResponse, NSURL;

@interface SSVPlaybackResponse : NSObject <NSCopying>
{
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_urlResponse;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_urlResponse;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // @synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // @synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;

- (void).cxx_destruct;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 URLResponse:(id)arg2;
- (id)itemForItemIdentifier:(id)arg1;

@end
