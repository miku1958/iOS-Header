//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioPlayEventCollection.h>

@class NSString;

@interface RadioMutablePlayEventCollection : RadioPlayEventCollection
{
}

@property (copy, nonatomic) NSString *deviceName; // @dynamic deviceName;

- (void)addPlayEvents:(id)arg1 forStation:(id)arg2;
- (void)addPlayEvents:(id)arg1 forStationHash:(id)arg2 stationID:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
