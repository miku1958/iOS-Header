//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INHomeEntityExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INHomeEntity : NSObject <INHomeEntityExport, NSCopying, NSSecureCoding>
{
    NSString *_name;
    long long _type;
    long long _deviceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end

