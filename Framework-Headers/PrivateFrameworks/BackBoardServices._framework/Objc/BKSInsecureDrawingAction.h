//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface BKSInsecureDrawingAction : BSAction
{
}

@property (readonly, nonatomic) NSArray *processIds;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithInsecureProcessIds:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
