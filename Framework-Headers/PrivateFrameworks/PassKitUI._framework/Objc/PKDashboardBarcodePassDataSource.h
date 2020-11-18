//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardPassDataSource-Protocol.h>
#import <PassKitUI/PKSecureElementObserver-Protocol.h>

@class NSString, PKGroup, PKPassGroupView;
@protocol PKDashboardDataSourceDelegate;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource>
{
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id<PKDashboardDataSourceDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2;
- (void)groupViewDidUpdatePassView:(id)arg1;
- (id)initWithGroupView:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)reloadData;
- (void)sendContentIsLoadedIfNecessary;
- (void)setDataSourceDelegate:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;

@end

