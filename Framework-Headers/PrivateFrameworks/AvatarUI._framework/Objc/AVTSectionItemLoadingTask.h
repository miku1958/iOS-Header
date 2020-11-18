//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTPreloadingTask-Protocol.h>

@class NSString;
@protocol AVTAvatarAttributeEditorSectionItemPrefetching;

@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask>
{
    BOOL canceled;
    CDUnknownBlockType _completionHandler;
    id<AVTAvatarAttributeEditorSectionItemPrefetching> _sectionItem;
}

@property (getter=isCanceled) BOOL canceled; // @synthesize canceled;
@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) id<AVTAvatarAttributeEditorSectionItemPrefetching> sectionItem; // @synthesize sectionItem=_sectionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSectionItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

