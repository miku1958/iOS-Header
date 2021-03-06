//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface STRegionRatings : NSObject
{
    NSDictionary *_ratingsPlist;
}

@property (readonly, copy) NSArray *localizedRegionAndCodePairs;
@property (readonly, copy) NSDictionary *localizedRegionsByCode;
@property (readonly, copy) NSString *preferredRegion;
@property (readonly) NSDictionary *ratingsPlist; // @synthesize ratingsPlist=_ratingsPlist;

+ (id)sharedRatings;
- (void).cxx_destruct;
- (id)_localizedLabelForRegion:(id)arg1 rating:(id)arg2;
- (id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4;
- (id)_overrideValueForString:(id)arg1;
- (id)init;
- (id)localizedAppRatingsForRegion:(id)arg1;
- (id)localizedMovieRatingsForRegion:(id)arg1;
- (id)localizedStringForAppRatingLabel:(id)arg1;
- (id)localizedTVRatingsForRegion:(id)arg1;

@end

