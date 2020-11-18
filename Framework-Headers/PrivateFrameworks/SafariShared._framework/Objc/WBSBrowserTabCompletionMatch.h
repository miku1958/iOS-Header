//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSTabCompletionMatch.h>

@class NSUUID;

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch
{
    NSUUID *_tabUUID;
    NSUUID *_windowUUID;
    unsigned long long _tabIndex;
}

@property (readonly, nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property (readonly, nonatomic) NSUUID *tabUUID; // @synthesize tabUUID=_tabUUID;
@property (readonly, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;

- (void).cxx_destruct;
- (id)initWithTabUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 userTypedString:(id)arg4 tabURL:(id)arg5 tabTitle:(id)arg6 forQueryID:(long long)arg7;
- (id)parsecDomainIdentifier;

@end
