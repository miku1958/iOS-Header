//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFHomeKitItemProtocol-Protocol.h>
#import <HomeUI/HFServiceVendor-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@protocol HFCharacteristicValueSource;

@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFServiceVendor, NSCopying>

@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;

- (id)copyWithValueSource:(id<HFCharacteristicValueSource>)arg1;
@end
