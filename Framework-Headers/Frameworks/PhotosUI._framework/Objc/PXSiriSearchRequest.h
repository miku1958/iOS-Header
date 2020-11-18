//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PXSiriSearchRequest : NSObject <NSSecureCoding>
{
    NSArray *_queryTokens;
}

@property (strong, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_queryTokensForActivities:(id)arg1;
- (id)_queryTokensForAlbumName:(id)arg1;
- (id)_queryTokensForDateCreated:(id)arg1;
- (id)_queryTokensForEvents:(id)arg1;
- (id)_queryTokensForGeographicalFeatures:(id)arg1;
- (id)_queryTokensForLocationCreated:(id)arg1;
- (id)_queryTokensForPeopleInPhoto:(id)arg1 peopleInPhotoOperator:(long long)arg2;
- (id)_queryTokensForPhotoAttributeOptions:(unsigned long long)arg1;
- (id)_queryTokensForPlaces:(id)arg1;
- (id)_queryTokensForSearchTerms:(id)arg1 searchTermsOperator:(long long)arg2;
- (BOOL)_useNLDateSearch;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchForPhotosIntent:(id)arg1;
- (id)initWithStartPhotoPlaybackIntent:(id)arg1;

@end
