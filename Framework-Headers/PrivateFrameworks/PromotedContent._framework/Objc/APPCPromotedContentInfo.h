//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APPCNativeRepresentation, MISSING_TYPE, NSString;
@protocol APPCLifecycleMetricsHelping;

@interface APPCPromotedContentInfo : NSObject
{
    MISSING_TYPE *promotedContent;
    MISSING_TYPE *metricsHelper;
    MISSING_TYPE *ready;
    MISSING_TYPE *unfilledReason;
    MISSING_TYPE *placeholder;
}

@property (nonatomic, readonly) long long desiredPosition;
@property (nonatomic, readonly) long long errorReason;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id<APPCLifecycleMetricsHelping> metricsHelper; // @synthesize metricsHelper;
@property (nonatomic, readonly) APPCNativeRepresentation *nativeInfo;
@property (nonatomic) BOOL placeholder; // @synthesize placeholder;
@property (nonatomic, readonly) CDUnknownBlockType ready;
@property (nonatomic) long long unfilledReason; // @synthesize unfilledReason;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

