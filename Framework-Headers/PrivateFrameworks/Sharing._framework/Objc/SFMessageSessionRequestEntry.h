//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SFMessageSessionRequestEntry : NSObject
{
    BOOL _allowUnencrypted;
    CDUnknownBlockType _handler;
    NSDictionary *_options;
}

@property (nonatomic) BOOL allowUnencrypted; // @synthesize allowUnencrypted=_allowUnencrypted;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (copy, nonatomic) NSDictionary *options; // @synthesize options=_options;

- (void).cxx_destruct;

@end
