//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NPKGizmoDatabaseManifestEntry : NSObject
{
    NSString *_uniqueID;
    NSArray *_localManifestHashes;
    NSArray *_remoteManifestHashes;
}

@property (strong, nonatomic) NSArray *localManifestHashes; // @synthesize localManifestHashes=_localManifestHashes;
@property (strong, nonatomic) NSArray *remoteManifestHashes; // @synthesize remoteManifestHashes=_remoteManifestHashes;
@property (strong, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;

- (void).cxx_destruct;
- (id)description;

@end
