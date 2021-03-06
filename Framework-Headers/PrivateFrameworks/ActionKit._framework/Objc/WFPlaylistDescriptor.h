//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _entireMusicLibrary;
    NSString *_playlistName;
    NSNumber *_persistentIdentifier;
}

@property (readonly, nonatomic) BOOL entireMusicLibrary; // @synthesize entireMusicLibrary=_entireMusicLibrary;
@property (readonly, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (readonly, copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntireMusicLibrary;
- (id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

