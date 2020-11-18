//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject
{
    NSString *_iphone;
    NSString *_ipad;
    NSString *_ipod;
    NSString *_appletv;
    NSString *_mac;
    NSString *_watch;
}

@property (readonly, nonatomic) NSString *appletv; // @synthesize appletv=_appletv;
@property (readonly, nonatomic) NSString *ipad; // @synthesize ipad=_ipad;
@property (readonly, nonatomic) NSString *iphone; // @synthesize iphone=_iphone;
@property (readonly, nonatomic) NSString *ipod; // @synthesize ipod=_ipod;
@property (readonly, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property (readonly, nonatomic) NSString *watch; // @synthesize watch=_watch;

+ (id)fromDeviceVersion;
- (void).cxx_destruct;
- (long long)compare:(id)arg1 deviceClass:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

