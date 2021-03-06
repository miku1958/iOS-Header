//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEHotspotNetwork : NSObject
{
    struct __CNNetwork *_network;
}

@property (readonly) NSString *BSSID;
@property (readonly) NSString *SSID;
@property (readonly) NSString *interfaceName;
@property struct __CNNetwork *network; // @synthesize network=_network;

+ (void)fetchCurrentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (id)initWithNetwork:(struct __CNNetwork *)arg1;
- (BOOL)isChosenHelper;
- (BOOL)isSecure;
- (void)setConfidence:(long long)arg1;
- (void)setPassword:(id)arg1;
- (double)signalStrength;

@end

