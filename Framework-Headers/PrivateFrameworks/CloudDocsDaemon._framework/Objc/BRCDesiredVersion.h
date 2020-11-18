//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCVersion.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface BRCDesiredVersion : BRCVersion <PQLValuable>
{
    union {
        unsigned int value;
        struct {
            unsigned int isFault:1;
            unsigned int startDownload:1;
            unsigned int wantsThumbnail:1;
            unsigned int userInitiated:1;
            unsigned int wantsContentForThumbnail:1;
        } ;
    } _flags;
    NSError *_downloadError;
    NSString *_serverName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFault;
@property (nonatomic) unsigned int options;
@property (readonly, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) BOOL wantsContent;
@property (readonly, nonatomic) BOOL wantsContentForThumbnail;
@property (readonly, nonatomic) BOOL wantsThumbnail;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (BOOL)isStillValidForEtag:(id)arg1;
- (void)markLiveAsFault;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

@end

