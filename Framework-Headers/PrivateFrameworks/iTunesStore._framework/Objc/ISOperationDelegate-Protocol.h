//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/NSObject-Protocol.h>

@class ISOperation, NSError, SSOperationProgress;

@protocol ISOperationDelegate <NSObject>

@optional
- (void)operation:(ISOperation *)arg1 failedWithError:(NSError *)arg2;
- (void)operation:(ISOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2;
- (void)operationFinished:(ISOperation *)arg1;
- (void)operationWillStart:(ISOperation *)arg1;
@end

