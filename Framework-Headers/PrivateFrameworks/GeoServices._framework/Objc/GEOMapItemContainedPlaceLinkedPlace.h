//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOPDLinkedPlace;

__attribute__((visibility("hidden")))
@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem
{
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (void).cxx_destruct;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (id)_identifier;
- (BOOL)_isInLinkedPlaceRelationship;
- (unsigned long long)_muid;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (id)_styleAttributes;
- (CDStruct_c3b9c2ee)coordinate;
- (id)description;
- (id)initWithLinkedPlace:(id)arg1;
- (BOOL)isValid;
- (id)name;
- (int)referenceFrame;

@end
