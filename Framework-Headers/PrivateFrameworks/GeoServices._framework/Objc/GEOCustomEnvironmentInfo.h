//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo
{
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (void)delete;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;
- (BOOL)isActive;
- (void)makeActive;
- (id)overrideURLs;
- (void)save;
- (void)updateWithURLs:(id)arg1;

@end

