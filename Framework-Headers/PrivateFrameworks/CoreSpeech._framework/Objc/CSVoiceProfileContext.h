//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CSVoiceProfileContext : NSObject
{
    NSString *_profileId;
    NSString *_languageCode;
    NSString *_productCategory;
    NSNumber *_version;
    unsigned long long _onboardType;
    NSString *_homeId;
    NSString *_userName;
}

@property (strong, nonatomic) NSString *homeId; // @synthesize homeId=_homeId;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) unsigned long long onboardType; // @synthesize onboardType=_onboardType;
@property (strong, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property (strong, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property (strong, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 sharedHomeId:(id)arg5 userName:(id)arg6;

@end

