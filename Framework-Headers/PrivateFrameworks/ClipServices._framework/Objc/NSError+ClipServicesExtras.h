//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (ClipServicesExtras)

@property (readonly, nonatomic) BOOL cps_isUserCanceledError;
@property (readonly, copy, nonatomic) NSString *cps_privacyPreservingDescription;

+ (id)cps_errorWithCode:(long long)arg1;
+ (id)cps_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
@end

