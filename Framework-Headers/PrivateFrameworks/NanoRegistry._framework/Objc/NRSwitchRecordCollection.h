//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRPBSwitchRecordCollection.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)addSwitchRecordWithHistoryEntry:(id)arg1;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithHistoryEntries:(id)arg1;
- (void)truncateSwitchRecords;

@end

