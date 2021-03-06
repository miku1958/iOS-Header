//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDate, REMChangeToken;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    REMChangeToken *_lastConsumedChangeToken;
    NSDate *_lastConsumedDate;
}

@property (strong, nonatomic) REMChangeToken *lastConsumedChangeToken; // @synthesize lastConsumedChangeToken=_lastConsumedChangeToken;
@property (strong, nonatomic) NSDate *lastConsumedDate; // @synthesize lastConsumedDate=_lastConsumedDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

