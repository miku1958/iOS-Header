//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class UIView;
@protocol SXAction;

@protocol SXComponentActionHandler <NSObject>
- (void)handleAction:(id<SXAction>)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect)arg3 invocationType:(unsigned long long)arg4;
@end

