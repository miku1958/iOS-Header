//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCSingleTagFeedDescriptor.h>

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor
{
    BOOL _disableGroupMerging;
    BOOL _disableFiltering;
    BOOL _enableSingletonGroups;
}

@property (nonatomic) BOOL disableFiltering; // @synthesize disableFiltering=_disableFiltering;
@property (nonatomic) BOOL disableGroupMerging; // @synthesize disableGroupMerging=_disableGroupMerging;
@property (nonatomic) BOOL enableSingletonGroups; // @synthesize enableSingletonGroups=_enableSingletonGroups;

- (id)feedGroupEmitters;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;

@end

