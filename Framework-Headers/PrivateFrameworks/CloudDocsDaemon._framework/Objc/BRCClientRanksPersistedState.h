//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession;

__attribute__((visibility("hidden")))
@interface BRCClientRanksPersistedState : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
}

@property (readonly, nonatomic) unsigned long long nextItemRowID;
@property (nonatomic) unsigned long long nextNotifRank;
@property (nonatomic) unsigned long long nextPackageItemRank;

+ (id)loadFromClientStateInSession:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)allocateItemRowID;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocatePackageItemRank;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
