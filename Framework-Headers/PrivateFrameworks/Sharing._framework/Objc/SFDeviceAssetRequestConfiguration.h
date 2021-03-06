//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFDeviceAssetRequestConfiguration : NSObject
{
    CDUnknownBlockType _queryResultHandler;
    double _timeout;
    CDUnknownBlockType _downloadCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType downloadCompletionHandler; // @synthesize downloadCompletionHandler=_downloadCompletionHandler;
@property (readonly, copy, nonatomic) CDUnknownBlockType queryResultHandler; // @synthesize queryResultHandler=_queryResultHandler;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryResultHandler:(CDUnknownBlockType)arg1;

@end

