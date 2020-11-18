//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>
{
    NSNumber *_DSID;
    NSString *_phoneNumber;
    NSString *_storefrontIdentifier;
}

@property (copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentationIncludingDSID:(BOOL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(BOOL)arg2;
- (id)initWithStringRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)stringRepresentation;

@end
