//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoImpressionTracking;

@protocol SVVideoImpressionTrackerFactory <NSObject>
- (id<SVVideoImpressionTracking>)createImpressionTrackerForVideo:(id<SVVideo>)arg1;
@end

