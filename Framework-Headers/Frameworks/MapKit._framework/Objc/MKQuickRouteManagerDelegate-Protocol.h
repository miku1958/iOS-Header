//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@protocol MKQuickRouteManagerDelegate <NSObject>
- (BOOL)quickRouteShouldIncludeTransit;
- (BOOL)quickRouteShouldOnlyUseAutomobile;

@optional
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
@end
