//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSArray, NSOperation, WFLocation;
@protocol WFFavoriteLocationProviderDelegate, WeatherPreferencesPersistence;

@protocol WFFavoriteLocationProvider <NSObject>

@property (weak, nonatomic) id<WFFavoriteLocationProviderDelegate> delegate;

- (void)addLocation:(WFLocation *)arg1;
- (id)initWithDelegate:(id<WFFavoriteLocationProviderDelegate>)arg1 persistence:(id<WeatherPreferencesPersistence>)arg2;
- (NSArray *)locations;
- (void)removeLocation:(WFLocation *)arg1;
- (void)setLocations:(NSArray *)arg1;

@optional
- (NSOperation *)migrationOperation;
@end

