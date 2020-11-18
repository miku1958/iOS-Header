//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol UIShareUIAccessoryHosting, UIShareUIAccessoryPresenting;

@protocol UIShareUIAccessoryPlugIn <NSObject>

@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, weak, nonatomic) id<UIShareUIAccessoryHosting> host;
@property (readonly, nonatomic) UIViewController<UIShareUIAccessoryPresenting> *inlineAccessoryViewController;

+ (id)shareSheetPlugInWithPresentingHost:(id<UIShareUIAccessoryHosting>)arg1 URLs:(NSArray *)arg2;
- (void)commitPendingChanges;
@end

