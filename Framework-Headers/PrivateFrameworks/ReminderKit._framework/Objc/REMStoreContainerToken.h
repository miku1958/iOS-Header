//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface REMStoreContainerToken : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
}

@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

