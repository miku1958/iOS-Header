//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse
{
    NSArray *_bundleIDs;
}

@property (readonly, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property BOOL success; // @dynamic success;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
