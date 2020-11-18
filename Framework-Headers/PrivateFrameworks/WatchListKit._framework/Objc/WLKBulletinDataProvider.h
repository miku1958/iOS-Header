//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/BBRemoteDataProvider-Protocol.h>

@class NSString, WLKBulletinStore;
@protocol WLKBulletinDataProviderDelegate;

@interface WLKBulletinDataProvider : NSObject <BBRemoteDataProvider>
{
    id<WLKBulletinDataProviderDelegate> _delegate;
    WLKBulletinStore *_bulletinStore;
}

@property (strong, nonatomic) WLKBulletinStore *bulletinStore; // @synthesize bulletinStore=_bulletinStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WLKBulletinDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)sectionIdentifier;
- (id)sortDescriptors;

@end

