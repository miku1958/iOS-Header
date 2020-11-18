//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDPreviewAction.h>

#import <DataDetectorsUI/SFSafariViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDURLPreviewAction : DDPreviewAction <SFSafariViewControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)ddPreviewActionItemsForSimpleDDActions:(id)arg1;
+ (id)ddPreviewActionItemsForWebURL:(id)arg1;
+ (BOOL)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
+ (id)previewActionsWithURL:(id)arg1 validatedURL:(id)arg2 result:(struct __DDResult *)arg3 context:(id)arg4;
+ (id)validatedURLWithURL:(id)arg1 result:(struct __DDResult *)arg2;
- (id)commitURL;
- (id)createViewController;
- (BOOL)requiresEmbeddingNavigationController;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setPreviewMode:(BOOL)arg1;

@end

