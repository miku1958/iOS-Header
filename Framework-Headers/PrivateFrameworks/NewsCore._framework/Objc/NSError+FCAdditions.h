//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FCAdditions)
- (BOOL)fc_isCancellationError;
- (BOOL)fc_isNetworkUnavailableError;
- (BOOL)fc_isServiceUnavailableError;
- (BOOL)fc_shouldRetry;
@end

