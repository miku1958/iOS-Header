//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRSuperframeStats : NSObject
{
    struct shared_ptr<rose::ResponderSuperframeStats> _stats;
}

@property (readonly) struct ResponderSuperframeStats stats;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithStats:(const struct ResponderSuperframeStats *)arg1;

@end

