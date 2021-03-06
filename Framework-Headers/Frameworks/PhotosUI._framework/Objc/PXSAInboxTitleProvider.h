//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXInboxModelTitleProvider-Protocol.h>

@class NSString;

@interface PXSAInboxTitleProvider : NSObject <PXInboxModelTitleProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultSubtitleAttributes;
+ (id)defaultTitleAttributes;
+ (id)emphasizedTitleAttributes;
+ (void)preloadResources;
+ (id)supportingTextAttributes;
+ (id)workQueue;
- (id)_titleForCoalescedWithSectionInfo:(id)arg1;
- (id)_titleForCommentWithSectionInfo:(id)arg1;
- (id)_titleForInvitationResponseWithSectionInfo:(id)arg1 accepted:(BOOL)arg2;
- (id)_titleForLikeWithSectionInfo:(id)arg1;
- (void)requestTitleAndSubtitleForModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subtitleForModel:(id)arg1;
- (id)titleForModel:(id)arg1;

@end

