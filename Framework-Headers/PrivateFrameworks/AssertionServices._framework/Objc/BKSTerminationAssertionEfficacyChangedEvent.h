//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssertionServices/BKSAssertionEvent.h>

@class NSString;

@interface BKSTerminationAssertionEfficacyChangedEvent : BKSAssertionEvent
{
    unsigned long long _efficacyMask;
    NSString *_targetBundleIdentifier;
}

@property (nonatomic) unsigned long long efficacyMask; // @synthesize efficacyMask=_efficacyMask;
@property (readonly, nonatomic) unsigned long long maxEfficacy;
@property (copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
