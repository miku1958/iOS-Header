//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeProviderVersion-Protocol.h>
#import <PencilKit/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion>
{
    NSMutableDictionary *_clock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (long long)compareClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (unsigned long long)compareTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)incrementClockForUUID:(id)arg1;
- (id)init;
- (id)initWithArchive:(const struct VectorTimestamp *)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (void)saveToArchive:(struct VectorTimestamp *)arg1;
- (id)serialize;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)shortDescription;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;

@end

