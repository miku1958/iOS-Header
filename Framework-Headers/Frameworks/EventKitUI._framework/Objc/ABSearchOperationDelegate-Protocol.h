//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class ABSearchOperation, NSArray;

@protocol ABSearchOperationDelegate <NSObject>
- (void)searchOperation:(ABSearchOperation *)arg1 didFindMatches:(NSArray *)arg2 moreComing:(BOOL)arg3;
@end

