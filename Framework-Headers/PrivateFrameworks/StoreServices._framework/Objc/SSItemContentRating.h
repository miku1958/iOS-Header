//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, SSItemArtworkImage;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) NSDictionary *contentRatingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (readonly, nonatomic) SSItemArtworkImage *ratingSystemLogo;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted;
@property (readonly) Class superclass;

+ (long long)ratingSystemFromString:(id)arg1;
+ (id)stringForRatingSystem:(long long)arg1;
- (BOOL)_isRatingSystemForApps:(long long)arg1;
- (BOOL)_isRatingSystemForMovies:(long long)arg1;
- (BOOL)_isRatingSystemForMusic:(long long)arg1;
- (BOOL)_isRatingSystemForTV:(long long)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end

