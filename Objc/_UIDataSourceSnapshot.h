//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

@class _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot>
{
    _UIDataSourceSnapshotter *_snapshotter;
}

- (void).cxx_destruct;
- (id)initWithDataSourceSnapshotter:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;

@end

