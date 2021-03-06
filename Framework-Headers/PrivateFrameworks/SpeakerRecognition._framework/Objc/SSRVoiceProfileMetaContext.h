//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SSRVoiceProfileMetaContext : NSObject
{
    NSString *_appDomain;
    NSString *_profileId;
    NSString *_languageCode;
    NSString *_productCategory;
    NSNumber *_version;
    NSDate *_dateAdded;
    NSNumber *_pitch;
    NSString *_sharedSiriId;
    NSString *_homeId;
    NSString *_userName;
}

@property (strong, nonatomic) NSString *appDomain; // @synthesize appDomain=_appDomain;
@property (strong, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property (strong, nonatomic) NSString *homeId; // @synthesize homeId=_homeId;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (strong, nonatomic) NSNumber *pitch; // @synthesize pitch=_pitch;
@property (strong, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property (strong, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property (strong, nonatomic) NSString *sharedSiriId; // @synthesize sharedSiriId=_sharedSiriId;
@property (strong, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4;
- (id)initWithVoiceProfile:(id)arg1;

@end

