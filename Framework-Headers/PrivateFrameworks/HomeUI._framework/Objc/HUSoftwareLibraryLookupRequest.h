//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NSCopying-Protocol.h>

@class HMAccessory, NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSString *_storeID;
    HMAccessory *_accessory;
}

@property (readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithBundleID:(id)arg1 storeID:(id)arg2;

@end
