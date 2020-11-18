//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject
{
    NSString *_moduleIdentifier;
    id<CCUIContentModuleContextDelegate> _delegate;
}

@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;

+ (id)_sharedOpenAppService;
+ (id)_sharedOpenApplicationOptions;
+ (BOOL)areAnimationsPermitted;
+ (void)initialize;
+ (void)performWithoutAnimationWhileHidden:(CDUnknownBlockType)arg1;
+ (void)setAnimationsPermitted:(BOOL)arg1;
- (void).cxx_destruct;
- (void)dismissControlCenter;
- (void)dismissModule;
- (void)enqueueStatusUpdate:(id)arg1;
- (void)expandedModuleDidUpdatePreferredSize;
- (id)initWithModuleIdentifier:(id)arg1;
- (void)openApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestExpandModule;

@end

