//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate>
{
    NSMutableArray *_passThroughProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enumerateManagersUsingBlock:(CDUnknownBlockType)arg1;
+ (id)managerForWindow:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_init;
- (void)addPassthroughViewProvider:(id)arg1;
- (id)allPassThroughViews;
- (void)dealloc;
- (id)init;
- (void)removePassthroughViewProvider:(id)arg1;

@end

