//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDelegateInfo.h>

@interface _IDSGenericCompletionHandler : IDSDelegateInfo
{
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

- (void)dealloc;
- (id)initWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
