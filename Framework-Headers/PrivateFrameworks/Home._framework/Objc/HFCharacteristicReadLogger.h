//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject
{
    NSMutableDictionary *_accessoriesToReadByTransport;
}

@property (strong, nonatomic) NSMutableDictionary *accessoriesToReadByTransport; // @synthesize accessoriesToReadByTransport=_accessoriesToReadByTransport;

+ (id)nameForTransportType:(unsigned long long)arg1;
+ (id)transportKeyForCharacteristic:(id)arg1;
- (void).cxx_destruct;
- (void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2;
- (id)init;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1;

@end

