//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTDirectionsRequester : NSObject
{
}

+ (int)geoTransportTypeForRTTransportType:(int)arg1;
+ (struct NSArray *)routeForGEORoute:(id)arg1;
- (void)routesFromSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 maxRouteCount:(unsigned int)arg4 handler:(CDUnknownBlockType)arg5;

@end

