//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CTCarrier : NSObject
{
    NSString *_carrierName;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_isoCountryCode;
    BOOL _allowsVOIP;
}

@property (nonatomic) BOOL allowsVOIP; // @synthesize allowsVOIP=_allowsVOIP;
@property (strong, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property (strong, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (strong, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property (strong, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

