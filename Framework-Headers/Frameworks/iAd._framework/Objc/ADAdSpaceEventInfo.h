//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/NSSecureCoding-Protocol.h>

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding>
{
    unsigned long long _screenfuls;
    long long _lastErrorCode;
}

@property (nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property (nonatomic) unsigned long long screenfuls; // @synthesize screenfuls=_screenfuls;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipient:(id)arg1;

@end

