//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@class HMBLocalZone, NSDictionary;

@interface HMBLocalZoneQueryResult : HMBSQLQueryIterator
{
    int _zoneRowBindOffset;
    HMBLocalZone *_localZone;
    unsigned long long _zoneRow;
    NSDictionary *_arguments;
}

@property (readonly, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property (readonly, weak, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property (readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property (readonly, nonatomic) int zoneRowBindOffset; // @synthesize zoneRowBindOffset=_zoneRowBindOffset;

+ (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 arguments:(id)arg2 zoneBindRowOffset:(int)arg3 zoneRow:(unsigned long long)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 arguments:(id)arg4 maximumRowsPerSelect:(unsigned long long)arg5;

@end
