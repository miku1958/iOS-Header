//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReportingContainer-Protocol.h>

@class NSString;
@protocol SXAnalyticsReporting;

@interface SXAnalyticsReportingContainer : NSObject <SXAnalyticsReportingContainer>
{
    id<SXAnalyticsReporting> _analyticsReporting;
}

@property (readonly, weak, nonatomic) id<SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)registerAnalyticsReporting:(id)arg1;

@end

