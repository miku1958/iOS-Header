//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

#import <NewsCore/FCFeedViewportRemoveGroupOperationType-Protocol.h>

@class FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff, NSString;

@interface FCFeedViewportRemoveGroupOperation : FCOperation <FCFeedViewportRemoveGroupOperationType>
{
    FCFeedViewport *_viewport;
    NSString *_groupID;
    FCFeedDescriptor *_feedDescriptor;
    CDUnknownBlockType _removeGroupCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_viewportDiff;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property (strong, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType removeGroupCompletionHandler; // @synthesize removeGroupCompletionHandler=_removeGroupCompletionHandler;
@property (strong, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property (readonly) Class superclass;
@property (strong, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
@property (strong, nonatomic) FCFeedViewportDiff *viewportDiff; // @synthesize viewportDiff=_viewportDiff;

- (void).cxx_destruct;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

