//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (MapKitAdditions)

@property (readonly, nonatomic, getter=_mapkit_isCLDenied) BOOL _mapkit_CLDenied;
@property (readonly, nonatomic, getter=_mapkit_isCLErrorNetwork) BOOL _mapkit_CLErrorNetwork;
@property (readonly, nonatomic, getter=_mapkit_isCLHeadingFailure) BOOL _mapkit_CLHeadingFailure;
@property (readonly, nonatomic, getter=_mapkit_isCLLocationUnknown) BOOL _mapkit_CLLocationUnknown;
@property (readonly, strong, nonatomic) NSURL *_mapkit_locationErrorSettingsURL;

+ (id)_errorWithExtensionServiceError:(long long)arg1;
- (long long)_mapkit_directionsErrorCode;
- (id)_mapkit_error;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (BOOL)_mapkit_isDirectionsError;
- (id)_mapkit_transitIncident;
- (long long)_mapkit_underlyingGEOError;
@end
