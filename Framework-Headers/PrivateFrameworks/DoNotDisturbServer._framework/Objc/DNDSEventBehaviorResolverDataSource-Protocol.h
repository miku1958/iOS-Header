//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDBypassSettings, DNDSEventBehaviorResolver, DNDState, NSString;

@protocol DNDSEventBehaviorResolverDataSource <NSObject>
- (DNDState *)currentStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (DNDBypassSettings *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 bypassSettingsForClientIdentifier:(NSString *)arg2;
@end

