//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexWeb/NSObject-Protocol.h>

@class NSDictionary;
@protocol SWInteraction;

@protocol SWInteractionFactory <NSObject>
- (id<SWInteraction>)interactionForDictionary:(NSDictionary *)arg1;
@end
