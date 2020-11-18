//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTEventHistogram-Protocol.h>

@class NSString;

@interface RTEventHistogramBase : NSObject <RTEventHistogram, NSSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 weight:(double)arg2;
- (void)addEventId:(id)arg1;
- (void)addEventId:(id)arg1 weight:(double)arg2;
- (void)addEventIds:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)allEventIds;
- (id)allSortedByWeightEventIds;
- (id)allSortedEventIdsWithComparator:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)top;
- (id)topN:(unsigned long long)arg1;
- (id)topN:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)topUsingComparator:(CDUnknownBlockType)arg1;
- (double)weightForEventId:(id)arg1;

@end

