//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
    long long _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    long long _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    BOOL _shouldHideWhenRestricted;
}

@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic) long long rank; // @synthesize rank=_rank;
@property (copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property (nonatomic) long long ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property (copy, nonatomic) SSItemArtworkImage *ratingSystemLogo; // @synthesize ratingSystemLogo=_ratingSystemLogo;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted; // @synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted;

+ (long long)ratingSystemFromString:(id)arg1;
- (BOOL)_isRatingSystemForApps:(long long)arg1;
- (BOOL)_isRatingSystemForMovies:(long long)arg1;
- (BOOL)_isRatingSystemForMusic:(long long)arg1;
- (BOOL)_isRatingSystemForTV:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end

