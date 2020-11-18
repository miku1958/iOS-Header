//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/BBRemoteDataProvider-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class BBDataProviderProxy, HMDHomeManager, NSMutableDictionary, NSString;

@interface HMDBulletinProvider : NSObject <NSSecureCoding, BBRemoteDataProvider>
{
    BBDataProviderProxy *_proxy;
    NSMutableDictionary *_bulletins;
    HMDHomeManager *_homeManager;
}

@property (strong, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)configure:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (id)defaultSectionInfo;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary *)arg7 actionContext:(struct NSDictionary *)arg8;
- (void)reloadDefaultSectionInfo;
- (void)removeBulletin:(id)arg1;
- (void)removeBulletinWithRecordID:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
- (id)sortedBulletinsByDate;
- (BOOL)syncsBulletinDismissal;
- (void)updateBulletin:(id)arg1;

@end

