//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL, PKImage;

@interface PKPhysicalCardArtworkOption : NSObject <NSSecureCoding>
{
    BOOL _optionUnavailable;
    NSString *_identifier;
    NSURL *_frontFaceImageURL;
    unsigned long long _minimumEstimatedShippingTime;
    unsigned long long _maximumEstimatedShippingTime;
    long long _shippingTimeUnit;
    PKImage *_frontFaceImage;
}

@property (strong, nonatomic) PKImage *frontFaceImage; // @synthesize frontFaceImage=_frontFaceImage;
@property (strong, nonatomic) NSURL *frontFaceImageURL; // @synthesize frontFaceImageURL=_frontFaceImageURL;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long maximumEstimatedShippingTime; // @synthesize maximumEstimatedShippingTime=_maximumEstimatedShippingTime;
@property (readonly, nonatomic) unsigned long long minimumEstimatedShippingTime; // @synthesize minimumEstimatedShippingTime=_minimumEstimatedShippingTime;
@property (readonly, nonatomic) BOOL optionUnavailable; // @synthesize optionUnavailable=_optionUnavailable;
@property (readonly, nonatomic) long long shippingTimeUnit; // @synthesize shippingTimeUnit=_shippingTimeUnit;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

