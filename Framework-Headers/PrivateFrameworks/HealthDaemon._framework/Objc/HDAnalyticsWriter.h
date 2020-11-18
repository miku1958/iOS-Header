//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;

@interface HDAnalyticsWriter : NSObject
{
    HDProfile *_profile;
    struct __SecCertificate *_certificate;
    NSString *_analyticsDirectory;
}

+ (id)_payloadIdentifierForBugType:(id)arg1;
- (void).cxx_destruct;
- (id)URLForAnalyticsFileWithName:(id)arg1;
- (BOOL)_cleanAnalyticsDirectory:(id)arg1 error:(id *)arg2;
- (BOOL)_createAnalyticsDirectory:(id)arg1 error:(id *)arg2;
- (BOOL)_loadCertificateWithError:(id *)arg1;
- (id)analyticsFilePathsWithError:(id *)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (BOOL)submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 error:(id *)arg3;

@end

