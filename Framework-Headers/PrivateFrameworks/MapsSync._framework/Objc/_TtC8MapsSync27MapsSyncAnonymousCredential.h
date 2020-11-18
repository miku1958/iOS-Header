//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync16MapsSyncBaseItem.h>

@class MISSING_TYPE, NSData, NSDate, NSSet;

@interface _TtC8MapsSync27MapsSyncAnonymousCredential : _TtC8MapsSync16MapsSyncBaseItem
{
    MISSING_TYPE *_anonymousId;
    MISSING_TYPE *_mapsToken;
    MISSING_TYPE *_mapsTokenCreatedAt;
    MISSING_TYPE *_mapsTokenTTL;
    MISSING_TYPE *_reviewedPlaces;
    MISSING_TYPE *_reviewedPlacesUnstored;
}

@property (nonatomic, copy) NSSet *_reviewedPlacesUnstored;
@property (nonatomic, readonly) NSData *anonymousId;
@property (nonatomic, readonly) NSData *mapsToken;
@property (nonatomic, readonly) NSDate *mapsTokenCreatedAt;
@property (nonatomic, readonly) unsigned long long mapsTokenTTL;
@property (nonatomic, readonly) NSSet *reviewedPlaces;

+ (id)fetchLatestAnonymousCredential;
+ (id)fetchWithAnonymousId:(id)arg1;
- (void).cxx_destruct;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (void)executeOnFirstSave:(id)arg1;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;

@end
