//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKTextSessionAction.h>

@class STKListItemsSessionData;

@interface STKListItemsSessionAction : STKTextSessionAction
{
}

@property (readonly, nonatomic) STKListItemsSessionData *sessionData;

- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)sendSuccessWithSelectedItemIndex:(unsigned long long)arg1;

@end
