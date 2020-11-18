//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStickerRecord-Protocol.h>
#import <AvatarUI/NSCopying-Protocol.h>
#import <AvatarUI/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface AVTStickerRecord : NSObject <AVTStickerRecord, NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_avatarRecordIdentifier;
    NSString *_stickerConfigurationIdentifier;
    NSNumber *_frequencySum;
    NSNumber *_serializationVersion;
}

@property (readonly, copy, nonatomic) NSString *avatarRecordIdentifier; // @synthesize avatarRecordIdentifier=_avatarRecordIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *frequencySum; // @synthesize frequencySum=_frequencySum;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSNumber *serializationVersion; // @synthesize serializationVersion=_serializationVersion;
@property (readonly, copy, nonatomic) NSString *stickerConfigurationIdentifier; // @synthesize stickerConfigurationIdentifier=_stickerConfigurationIdentifier;
@property (readonly) Class superclass;

+ (CDUnknownBlockType)matchingIdentifierTest:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 avatarRecordIdentifier:(id)arg2 stickerConfigurationIdentifier:(id)arg3 frequencySum:(id)arg4 serializationVersion:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end
