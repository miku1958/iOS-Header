//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol WKURLSchemeTask;

@interface _TtC7NewsUI225NewsAssetURLSchemeHandler : NSObject
{
    MISSING_TYPE *task;
    MISSING_TYPE *assetFetchService;
    MISSING_TYPE *resourceIdentifier;
    MISSING_TYPE *cancelHandler;
}

@property (nonatomic, readonly) id<WKURLSchemeTask> task; // @synthesize task;

- (void).cxx_destruct;
- (void)cancel;
- (void)finish;
- (id)init;
- (void)start;

@end

