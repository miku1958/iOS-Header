//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>
#import <NewsUI/SVVideoViewControllerConfiguration-Protocol.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration>
{
    BOOL _preferredMuteState;
    BOOL _pagingAllowed;
    BOOL _sharingEnabled;
    NUVideoViewControllerAdConfiguration *_adConfiguration;
}

@property (readonly, copy, nonatomic) NUVideoViewControllerAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property (readonly, nonatomic, getter=isPagingAllowed) BOOL pagingAllowed; // @synthesize pagingAllowed=_pagingAllowed;
@property (readonly, nonatomic) BOOL preferredMuteState; // @synthesize preferredMuteState=_preferredMuteState;
@property (readonly, nonatomic, getter=isSharingEnabled) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSharingEnabled:(BOOL)arg1 preferredMuteState:(BOOL)arg2 pagingAllowed:(BOOL)arg3 adConfiguration:(id)arg4;

@end

