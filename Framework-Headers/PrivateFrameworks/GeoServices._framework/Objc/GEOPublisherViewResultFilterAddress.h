//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, GEOPDEntity, GEOPDPublisherViewResultFilterAddress, NSString;

@interface GEOPublisherViewResultFilterAddress : NSObject
{
    GEOPDPublisherViewResultFilterAddress *_filterAddressIdentifier;
    GEOPDEntity *_placeEntity;
}

@property (readonly, nonatomic) GEOPDPublisherViewResultFilterAddress *addressIdentifier;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) GEOMapItemIdentifier *filterAddressIdentifier;

- (void).cxx_destruct;
- (id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2;

@end

