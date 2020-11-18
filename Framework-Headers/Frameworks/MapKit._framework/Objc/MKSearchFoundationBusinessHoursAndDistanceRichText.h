//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKSearchFoundationRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText
{
    BOOL _businessHoursResolved;
    BOOL _distanceResolved;
}

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved; // @synthesize businessHoursResolved=_businessHoursResolved;
@property (getter=isDistanceResolved) BOOL distanceResolved; // @synthesize distanceResolved=_distanceResolved;

- (BOOL)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2;
- (void)resolveDistanceNotFound;
- (void)resolveDistanceString:(id)arg1 lines:(id)arg2;

@end

