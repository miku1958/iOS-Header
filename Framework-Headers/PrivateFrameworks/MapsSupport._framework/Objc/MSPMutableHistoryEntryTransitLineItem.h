//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableHistoryEntry.h>

#import <MapsSupport/MSPHistoryEntryTransitLineItem-Protocol.h>

@class NSDate, NSString;
@protocol GEOTransitLineItem;

@interface MSPMutableHistoryEntryTransitLineItem : MSPMutableHistoryEntry <MSPHistoryEntryTransitLineItem>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<GEOTransitLineItem> lineItem;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly, copy, nonatomic) NSDate *usageDate;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;

@end

