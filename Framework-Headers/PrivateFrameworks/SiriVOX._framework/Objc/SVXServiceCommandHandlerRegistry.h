//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandHandlerRegistry : NSObject
{
    NSDictionary *_handlersByServiceCommandClassName;
}

- (void).cxx_destruct;
- (id)handlersForCommand:(id)arg1;
- (id)initWithHandlers:(id)arg1;

@end

