//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXMoreFromInteractionHandlerFactory-Protocol.h>
#import <NewsUI/SXMoreFromPublisherActionTitleProviding-Protocol.h>
#import <NewsUI/SXMoreFromPublisherLogoProviding-Protocol.h>

@class NSString, NUVideoViewController;

@interface NUVideoViewControllerMoreFromManager : NSObject <SXMoreFromPublisherActionTitleProviding, SXMoreFromPublisherLogoProviding, SXMoreFromInteractionHandlerFactory>
{
    NUVideoViewController *_videoViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NUVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;

- (void).cxx_destruct;
- (id)_callToActionTitleForVideoItem:(id)arg1;
- (id)_callToActionURLForVideoItem:(id)arg1;
- (id)actionTitleForVideo:(id)arg1;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)init;
- (id)initWithVideoViewController:(id)arg1;
- (CDUnknownBlockType)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
