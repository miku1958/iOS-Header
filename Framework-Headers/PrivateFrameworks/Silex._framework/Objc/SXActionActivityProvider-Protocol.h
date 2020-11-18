//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXAction, SXActionActivityGroup, SXActionPreviewActivity;

@protocol SXActionActivityProvider <NSObject>
- (id<SXActionActivityGroup>)activityGroupForAction:(id<SXAction>)arg1;

@optional
- (id<SXActionPreviewActivity>)previewActivityForAction:(id<SXAction>)arg1;
@end
