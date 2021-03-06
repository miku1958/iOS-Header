//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol VKLabelNavFeature

@property (readonly, nonatomic) long long intraRoadPriority;
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) BOOL isOnRoute;
@property (nonatomic) BOOL isPicked;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct PolylineCoordinate routeOffset;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;

- (void)layoutWithNavContext:(struct NavContext *)arg1;
@end

