//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RTXPCActivityTask : NSObject
{
    NSString *_identifier;
    CDUnknownBlockType _handler;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

