//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <WatchListKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;

@interface WLKUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBundleIDs:(id)arg1 accountName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

