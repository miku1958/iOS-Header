//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSNumber, NSString;

@interface _DKSource : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    NSString *_sourceID;
    NSString *_bundleID;
    NSString *_itemID;
    NSString *_groupID;
    NSString *_deviceID;
    NSNumber *_userID;
}

@property (readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (readonly) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *itemID; // @synthesize itemID=_itemID;
@property (readonly) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property (readonly) Class superclass;
@property (readonly) NSString *syncDeviceID;
@property (strong) NSNumber *userID; // @synthesize userID=_userID;

+ (id)defaultSourceID;
+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)intentsSourceID;
+ (id)sourceForInteraction:(id)arg1 bundleID:(id)arg2;
+ (id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2;
+ (id)spotlightSourceID;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)toPBCodable;

@end

