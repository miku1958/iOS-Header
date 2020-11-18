//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding>
{
    BOOL _obsolete;
    NSString *_channelID;
    NSString *_displayName;
    unsigned long long _accessStatus;
    NSString *_externalID;
}

@property (nonatomic) unsigned long long accessStatus; // @synthesize accessStatus=_accessStatus;
@property (readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property (nonatomic) BOOL obsolete; // @synthesize obsolete=_obsolete;

+ (BOOL)isExternalID:(id)arg1 equalToExternalID:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONDictionary;
- (id)_statusStrings;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAppSettings:(id)arg1;

@end
