//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVASTAnalyticsEventInfoFactory-Protocol.h>

@class NSString;
@protocol SVVisibilityMonitoring, SVVolumeProviding;

@interface SXVASTAnalyticsEventInfoFactory : NSObject <SXVASTAnalyticsEventInfoFactory>
{
    id<SVVisibilityMonitoring> _visibilityMonitor;
    id<SVVolumeProviding> _volumeProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVVisibilityMonitoring> visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
@property (readonly, nonatomic) id<SVVolumeProviding> volumeProvider; // @synthesize volumeProvider=_volumeProvider;

- (void).cxx_destruct;
- (id)createAnalyticsEventInfo;
- (id)createAnalyticsEventInfoWithMetadata:(id)arg1;
- (id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2;
- (id)initWithVisibilityMonitor:(id)arg1 volumeProvider:(id)arg2;

@end
