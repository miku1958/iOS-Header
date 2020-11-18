//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioTrackPlaybackDescriptor.h>

@class NSDate, NSDictionary;

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor
{
}

@property (nonatomic, getter=isCurrent) BOOL current; // @dynamic current;
@property (strong, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property (nonatomic) double pauseTime; // @dynamic pauseTime;
@property (strong, nonatomic) NSDate *skipDate; // @dynamic skipDate;
@property (nonatomic) long long storeID; // @dynamic storeID;
@property (copy, nonatomic) NSDictionary *trackInfo; // @dynamic trackInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
