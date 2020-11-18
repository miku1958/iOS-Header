//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncAnchorMap-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap>
{
    NSMutableDictionary *_anchorsByObjectType;
}

@property (strong, nonatomic) NSMutableDictionary *anchorsByObjectType; // @synthesize anchorsByObjectType=_anchorsByObjectType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (void)enumerateAnchorsAndSyncEntitiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;

@end

