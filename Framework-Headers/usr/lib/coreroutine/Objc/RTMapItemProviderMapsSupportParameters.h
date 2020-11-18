//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTMapItemProviderMapsSupportParameters : NSObject
{
    double _favoriteConfidence;
    double _historyEntryRouteConfidence;
    double _historyEntryPlaceDisplayConfidence;
}

@property (readonly, nonatomic) double favoriteConfidence; // @synthesize favoriteConfidence=_favoriteConfidence;
@property (readonly, nonatomic) double historyEntryPlaceDisplayConfidence; // @synthesize historyEntryPlaceDisplayConfidence=_historyEntryPlaceDisplayConfidence;
@property (readonly, nonatomic) double historyEntryRouteConfidence; // @synthesize historyEntryRouteConfidence=_historyEntryRouteConfidence;

- (id)description;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1;
- (id)initWithFavoriteConfidence:(double)arg1 historyEntryRouteConfidence:(double)arg2 historyEntryPlaceDisplayConfidence:(double)arg3;

@end
