//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCModifyRecordsCommand.h>

@interface FCModifySubscriptionsCommand : FCModifyRecordsCommand
{
}

+ (id)desiredKeys;
- (id)initWithSubscriptions:(id)arg1 merge:(BOOL)arg2;
- (BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (id)recordZoneName;

@end
