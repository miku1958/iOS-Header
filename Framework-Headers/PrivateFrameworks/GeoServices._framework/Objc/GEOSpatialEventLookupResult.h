//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject
{
    NSMapTable *_parametersToEventsMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMapTable:(id)arg1;
- (id)poiEventsForSpatialLookupParameters:(id)arg1;

@end
