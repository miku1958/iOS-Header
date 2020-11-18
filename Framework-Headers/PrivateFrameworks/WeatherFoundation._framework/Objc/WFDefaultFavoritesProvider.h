//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFFavoriteLocationProvider-Protocol.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>
{
    id<WFFavoriteLocationProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLocation:(id)arg1;
- (BOOL)canProvideDefaultFavorites;
- (id)init;
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;
- (id)locationFromCity:(id)arg1;
- (id)locations;
- (void)removeLocation:(id)arg1;
- (void)setLocations:(id)arg1;

@end

