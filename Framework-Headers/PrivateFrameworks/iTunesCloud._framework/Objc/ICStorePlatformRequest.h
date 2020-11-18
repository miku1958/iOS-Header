//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, NSArray, NSDictionary, NSString;

@interface ICStorePlatformRequest : NSObject <NSCopying>
{
    BOOL _returnsLocalEquivalencies;
    BOOL _shouldIgnoreCache;
    NSString *_clientIdentifier;
    NSString *_clientBundleIdentifier;
    NSString *_clientBundleVersion;
    NSArray *_itemIdentifiers;
    long long _batchSize;
    CDUnknownBlockType _batchResultsHandler;
    NSString *_imageProfile;
    NSString *_keyProfile;
    long long _personalizationStyle;
    NSString *_platformIdentifier;
    NSString *_protocolVersion;
    double _timeoutInterval;
    long long _qualityOfService;
    ICStoreRequestContext *_requestContext;
}

@property (readonly, copy, nonatomic) NSDictionary *HTTPHeaders;
@property (copy, nonatomic) CDUnknownBlockType batchResultsHandler; // @synthesize batchResultsHandler=_batchResultsHandler;
@property (nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property (copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property (copy, nonatomic) NSString *clientBundleVersion; // @synthesize clientBundleVersion=_clientBundleVersion;
@property (copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (copy, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property (copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property (copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property (nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property (copy, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property (copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (readonly, copy, nonatomic) NSArray *queryItems;
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (nonatomic) BOOL returnsLocalEquivalencies; // @synthesize returnsLocalEquivalencies=_returnsLocalEquivalencies;
@property (nonatomic) BOOL shouldIgnoreCache; // @synthesize shouldIgnoreCache=_shouldIgnoreCache;
@property (nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;

- (void).cxx_destruct;
- (id)copyWithItemIdentifiersInRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end

