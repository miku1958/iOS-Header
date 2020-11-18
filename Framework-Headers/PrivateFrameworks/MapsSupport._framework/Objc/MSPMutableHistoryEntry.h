//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPHistoryEntry-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPHistoryEntryStorage, NSDate, NSString, NSUUID;

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject>
{
    BOOL _immutable;
    NSUUID *_storageIdentifier;
    NSDate *_usageDate;
    MSPHistoryEntryStorage *_storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_isImmutable) BOOL immutable; // @synthesize immutable=_immutable;
@property (readonly, nonatomic) MSPHistoryEntryStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *usageDate; // @synthesize usageDate=_usageDate;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (void)initialize;
+ (id)mutableHistoryEntryForStorage:(id)arg1;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
- (void).cxx_destruct;
- (void)_assertNotImmutable;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (void)_markImmutable;
- (id)copyIfValidWithError:(out id *)arg1;
- (void)ifMutableSearch:(CDUnknownBlockType)arg1 ifMutableRoute:(CDUnknownBlockType)arg2 ifMutablePlaceDisplay:(CDUnknownBlockType)arg3 ifMutableTransitLineItem:(CDUnknownBlockType)arg4;
- (void)ifSearch:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifPlaceDisplay:(CDUnknownBlockType)arg3 ifTransitLineItem:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (BOOL)isFailed;
- (BOOL)isUserVisibleDuplicateOfEntry:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)storageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;

@end
