//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTUserAcousticProfile.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableUserAcousticProfile : FTUserAcousticProfile
{
}

@property (copy, nonatomic) NSData *acoustic_profile_blob;
@property (copy, nonatomic) NSString *acoustic_profile_version;
@property (copy, nonatomic) NSString *profile_checksum;

- (void)acoustic_profile_blob:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

