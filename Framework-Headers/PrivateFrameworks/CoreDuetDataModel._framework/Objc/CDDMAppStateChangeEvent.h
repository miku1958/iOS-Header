//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface CDDMAppStateChangeEvent : NSManagedObject
{
}

@property (strong, nonatomic) NSNumber *anonymizedBeacon; // @dynamic anonymizedBeacon;
@property (strong, nonatomic) NSNumber *anonymizedLocation; // @dynamic anonymizedLocation;
@property (strong, nonatomic) NSNumber *appState; // @dynamic appState;
@property (strong, nonatomic) NSNumber *computeUtilization; // @dynamic computeUtilization;
@property (strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (strong, nonatomic) NSNumber *integerId; // @dynamic integerId;
@property (strong, nonatomic) NSNumber *ioBytes; // @dynamic ioBytes;
@property (strong, nonatomic) NSNumber *ioBytesRead; // @dynamic ioBytesRead;
@property (strong, nonatomic) NSNumber *ioBytesWritten; // @dynamic ioBytesWritten;
@property (strong, nonatomic) NSNumber *isFront; // @dynamic isFront;
@property (strong, nonatomic) NSNumber *localDaysSinceSunday; // @dynamic localDaysSinceSunday;
@property (strong, nonatomic) NSNumber *localTime; // @dynamic localTime;
@property (strong, nonatomic) NSNumber *localTimeQuarterHourSlot; // @dynamic localTimeQuarterHourSlot;
@property (strong, nonatomic) NSNumber *memoryPhysicalFootprint; // @dynamic memoryPhysicalFootprint;
@property (strong, nonatomic) NSNumber *networkBytes; // @dynamic networkBytes;
@property (strong, nonatomic) NSNumber *networkQuality; // @dynamic networkQuality;
@property (strong, nonatomic) NSNumber *networkRxBytes; // @dynamic networkRxBytes;
@property (strong, nonatomic) NSNumber *networkTxBytes; // @dynamic networkTxBytes;
@property (strong, nonatomic) NSNumber *runReason; // @dynamic runReason;
@property (strong, nonatomic) NSNumber *usedCellData; // @dynamic usedCellData;
@property (strong, nonatomic) NSNumber *userId; // @dynamic userId;

@end

