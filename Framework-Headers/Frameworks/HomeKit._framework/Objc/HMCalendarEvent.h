//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDateComponents;

@interface HMCalendarEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSDateComponents *_fireDateComponents;
}

@property (strong, nonatomic) NSDateComponents *fireDateComponents; // @synthesize fireDateComponents=_fireDateComponents;

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateFireDateComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 fireDateComponents:(id)arg2;
- (id)initWithFireDateComponents:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)updateFireDateComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
