//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol RTCReportingDeallocNotifierDelegate;

@interface RTCReportingDeallocNotifier : NSObject
{
    id<RTCReportingDeallocNotifierDelegate> _delegate;
}

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
