//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/CRBasicPayloadCommand.h>

@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand
{
    INIntent *_intent;
}

@property (copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)payload;

@end

