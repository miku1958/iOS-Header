//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTMetricLogger-Protocol.h>

@class NSString;

@interface IDSAWDLogger : NSObject <CUTMetricLogger>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logger;
- (void)logMetric:(id)arg1;

@end

