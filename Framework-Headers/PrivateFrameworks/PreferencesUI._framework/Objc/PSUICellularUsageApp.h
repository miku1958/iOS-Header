//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PSUICellularUsageApp : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_displayName;
    double _totalBytesUsed;
    double _roamingBytesUsed;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) double roamingBytesUsed; // @synthesize roamingBytesUsed=_roamingBytesUsed;
@property (nonatomic) double totalBytesUsed; // @synthesize totalBytesUsed=_totalBytesUsed;

- (void).cxx_destruct;

@end

