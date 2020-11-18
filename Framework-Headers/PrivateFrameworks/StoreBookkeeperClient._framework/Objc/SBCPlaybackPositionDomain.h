//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreBookkeeperClient/NSCopying-Protocol.h>
#import <StoreBookkeeperClient/NSSecureCoding-Protocol.h>

@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _supportsSyncProtocol;
    NSString *_domainIdentifier;
    NSString *_ubiquitousDatabasePath;
    NSString *_foreignDatabasePath;
}

@property (readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property (readonly, nonatomic) NSString *foreignDatabasePath; // @synthesize foreignDatabasePath=_foreignDatabasePath;
@property (nonatomic) BOOL supportsSyncProtocol; // @synthesize supportsSyncProtocol=_supportsSyncProtocol;
@property (strong, nonatomic) NSString *ubiquitousDatabasePath; // @synthesize ubiquitousDatabasePath=_ubiquitousDatabasePath;

+ (id)allSyncingDomains;
+ (id)domainForExtrasValues;
+ (id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 foreignDatabasePath:(id)arg2;

@end

