//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject
{
    long long _version;
    NSDictionary *_appDataDict;
    NSMutableDictionary *_dirtyPopularityDict;
}

@property (readonly, nonatomic) long long version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)createAppDataDictionary;
- (id)init;
- (id)initWithAppDataDictionary:(id)arg1;
- (void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2;
- (void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2;
- (id)songPopularityForAdamID:(long long)arg1;
- (id)songPopularityForIdentifiers:(id)arg1;

@end

