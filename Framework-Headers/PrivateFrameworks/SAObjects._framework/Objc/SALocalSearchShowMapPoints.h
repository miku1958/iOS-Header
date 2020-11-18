//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, SALocalSearchCarRouteOptions, SALocalSearchMapItem, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand
{
}

@property (copy, nonatomic) NSDate *arrivalDate;
@property (strong, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property (nonatomic) BOOL chainResultSet;
@property (copy, nonatomic) NSDate *departureDate;
@property (copy, nonatomic) NSString *directionsType;
@property (strong, nonatomic) SALocalSearchMapItem *itemDestination;
@property (strong, nonatomic) SALocalSearchMapItem *itemSource;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) BOOL searchAlongRoute;
@property (strong, nonatomic) SALocalSearchMapItemList *searchItems;
@property (nonatomic) BOOL showDirections;
@property (nonatomic) BOOL showTraffic;
@property (nonatomic) BOOL suppressNavigation;

+ (id)showMapPoints;
+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

