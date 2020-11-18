//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssertionServices/BKSProcessAssertionUpdateEvent.h>

@class NSString;

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent
{
    unsigned int _reason;
    NSString *_targetBundleIdentifier;
    int _targetPID;
}

@property (nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property (copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property (nonatomic) int targetPID; // @synthesize targetPID=_targetPID;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
