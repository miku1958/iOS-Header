//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, TPSURLSessionItem;

@interface HLPRemoteDataController : NSObject
{
    BOOL _loading;
    BOOL _hasLoaded;
    NSURL *_URL;
    NSDictionary *_headerFields;
    TPSURLSessionItem *_URLSessionItem;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) TPSURLSessionItem *URLSessionItem; // @synthesize URLSessionItem=_URLSessionItem;
@property (nonatomic) BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property (strong, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property (nonatomic) BOOL loading; // @synthesize loading=_loading;

- (void).cxx_destruct;
- (void)cancel;
- (void)clearData;
- (void)dealloc;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

