//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/NSObject-Protocol.h>

@class NSSet, PHMediaFormatConversionRequest;

@protocol PHMediaFormatConversionImplementation <NSObject>

@property (readonly) long long transferBehaviorUserPreference;
@property (readonly) NSSet *ut_objectsToBeDeallocatedWithReceiver;

- (void)performConversionRequest:(PHMediaFormatConversionRequest *)arg1 completionHandler:(void (^)(void))arg2;

@optional
@end

