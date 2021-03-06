//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct UserAcousticProfile *_root;
}

@property (readonly, nonatomic) NSData *acoustic_profile_blob;
@property (readonly, nonatomic) NSString *acoustic_profile_version;
@property (readonly, nonatomic) NSString *profile_checksum;

- (void).cxx_destruct;
- (void)acoustic_profile_blob:(CDUnknownBlockType)arg1;
- (Offset_df5c0371)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserAcousticProfile *)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserAcousticProfile *)arg2 verify:(BOOL)arg3;

@end

