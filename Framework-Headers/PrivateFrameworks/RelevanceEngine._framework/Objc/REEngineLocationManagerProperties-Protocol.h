//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class CLLocation, RELocationManager;

@protocol REEngineLocationManagerProperties <REExportedInterface>

@property (readonly) CLLocation *location;
@property (readonly, nonatomic) RELocationManager *locationManager;
@property (readonly, nonatomic) BOOL monitoringLocation;

@end
