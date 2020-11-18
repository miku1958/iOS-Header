//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface BookmarkDAVMoveURLRewriter : NSObject
{
    NSDictionary *_remoteMoveMap;
    NSArray *_sortedRemoteSourceServerIDs;
}

- (id)URLByRewritingURL:(id)arg1;
- (id)_depthSortedRemoteSourceServerIDs;
- (id)createURLByRewritingURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteMoveMap:(id)arg1;

@end
