//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp
{
    CRVectorTimestamp *_crTimestamp;
}

@property (strong, nonatomic) CRVectorTimestamp *crTimestamp; // @synthesize crTimestamp=_crTimestamp;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;

@end

