//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBApplicationTerminationAssertion : NSObject
{
    NSString *_bundleID;
    NSString *_reason;
    unsigned long long _serialNumber;
    id _plugInHoldToken;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) id plugInHoldToken; // @synthesize plugInHoldToken=_plugInHoldToken;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

