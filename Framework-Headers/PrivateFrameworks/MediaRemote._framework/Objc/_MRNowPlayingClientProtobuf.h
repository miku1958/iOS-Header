//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;
    NSMutableArray *_bundleIdentifierHierarchys;
    NSString *_displayName;
    int _nowPlayingVisibility;
    NSString *_parentApplicationBundleIdentifier;
    int _processIdentifier;
    int _processUserIdentifier;
    _MRColorProtobuf *_tintColor;
    BOOL _isEmptyDeprecated;
    struct {
        unsigned int nowPlayingVisibility:1;
        unsigned int processIdentifier:1;
        unsigned int processUserIdentifier:1;
        unsigned int isEmptyDeprecated:1;
    } _has;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSMutableArray *bundleIdentifierHierarchys; // @synthesize bundleIdentifierHierarchys=_bundleIdentifierHierarchys;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasIsEmptyDeprecated;
@property (nonatomic) BOOL hasNowPlayingVisibility;
@property (readonly, nonatomic) BOOL hasParentApplicationBundleIdentifier;
@property (nonatomic) BOOL hasProcessIdentifier;
@property (nonatomic) BOOL hasProcessUserIdentifier;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (nonatomic) BOOL isEmptyDeprecated; // @synthesize isEmptyDeprecated=_isEmptyDeprecated;
@property (nonatomic) int nowPlayingVisibility; // @synthesize nowPlayingVisibility=_nowPlayingVisibility;
@property (strong, nonatomic) NSString *parentApplicationBundleIdentifier; // @synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier;
@property (nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property (nonatomic) int processUserIdentifier; // @synthesize processUserIdentifier=_processUserIdentifier;
@property (strong, nonatomic) _MRColorProtobuf *tintColor; // @synthesize tintColor=_tintColor;

+ (Class)bundleIdentifierHierarchyType;
- (void).cxx_destruct;
- (int)StringAsNowPlayingVisibility:(id)arg1;
- (void)addBundleIdentifierHierarchy:(id)arg1;
- (id)bundleIdentifierHierarchyAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdentifierHierarchysCount;
- (void)clearBundleIdentifierHierarchys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingVisibilityAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

