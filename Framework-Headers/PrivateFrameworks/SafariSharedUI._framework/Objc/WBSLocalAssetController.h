//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSMobileAssetControllerProtocol-Protocol.h>

@class NSDate, NSURL;
@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;

@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol>
{
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSMobileAssetControllerDelegate> _delegate;
}

@property (weak) id<WBSMobileAssetControllerDelegate> delegate;
@property (strong, nonatomic) NSDate *lastUpdateDate;
@property (readonly, nonatomic) double updateInterval;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (void)queryURL:(CDUnknownBlockType)arg1;

@end

