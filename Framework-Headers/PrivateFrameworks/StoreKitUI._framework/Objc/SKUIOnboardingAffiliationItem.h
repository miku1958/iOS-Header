//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL, UIColor;

@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying>
{
    UIColor *_fillColor;
    NSString *_identifier;
    NSString *_imageName;
    NSString *_imageTreatment;
    NSURL *_imageURL;
    NSString *_title;
    long long _userAffinityCount;
}

@property (copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (copy, nonatomic) NSString *imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property (copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long userAffinityCount; // @synthesize userAffinityCount=_userAffinityCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

