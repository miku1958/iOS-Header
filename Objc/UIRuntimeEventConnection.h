//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIRuntimeConnection.h>

__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection
{
    unsigned long long eventMask;
}

@property (readonly) SEL action;
@property unsigned long long eventMask; // @synthesize eventMask;
@property (readonly) id target;

- (void)connect;
- (void)connectForSimulator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

