//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBagKeySet, AMSProcessInfo, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSourceBuilder : NSObject
{
    AMSBagKeySet *_bagKeySet;
    NSArray *_cookies;
    NSDictionary *_data;
    NSDate *_expirationDate;
    NSString *_profile;
    NSString *_profileVersion;
    AMSProcessInfo *_processInfo;
}

@property (strong, nonatomic) AMSBagKeySet *bagKeySet; // @synthesize bagKeySet=_bagKeySet;
@property (strong, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property (strong, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property (strong, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;

- (void).cxx_destruct;
- (id)createFrozenDataSource;
- (id)initWithFrozenDataSource:(id)arg1;

@end

