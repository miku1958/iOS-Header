//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SWInteraction;

@protocol SWInteractionProvider <NSObject>

@property (readonly, nonatomic) id<SWInteraction> interaction;

- (void)onChange:(void (^)(id<SWInteraction>))arg1;
@end
