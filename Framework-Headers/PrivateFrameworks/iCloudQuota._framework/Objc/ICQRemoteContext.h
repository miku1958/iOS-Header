//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuota/NSSecureCoding-Protocol.h>

@class ICQOffer, NSData;

@interface ICQRemoteContext : NSObject <NSSecureCoding>
{
    ICQOffer *_offer;
    NSData *_flowOptionsData;
}

@property (readonly, nonatomic) NSData *flowOptionsData; // @synthesize flowOptionsData=_flowOptionsData;
@property (readonly, nonatomic) ICQOffer *offer; // @synthesize offer=_offer;

+ (id)ICQContextFromRemoteAlertContext:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_serializedData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOffer:(id)arg1 flowOptionsData:(id)arg2;
- (id)toDictionary;

@end
