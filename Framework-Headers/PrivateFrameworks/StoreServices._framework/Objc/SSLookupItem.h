//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property (readonly, nonatomic, getter=isPOIBased) BOOL POIBased;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSArray *artwork;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *categoryNames;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *itemKind;
@property (readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_dictionary;
@property (readonly, nonatomic) long long numberOfUserRatings;
@property (readonly, nonatomic) long long numberOfUserRatingsForCurrentVersion;
@property (readonly, nonatomic) NSArray *offers;
@property (readonly, nonatomic) NSURL *productPageURL;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) float userRatingForCurrentVersion;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;

@end

