//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutOptions;
@protocol SXDOMModificationContext;

@protocol SXDOMModificationContextFactory <NSObject>
- (id<SXDOMModificationContext>)createModificationContextWithLayoutOptions:(SXLayoutOptions *)arg1;
@end

