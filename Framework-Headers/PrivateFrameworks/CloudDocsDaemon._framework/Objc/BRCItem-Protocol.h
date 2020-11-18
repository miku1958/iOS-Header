//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCItemID, BRCLocalContainer, BRCServerZone, BRCStatInfo, NSNumber;

@protocol BRCItem <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) BRCLocalContainer *container;
@property (readonly, nonatomic) BOOL isAlias;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) NSNumber *ownerKey;
@property (readonly, nonatomic) BRCServerZone *serverZone;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (nonatomic) unsigned long long sharingOptions;
@property (readonly, nonatomic) BRCStatInfo *st;

- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;
@end
