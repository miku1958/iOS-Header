//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBDataProvider, BBDataProviderManager, BBParentSectionDataProviderFactory, BBSectionInfo, NSString;

@protocol BBDataProviderManagerDelegate <NSObject>
- (void)dpManager:(BBDataProviderManager *)arg1 addDataProvider:(BBDataProvider *)arg2 withSectionInfo:(BBSectionInfo *)arg3;
- (void)dpManager:(BBDataProviderManager *)arg1 addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 removeDataProviderSectionID:(NSString *)arg2;
- (BBSectionInfo *)dpManager:(BBDataProviderManager *)arg1 sectionInfoForSectionID:(NSString *)arg2;
@end

