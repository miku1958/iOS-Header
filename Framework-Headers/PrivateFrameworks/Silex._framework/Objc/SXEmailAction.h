//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAction.h>

@class NSString;

@interface SXEmailAction : SXAction
{
    NSString *_recipient;
    NSString *_subject;
}

@property (readonly, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property (readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)arg1 subject:(id)arg2;

@end

