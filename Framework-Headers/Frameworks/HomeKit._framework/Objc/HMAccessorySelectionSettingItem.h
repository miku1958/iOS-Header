//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessorySelectionSetting, NSString, NSUUID;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_title;
    HMAccessorySelectionSetting *_setting;
}

@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (weak) HMAccessorySelectionSetting *setting; // @synthesize setting=_setting;
@property (readonly, copy) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
