//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPOperation, NSDictionary, NSError;

@protocol FPOperationProgressDelegate <NSObject>
- (void)operation:(FPOperation *)arg1 didReceiveProgressInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

