//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@interface NSProgress (GEOExtras)
+ (id)_geo_mirroredProgressForReceivingOverXPC:(id *)arg1;
+ (id)_geo_mirroredProgressFromReceivingXPCEndpoint:(id)arg1;
+ (id)_geo_mirroredProgressFromReportingXPCEndpoint:(id)arg1 totalUnitCount:(long long)arg2;
+ (id)_geo_newReportingXPCEndpointMirroringProgress:(id)arg1;
+ (id)_geo_progressMirroringProgress:(id)arg1;
- (void)_geo_mirroredProgressReplaceObservedProgressWith:(id)arg1;
@end
