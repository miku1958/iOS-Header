//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTUserLanguageProfile.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableUserLanguageProfile : FTUserLanguageProfile
{
}

@property (copy, nonatomic) NSData *profile_blob;
@property (copy, nonatomic) NSString *profile_blob_version;
@property (copy, nonatomic) NSString *profile_checksum;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)profile_blob:(CDUnknownBlockType)arg1;

@end

