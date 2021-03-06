//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

@class NSString, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot>
{
    _UIDataSourceSnapshotter *_snapshotter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (id)initWithDataSourceSnapshotter:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct _NSRange)rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;

@end

