//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3MigrationMisgroupedTrack : NSObject
{
    long long _persistentID;
    long long _albumArtistPID;
}

@property (readonly, nonatomic) long long albumArtistPID; // @synthesize albumArtistPID=_albumArtistPID;
@property (readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;

- (id)initWithPersistentID:(long long)arg1 albumArtistPID:(long long)arg2;

@end

