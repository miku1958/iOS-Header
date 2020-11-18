//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, NSURL;

@interface CPLMomentShare : NSObject <NSSecureCoding, NSCopying>
{
    short _mode;
    NSString *_identifier;
    NSString *_title;
    NSDate *_creationDate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_expiryDate;
    long long _assetCount;
    long long _photosCount;
    long long _videosCount;
    NSData *_thumbnailImageData;
    NSData *_previewData;
    NSArray *_participants;
    NSURL *_shareURL;
    NSString *_originatingScopeIdentifier;
}

@property (nonatomic) long long assetCount; // @synthesize assetCount=_assetCount;
@property (copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) short mode; // @synthesize mode=_mode;
@property (copy, nonatomic) NSString *originatingScopeIdentifier; // @synthesize originatingScopeIdentifier=_originatingScopeIdentifier;
@property (copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property (nonatomic) long long photosCount; // @synthesize photosCount=_photosCount;
@property (copy, nonatomic) NSData *previewData; // @synthesize previewData=_previewData;
@property (copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (copy, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long videosCount; // @synthesize videosCount=_videosCount;

+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopeChange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)translateToScopeChangeWithScopeType:(long long)arg1;
- (void)updateScopeChange:(id)arg1;

@end
